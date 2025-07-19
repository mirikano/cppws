//
// mdict3.cc
//

#include "mdict3.h"
#include "utf8string.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>


bool is_jyoshi (const utf8string& us) {
    if (us.size() != 1) {
        return false;
    }
    const std::vector<utf8string> jyoshi_list = {
        "は", "が", "と", "に", "の", "へ", "も", "を"
    };
    std::vector<utf8string>::const_iterator p1;
    for(p1 = jyoshi_list.begin(); p1 != jyoshi_list.end(); p1++) {
        if (us == *p1) {
            return true;
        }
    }
    return false;
}



void mdict3::load(const std::string fname) {
    std::ifstream ifs(fname);
    if(!ifs.is_open()) {
        std::cerr << "Cannnot open file " << fname << std::endl;
        exit(2);
    }
    std::vector<utf8string> morpheme_list;
    utf8string morpheme_buf;
    utf8::CharType prev_charType = utf8::NONE;
    utf8 c_char;
    while(ifs >> c_char) {
        utf8::CharType c_charType = c_char.get_chartype();
        utf8string c_char_us;
        c_char_us.push_back(c_char);
        if ((prev_charType == utf8::KANJI || prev_charType == utf8::KATAKANA || prev_charType == utf8::SYMBOL) && is_jyoshi(c_char_us)) {
            if (!morpheme_buf.empty()) {
                morpheme_list.push_back(morpheme_buf);
            }
            morpheme_list.push_back(c_char_us);
            morpheme_buf.clear();
            prev_charType = utf8::NONE;
            } else if (prev_charType != utf8::NONE && c_charType != prev_charType) {
                if (!morpheme_buf.empty()) {
                    morpheme_list.push_back(morpheme_buf);
                }
                morpheme_buf.clear();
                morpheme_buf.push_back(c_char);
                prev_charType = c_charType;
            } else {
                morpheme_buf.push_back(c_char);
                if (prev_charType == utf8::NONE) {
                    prev_charType = c_charType;
                }
            }
        }
        if (!morpheme_buf.empty()) {
            morpheme_list.push_back(morpheme_buf); 
        }
        ifs.close();
        if (morpheme_list.size() >= 4) {
            for(size_t i = 0; i <= morpheme_list.size() - 4; i++) {
            const utf8string& m1 = morpheme_list[i];
            add_morphemes(m1, morpheme_list[i + 1], morpheme_list[i + 2], morpheme_list[i + 3]);
            utf8::CharType m1_Type = m1.at(0).get_chartype();
            if (m1_Type == utf8::KANJI || m1_Type == utf8::KATAKANA) {
                start_dict[m1].times++;
            }
        }
    }
    srandom(time(NULL));
    update_counters();
    int sum = 0;
    for (l4_iterator l4 = start_dict.begin(); l4 != start_dict.end(); l4++) {
        sum += l4->second.times;
        l4->second.cuml = sum;
    }
}



void mdict3::dump(std::ostream& os) {
    l1_iterator l1;
    l2_iterator l2;
    l3_iterator l3;
    l4_iterator l4;
    for (l1 = dict.begin(); l1 != dict.end(); l1++) {
        for (l2 = l1->second.begin(); l2 != l1->second.end(); l2++) {
            for (l3 = l2->second.begin(); l3 != l2->second.end(); l3++) {
                for (l4 = l3->second.begin(); l4 != l3->second.end(); l4++) {
                    os << l1->first << "\t" << l2->first << "\t" << l3->first << "\t";
                    os << l4->first << "\t" << l4->second.times << "\t" << l4->second.cuml << std::endl;
                }
            }
        }
    }
}



void mdict3::add_morphemes(const utf8string& u1, const utf8string& u2, const utf8string& u3, const utf8string& u4) {
    dict[u1][u2][u3][u4].times++;
}



void mdict3::update_counters(){
    l1_iterator l1;
    l2_iterator l2;
    l3_iterator l3;
    l4_iterator l4;

    for (l1 = dict.begin(); l1 != dict.end(); l1++) {
        for (l2 = l1->second.begin(); l2 != l1->second.end(); l2++) {
            for (l3 = l2->second.begin(); l3 != l2->second.end(); l3++) {
                int sum = 0;
                for (l4 = l3->second.begin(); l4 != l3->second.end(); l4++) {
                    sum += l4->second.times;
                    l4->second.cuml = sum;
                }
            }
        }
    }

}

utf8string mdict3::get_next() {
    static const utf8string end_symbol("。");
    if (start_dict.empty()) {
        return end_symbol;
    }
    int total_count = start_dict.rbegin()->second.cuml;
    if (total_count == 0) {
        return end_symbol;
    }
    int random_index = (random() % total_count) + 1;

    for(l4_iterator l4 = start_dict.begin(); l4 != start_dict.end(); l4++) {
        if (random_index <= l4->second.cuml) {
            return l4->first;
        }
    }

    static const utf8string default_symbol("error");
    return default_symbol;
}

utf8string mdict3::get_next(const utf8string& c1) {
    static const utf8string end_symbol("。");
    l1_iterator l1;
    l1 = dict.find(c1);
    if (l1 == dict.end() || l1->second.empty()) {
        return end_symbol;
    }

    int total_count = 0;
    for (l2_iterator l2 = l1->second.begin(); l2 != l1->second.end(); l2++) {
        total_count += l2->second.rbegin()->second.rbegin()->second.cuml;
    }
    if (total_count == 0) {
        return end_symbol;
    }

    int random_index = (random() % total_count) + 1;
    for (l2_iterator l2 = l1->second.begin(); l2 != l1->second.end(); l2++) {
        int c_cuml = l2->second.rbegin()->second.rbegin()->second.cuml;
        if (random_index <= c_cuml) {
            return l2->first;
        }
        random_index -= c_cuml;
    }

    static const utf8string default_symbol("error");
    return default_symbol;
}



utf8string mdict3::get_next(const utf8string& c1, const utf8string& c2) {
    static const utf8string end_symbol("。");
    l1_iterator l1;
    l1 = dict.find(c1);
    if (l1 == dict.end() || l1->second.empty()) {
        return end_symbol;
    }

    l2_iterator l2;
    l2 = l1->second.find(c2);
    if (l2 == l1->second.end() || l2->second.empty()) {
        return end_symbol;
    }

    int total_count = l2->second.rbegin()->second.rbegin()->second.cuml;
    if (total_count == 0) {
        return end_symbol;
    }
    int random_index = (random() % total_count) + 1;

    for(l3_iterator l3 = l2->second.begin(); l3 != l2->second.end(); l3++) {
        if (random_index <= l3->second.rbegin()->second.cuml) {
            return l3->first;
        }
    }

    static const utf8string default_symbol("error");
    return default_symbol;

}



utf8string mdict3::get_next(const utf8string& c1, const utf8string& c2, const utf8string& c3) {
    static const utf8string end_symbol("。");
    l1_iterator l1;
    l1 = dict.find(c1);
    if (l1 == dict.end() || l1->second.empty()) {
        return end_symbol;
    }

    l2_iterator l2;
    l2 = l1->second.find(c2);
    if (l2 == l1->second.end() || l2->second.empty()) {
        return end_symbol;
    }

    l3_iterator l3;
    l3 = l2->second.find(c3);
    if (l3 == l2->second.end() || l3->second.empty()) {
        return end_symbol;
    }

    int total_count = l3->second.rbegin()->second.cuml;
    if (total_count == 0) {
        return end_symbol;
    }
    int random_index = (random() % total_count) + 1;


    for(l4_iterator l4 = l3->second.begin(); l4 != l3->second.end(); l4++) {
        if (random_index <= l4->second.cuml) {
            return l4->first;
        }
    }

    static const utf8string default_symbol("error");
    return default_symbol;
}

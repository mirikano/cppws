//
// mdict1.cc
//

#include <fstream>
#include "mdict1.h"

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

void mdict1::add_morphemes(const utf8string& u1, const utf8string& u2) {
    dict[u1][u2].times++;
}

void mdict1::load(const std::string fname) {
    std::ifstream ifs(fname);
    if(!ifs.is_open()) {
        std::cerr << "Cannnot open file " << fname << std::endl;
        exit(2);
    }

    utf8string morpheme_buf;
    utf8::CharType prev_charType = utf8::NONE;
    utf8string prev_morpheme;
    utf8 c_char;

    while(ifs >> c_char) {
        utf8::CharType c_charType = c_char.get_chartype();
        utf8string c_char_us;
        c_char_us.push_back(c_char);

        if ((prev_charType == utf8::KANJI || prev_charType == utf8::KATAKANA || prev_charType == utf8::SYMBOL) && is_jyoshi(c_char_us)) { 
            if (!morpheme_buf.empty()) {
                if (!prev_morpheme.empty()) {
                    add_morphemes(prev_morpheme, morpheme_buf);
                }
                prev_morpheme = morpheme_buf;
            }
            if (!prev_morpheme.empty()) {
                add_morphemes(prev_morpheme, c_char_us);
            }
            prev_morpheme = c_char_us;
            morpheme_buf.clear();
            prev_charType = utf8::NONE;
        } else if (prev_charType != utf8::NONE && c_charType != prev_charType) {
            if (!morpheme_buf.empty()) {
                if (!prev_morpheme.empty()) {
                    add_morphemes(prev_morpheme, morpheme_buf);
                }
                prev_morpheme = morpheme_buf;
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
        if (!prev_morpheme.empty()) {
            add_morphemes(prev_morpheme, morpheme_buf);
        }
        prev_morpheme = morpheme_buf;
    }
    ifs.close();
    
    std::map<utf8string, std::map<utf8string, counter>>::iterator p1;
    std::map<utf8string, counter>::iterator p2;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        int sum = 0;
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            sum += p2->second.times;
            p2->second.cumul = sum;
        }
    }
}

void mdict1::load0(const std::string fname) {
    std::ifstream ifs(fname);
    if(!ifs.is_open()) {
        std::cerr << "Cannot open file " << fname << std::endl;
        exit(2);
    }

    utf8string morpheme_buf;
    utf8string prev_morpheme;
    utf8::CharType prev_charType = utf8::NONE;
    utf8 c_char;

    while(ifs >> c_char) {
        utf8::CharType c_charType = c_char.get_chartype();
        if(prev_charType != utf8::NONE && c_charType != prev_charType) {
            if(!morpheme_buf.empty()) {
                if(!prev_morpheme.empty()) {
                    add_morphemes(prev_morpheme, morpheme_buf);
                }
                prev_morpheme = morpheme_buf;
            }
            morpheme_buf.clear();
        }
        morpheme_buf.push_back(c_char);
        prev_charType = c_charType;
    }

    if (!morpheme_buf.empty()) {
        if(!prev_morpheme.empty()) {
            add_morphemes(prev_morpheme, morpheme_buf);
        }
    }
    ifs.close();
    
    std::map<utf8string, std::map<utf8string, counter>>::iterator p1;
    std::map<utf8string, counter>::iterator p2;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        int sum = 0;
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            sum += p2->second.times;
            p2->second.cumul = sum;
        }
    }
}

void mdict1::dump(std::ostream& os) {
    std::map<utf8string, std::map<utf8string, counter>>::iterator p1;
    std::map<utf8string, counter>::iterator p2;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        os << p1->first;
        os << "\t";
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            os << p2->first;
            os << "\t";
            os << p2->second.times << "\t" << p2->second.cumul;
        }
        os << std::endl;
    }
}

utf8string mdict1::get_next(const utf8string& next) {
    std::map<utf8string, std::map<utf8string, counter>>::iterator p1;
    p1 = dict.find(next);
    if(p1 == dict.end() || p1->second.empty()) {
        static const utf8string end_symbol("。");
        return end_symbol;
    }
    
    int total_count = p1->second.rbegin()->second.cumul;
    int random_index = (random() % total_count) + 1;

    std::map<utf8string, counter>::iterator p2;
    for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
        if(random_index <= p2->second.cumul) {
            return p2->first;
        }
    }

    static const utf8string default_symbol("error");
    return default_symbol;
}


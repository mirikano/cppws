//
// sdict2.cc
//

#include "sdict2.h"
#include <fstream>
#include <cstdlib>
#include <ctime>


void sdict2::load(const std::string fname) {
    std::ifstream ifs(fname);

    if(!ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + fname));
    }
    std::string buf;
    while(getline(ifs, buf)) {
        std::vector<utf8> u_charline;
        size_t pos = 0;
        while(pos < buf.length()) {
            utf8 temp_char(&buf[pos]);
            int nbytes = temp_char.count_bytes();
            u_charline.push_back(temp_char);
            pos += nbytes;
        }
        if (u_charline.size() >= 3) {
            for(size_t i = 0; i < u_charline.size() - 2; i++) {
                const utf8& first = u_charline[i];
                const utf8& second = u_charline[i + 1];
                const utf8& third = u_charline[i + 2];
                dict[first][second][third].times++;
            }
        } 

    }
    ifs.close();

    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p1;
    std::map<utf8, std::map<utf8, counter>>::iterator p2;
    std::map<utf8, counter>::iterator p3;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            int sum = 0;
            for(p3 = p2->second.begin(); p3 != p2->second.end(); p3++) {
                sum += p3->second.times;
                p3->second.cuml = sum;
            }
        }
    }
}

void sdict2::dump(std::ostream& ios) {
    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p1;
    std::map<utf8, std::map<utf8, counter>>::iterator p2;
    std::map<utf8, counter>::iterator p3;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        ios << p1->first;
        ios << "\t";
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            ios << p2->first;
            ios << "\t";
            for(p3 = p2->second.begin(); p3 != p2->second.end(); p3++) {
                ios << p3->first;
                ios << "\t";
                ios << p3->second.times << "\t" << p3->second.cuml;
            }
        }
        ios << std::endl;
    }
}

utf8 sdict2::get_next(const utf8& c1, const utf8& c2) {
    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p1;
    p1 = dict.find(c1);
    if(p1 == dict.end() || p1->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }

    std::map<utf8, std::map<utf8, counter>>::iterator p2;
    p2 = p1->second.find(c2);
    if(p2 == p1->second.end() || p2->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }

    int total_count = p2->second.rbegin()->second.cuml;
    if(total_count == 0) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }
    int random_index = (random() % total_count) + 1;
    
    std::map<utf8, counter>::iterator p3;
    for(p3 = p2->second.begin(); p3 != p2->second.end(); p3++) {
        if(random_index <= p3->second.cuml) {
            return p3->first;
        }
    }

    static const utf8 default_symbol =  "error";
    return default_symbol;
}
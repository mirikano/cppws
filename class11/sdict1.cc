//
// sdict1.cc
//

#include "sdict1.h"
#include <fstream>
#include <cstdlib>
#include <ctime>


void sdict1::load(const std::string fname) {
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
        if (u_charline.size() >= 2) {
            for(size_t i = 0; i < u_charline.size() - 1; i++) {
                const utf8& first_char = u_charline[i];
                const utf8& second_char = u_charline[i + 1];
                dict[first_char][second_char].times++;
            }
        } 

    }
    ifs.close();

    std::map<utf8, std::map<utf8, counter>>::iterator p1;
    std::map<utf8, counter>::iterator p2;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        int sum = 0;
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            sum += p2->second.times;
            p2->second.cumul = sum;
        }
    }
}

void sdict1::dump(std::ostream& ios) {
    std::map<utf8, std::map<utf8, counter>>::iterator p1;
    std::map<utf8, counter>::iterator p2;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        ios << p1->first;
        ios << "\t";
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            ios << p2->first;
            ios << "\t";
            ios << p2->second.times << "\t" << p2->second.cumul;
        }
        ios << std::endl;
    }
}

utf8 sdict1::get_next(const utf8& next) {
    std::map<utf8, std::map<utf8, counter>>::iterator p1;
    p1 = dict.find(next);
    if(p1 == dict.end() || p1->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }
    
    int total_count = p1->second.rbegin()->second.cumul;
    int random_index = (random() % total_count) + 1;

    std::map<utf8, counter>::iterator p2;
    for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
        if(random_index <= p2->second.cumul) {
            return p2->first;
        }
    }

    static const utf8 default_symbol =  "error";
    return default_symbol;
}
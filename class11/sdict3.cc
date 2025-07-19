//
// sdict3.cc
//

#include "sdict3.h"
#include <fstream>
#include <cstdlib>
#include <ctime>


void sdict3::load(const std::string fname) {
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
        if (u_charline.size() >= 4) {
            for(size_t i = 0; i < u_charline.size() - 3; i++) {
                const utf8& first = u_charline[i];
                const utf8& second = u_charline[i + 1];
                const utf8& third = u_charline[i + 2];
                const utf8& fourth = u_charline[i + 3];
                dict[first][second][third][fourth].times++;
            }
        } 

    }
    ifs.close();

    std::map<utf8, std::map<utf8, std::map<utf8, std::map<utf8, counter>>>>::iterator p1;
    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p2;
    std::map<utf8, std::map<utf8, counter>>::iterator p3;
    std::map<utf8, counter>::iterator p4;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            for(p3 = p2->second.begin(); p3 != p2->second.end(); p3++) {
                int sum = 0;
                for(p4 = p3->second.begin(); p4 != p3->second.end(); p4++) {
                    sum += p4->second.times;
                    p4->second.cuml = sum;
                }
            }
        }
    }
}

void sdict3::dump(std::ostream& ios) {
    std::map<utf8, std::map<utf8, std::map<utf8, std::map<utf8, counter>>>>::iterator p1;
    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p2;
    std::map<utf8, std::map<utf8, counter>>::iterator p3;
    std::map<utf8, counter>::iterator p4;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        ios << p1->first;
        ios << "\t";
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++) {
            ios << p2->first;
            ios << "\t";
            for(p3 = p2->second.begin(); p3 != p2->second.end(); p3++) {
                ios << p3->first;
                for(p4 = p3->second.begin(); p4 != p3->second.end(); p4++) {
                    ios << p4->first;
                    ios << "\t";
                    ios << p4->second.times << "\t" << p4->second.cuml;
                }
            }
        }
        ios << std::endl;
    }
}

utf8 sdict3::get_next(const utf8& c1, const utf8& c2, const utf8& c3) {
    std::map<utf8, std::map<utf8, std::map<utf8, std::map<utf8, counter>>>>::iterator p1;
    p1 = dict.find(c1);
    if(p1 == dict.end() || p1->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }

    std::map<utf8, std::map<utf8, std::map<utf8, counter>>>::iterator p2;
    p2 = p1->second.find(c2);
    if(p2 == p1->second.end() || p2->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }

    std::map<utf8, std::map<utf8, counter>>::iterator p3;
    p3 = p2->second.find(c3);
    if(p3 == p2->second.end() || p3->second.empty()) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }

    int total_count = p3->second.rbegin()->second.cuml;
    if(total_count == 0) {
        static const utf8 end_symbol = "。";
        return end_symbol;
    }
    int random_index = (random() % total_count) + 1;
    
    std::map<utf8, counter>::iterator p4;
    for(p4 = p3->second.begin(); p4 != p3->second.end(); p4++) {
        if(random_index <= p4->second.cuml) {
            return p4->first;
        }
    }

    static const utf8 default_symbol =  "error";
    return default_symbol;
}
// 
// dict0.cc
//

#include <fstream>
#include "dict0.h"

void load_dict0(std::map<utf8, std::vector<utf8>>& dict, std::string fname){
    std::ifstream ifs(fname);
    if(!ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + fname));
    }
    std::string buf;
    while(getline(ifs, buf)) {
        std::vector<utf8> u_charline;
        size_t pos = 0;
        while (pos < buf.length()){
            utf8 temp_char(&buf[pos]);
            int nbytes = temp_char.count_bytes();
            u_charline.push_back(temp_char);
            pos += nbytes;
        }
        if (u_charline.size() >= 2) {
            for (size_t i = 0; i < u_charline.size() - 1; i++) {
                const utf8& first_char = u_charline[i];
                const utf8& second_char = u_charline[i + 1];
                dict[first_char].push_back(second_char);
            }
        }
    }
    ifs.close();
}


void dump_dict0(std::ostream& ios, std::map<utf8, std::vector<utf8>>& dict){
    std::map<utf8, std::vector<utf8>>::iterator p1;
    std::vector<utf8>::iterator v1;
    for(p1 = dict.begin(); p1 != dict.end(); p1++) {
        ios << p1->first;
        ios << "\t";
        for(v1 = p1->second.begin(); v1 != p1->second.end(); v1++) {
            ios << *v1;
        }
        ios << std::endl;
    }
}
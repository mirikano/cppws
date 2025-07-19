//
// sdict.cc
//

#include "sdict.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

int sdict::max_depth;


void sdict::fill_cumul(int depth) { 
    this->cumul = this->times;
    if(this->chars.empty()) {
        return;
    }
    std::map<utf8, sdict*>::const_iterator p1;
    for(p1 = this->chars.begin(); p1 != this->chars.end(); p1++) {
        sdict* child_node = p1->second;
        child_node->fill_cumul(depth + 1);
        this->cumul += child_node->cumul;
    }
}

void sdict::load(const std::string fname) {
    std::ifstream ifs(fname);

    if(!ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + fname));
    }

    std::string buf, file_contents;
    while (getline(ifs, buf))
    {
        file_contents += buf + '\n';
    }
    ifs.close();
    std::vector<utf8> u_charline;
    size_t pos = 0;
    while(pos < file_contents.length()) {
        utf8 temp_char(&file_contents[pos]);
        int nbytes = temp_char.count_bytes();
        u_charline.push_back(temp_char);
        pos += nbytes;
    }
    if (u_charline.size() < max_depth) return;

    for(size_t i = 0; i <= u_charline.size() - max_depth; i++) {
        sdict* node = this;
        for(int j = 0; j < max_depth; j++) {
            const utf8& c = u_charline[i + j];
            if (node->chars.find(c) == node->chars.end()) {
                node->chars[c] = new sdict();
            }
            node = node->chars.at(c);
        }
        node->times++;
    }
    
    this->fill_cumul(0);
    srand(time(NULL));
}
	
void sdict::dump(std::ostream& os, std::vector<utf8> prefix, int depth) {
    if (prefix.size() == depth && this->times > 0) {
        for(size_t i = 0; i < prefix.size(); i++) {
            os << prefix[i] << '\t';
        }
        os << this->times << '\t' << this->cumul << std::endl;
        return;
    }
    if (prefix.size() < depth) {
        std::map<utf8, sdict*>::const_iterator p1;
        for (p1 = this->chars.begin(); p1 != this->chars.end(); p1++){
            std::vector<utf8> next = prefix;
            next.push_back(p1->first);
            p1->second->dump(os, next, depth);
        }
    }
}
	
utf8 sdict::get_next(const std::vector<utf8>& context, int key_length) {
    sdict* node = this;
    int efective_length = key_length;
    if (efective_length > context.size()) {
        efective_length = context.size();
    }
    size_t start_index = context.size() - efective_length;

    for(size_t i = 0; i < (size_t)efective_length; i++) {
        const utf8& c = context[start_index + i];
        if (node->chars.find(c) == node->chars.end()) {
            return utf8("");
        }
        node = node->chars.at(c);
    } 

    if (node->chars.empty() || node->cumul == 0) {
        return utf8("");
    }
    int r = rand() % node->cumul;
    std::map<utf8, sdict*>::const_iterator p1;
    for(p1 = node->chars.begin(); p1 != node->chars.end(); p1++) {
        const utf8& key = p1->first;
        sdict* child_node = p1->second;
        if(r < child_node->cumul) {
            return key;
        }
        r -= child_node->cumul;
    }
    return utf8("");
}
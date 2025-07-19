//
// dump_morpheme0.cc
//

#include <iostream>
#include <fstream>
#include "utf8string.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }

    ifstream ifs(argv[1]);
    if(!ifs.is_open()) {
        cerr << "Cannnot open file " << argv[1] << endl;
        exit(2);
    }

    utf8string morpheme_buf;
    utf8::CharType prev_charType = utf8::NONE;
    utf8 c_char;

    while(ifs >> c_char) {
        utf8::CharType c_charType = c_char.get_chartype();
        if (prev_charType != utf8::NONE && c_charType != prev_charType) { 
            if (!morpheme_buf.empty()) {
                cout << morpheme_buf << endl;
            }
            morpheme_buf.clear();
        }
        morpheme_buf.push_back(c_char);
        prev_charType = c_charType; 
    }

    if (!morpheme_buf.empty()) {
        cout << morpheme_buf << endl;
    }
}
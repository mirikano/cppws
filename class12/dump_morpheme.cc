//
// dump_morpheme.cc
//

#include <iostream>
#include <fstream>
#include <vector>
#include "utf8string.h"

using namespace std;

bool is_jyoshi (const utf8string& us) {
    if (us.size() != 1) {
        return false;
    }

    const vector<utf8string> jyoshi_list = {
        "は", "が", "と", "に", "の", "へ", "も", "を"
    };

    vector<utf8string>::const_iterator p1;
    for(p1 = jyoshi_list.begin(); p1 != jyoshi_list.end(); p1++) {
        if (us == *p1) {
            return true;
        }
    }
    return false;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }

    ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        cerr << "Cannnot open file " << argv[1] << endl;
        exit(2);
    }

    utf8string morpheme_buf;
    utf8::CharType prev_charType = utf8::NONE; 
    utf8 c_char;

    while(ifs >> c_char) {
        utf8::CharType c_charType = c_char.get_chartype();
        utf8string c_char_us;
        c_char_us.push_back(c_char);

        if ((prev_charType == utf8::KANJI || prev_charType == utf8::KATAKANA || prev_charType == utf8::SYMBOL) && is_jyoshi(c_char_us)) { 
            if (!morpheme_buf.empty()) {
                cout << morpheme_buf << endl;
            }
            cout << c_char_us << endl;
            morpheme_buf.clear();
            prev_charType = utf8::NONE; 
        } else if (prev_charType != utf8::NONE && c_charType != prev_charType) {
            if (!morpheme_buf.empty()) {
                cout << morpheme_buf << endl;
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
        cout << morpheme_buf << endl;
    }
}
//
// gen_sentence.cc
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "utf8.h"
#include "sdict.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    string config = argv[2];

    ifstream config_ifs(config);
    if(!config_ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + config));
    }
    string line;
    getline(config_ifs, line);
    int key_num = stoi(line);

    string start;
    for(int i = 0; i < key_num; i++) {
        if(!getline(config_ifs, line)) break;
        start += line;
    }

    getline(config_ifs, line);
    int num = stoi(line);
    config_ifs.close();

    sdict dict;
    dict.set_depth(4);
    dict.load(dictionary);
    srandom(time(NULL));

    cout << start;
    vector<utf8> context;
    for(size_t pos = 0; pos < start.length();) {
        utf8 u_char(start.c_str() + pos);
        context.push_back(u_char);
        pos += u_char.count_bytes();
    }

    for(int i = 0; i < num; i++) {
        while(true) {
            utf8 next = dict.get_next(context, key_num);
            if (next.is_null())  break;
            cout << next;
            context.push_back(next);
            if (next == utf8("。")) {
                cout << endl;
                break;
            }
        }
    }
    
    return 0;
}
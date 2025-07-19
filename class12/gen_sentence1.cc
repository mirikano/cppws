//
// gen_sentence1.cc
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "utf8string.h"
#include "mdict1.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    string config = argv[2];

    utf8string start; 
    int num;
    ifstream config_ifs(config);
    if(!config_ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + config));
    }
    config_ifs >> start >> num;
    config_ifs.close();

    mdict1 dict;
    dict.load(dictionary);


    srandom(time(NULL));
    utf8string word = start;
    for(int i = 0; i < num; i++) {
        cout << word;
        while(!(word == "。")) {
            word = dict.get_next(word);
            cout << word;
        }
        cout << endl;

        if(i < num -1) {
            word = dict.get_next(word);
        }
    }
    
    return 0;
}
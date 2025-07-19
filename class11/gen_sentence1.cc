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
#include "utf8.h"
#include "sdict1.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    string config = argv[2];

    utf8 start; 
    int num;
    ifstream config_ifs(config);
    if(!config_ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + config));
    }
    config_ifs >> start >> num;
    config_ifs.close();

    sdict1 dict;
    dict.load(dictionary);

    ofstream o_dump("dump.txt");
    if(o_dump) {
        dict.dump(o_dump);
    }
    o_dump.close();

    srandom(time(NULL));
    utf8 word = start;
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
    

}
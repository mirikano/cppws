//
// gen_sentence0.cc
//

#include <map>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "utf8.h"
#include "dict0.h"

using namespace std;

const utf8& get_next_char(map<utf8, vector<utf8>>& dict, utf8 word) {
    map<utf8, vector<utf8>>::const_iterator p1;
    p1 = dict.find(word);
    if(p1 == dict.end() || p1->second.empty()) {
        static const utf8 endsymbol = "。";
        return endsymbol;
    }
    const vector<utf8>& next = p1->second;
    int random_index = random() % next.size();
    return next[random_index];
}

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

    map<utf8, vector<utf8>> dict;
    load_dict0(dict, dictionary);

    ostream o_dump("dump0.txt");
    if(o_dump) {
        dump_dict0(o_dump,dict);
    }
    o_dump.close();

    srandom(time(NULL));
    utf8 word = start;
    for(int i = 0; i < num; i++) {
        cout << word;
        while(!(word == "。")) {
            word = get_next_char(dict, word);
            cout << word;
        }
        cout << endl;

        if(i < num -1) {
            word = get_next_char(dict, word);
        }
    }
    

}
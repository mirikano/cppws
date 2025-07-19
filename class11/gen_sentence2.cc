//
// gen_sentence2.cc
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "utf8.h"
#include "sdict2.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    string config = argv[2];

    utf8 s1, s2; 
    int num;
    ifstream config_ifs(config);
    if(!config_ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + config));
    }
    config_ifs >> s1 >> s2 >> num;
    config_ifs.close();

    sdict2 dict;
    dict.load(dictionary);

    ofstream o_dump("dump.txt");
    if(o_dump) {
        dict.dump(o_dump);
    }
    o_dump.close();

    srandom(time(NULL));
    utf8 c1 = s1;
    utf8 c2 = s2;
    for(int i = 0; i < num; i++) {
        cout << c1;
        cout << c2;
        while(!(c2 == "。")) {
            utf8 c3 = dict.get_next(c1,c2);
            cout << c3;
            c1 = c2;
            c2 = c3;
        }
        cout << endl;

        if(i < num -1) {
            utf8 next = dict.get_next(c1,c2);
            c1 = next;
            c2 = dict.get_next(c2,c1); //この時のc2は古いもの、c1は先ほど生成した新しいもの
        }
    }
}
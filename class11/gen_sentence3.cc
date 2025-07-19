//
// gen_sentence3.cc
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "utf8.h"
#include "sdict3.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 3) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    string config = argv[2];

    utf8 s1, s2, s3; 
    int num;
    ifstream config_ifs(config);
    if(!config_ifs.is_open()) {
        throw(std::ios_base::failure("Failed to open file:" + config));
    }
    config_ifs >> s1 >> s2 >> s3 >> num;
    config_ifs.close();

    sdict3 dict;
    dict.load(dictionary);

    ofstream o_dump("dump.txt");
    if(o_dump) {
        dict.dump(o_dump);
    }
    o_dump.close();

    srandom(time(NULL));
    utf8 c1 = s1;
    utf8 c2 = s2;
    utf8 c3 = s3;
    for(int i = 0; i < num; i++) {
        cout << c1;
        cout << c2;
        cout << c3;
        while(!(c3 == "。")) {
            utf8 c4 = dict.get_next(c1,c2,c3);
            cout << c4;
            c1 = c2;
            c2 = c3;
            c3 = c4;
        }
        cout << endl;

        if(i < num -1) {
            utf8 next = dict.get_next(c1,c2,c3);
            c1 = next;
            c2 = dict.get_next(c2,c3,c1); //この時のc2とc3は古いもの、c1は先ほど生成した新しいもの
            c3 = dict.get_next(c3,c1,c2); //この時のc3は古いもの、c1とc2は先ほど生成した新しいもの
        }
    }
}
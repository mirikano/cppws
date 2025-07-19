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
#include "utf8string.h"
#include "mdict3.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];

    utf8string s1, s2, s3; 
    int num;
    cin >> s1 >> s2 >> s3 >> num;

    mdict3 dict;
    dict.load(dictionary);

    srandom(time(NULL));
    utf8string c1 = s1;
    utf8string c2 = s2;
    utf8string c3 = s3;
    for(int i = 0; i < num; i++) {
        cout << c1;
        cout << c2;
        cout << c3;
        while(!(c3 == "。")) {
            utf8string c4 = dict.get_next(c1,c2,c3);
            cout << c4;
            c1 = c2;
            c2 = c3;
            c3 = c4;
        }
        cout << endl;

        if(i < num -1) {
            utf8string next = dict.get_next(c1,c2,c3);
            c1 = next;
            c2 = dict.get_next(c2,c3,c1); //この時のc2とc3は古いもの、c1は先ほど生成した新しいもの
            c3 = dict.get_next(c3,c1,c2); //この時のc3は古いもの、c1とc2は先ほど生成した新しいもの
        }
    }
}
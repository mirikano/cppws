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
#include "utf8string.h"
#include "mdict3.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cerr << "Usage: " << argv[0] << "dictionaryfile configfile" << endl;
        exit(1);
    }
    string dictionary = argv[1];
    int num;
    cin >> num;

    mdict3 dict;
    dict.load(dictionary);

    srandom(time(NULL));
    for(int i = 0; i < num; i++) {
        utf8string c1 = dict.get_next();
        if (c1.empty()) {
            cout << "Cannot generate." << endl;
            continue;
        }
        utf8string c2 = dict.get_next(c1);
        if (c2.empty()) {
            cout << c1 << endl;
            continue;
        }
        utf8string c3 = dict.get_next(c1, c2);
        if (c3.empty()) {
            cout << c1 << c2 << endl;
            continue;
        }
        cout << c1 << c2 << c3;
        while(!(c3 == "。" || c3 == "error")) {
            utf8string c4 = dict.get_next(c1,c2,c3);
            if (c4 == "error") break;
            cout << c4;
            c1 = c2;
            c2 = c3;
            c3 = c4;
        }
        cout << endl;

        // if(i < num -1) {
        //     utf8string next = dict.get_next(c1,c2,c3);
        //     c1 = next;
        //     c2 = dict.get_next(c2,c3,c1); //この時のc2とc3は古いもの、c1は先ほど生成した新しいもの
        //     c3 = dict.get_next(c3,c1,c2); //この時のc3は古いもの、c1とc2は先ほど生成した新しいもの
        // }
    }
}
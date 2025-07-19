//
// u8char_count.cc
//

#include <map>
#include <iostream>
#include "utf8.h"

using namespace std;

int main() {
    map<utf8, int> u_count{};
    map<utf8, int>::const_iterator p;

    utf8 input;
    while(true) {
        cin >> input;
        if(cin.eof()) break;
        //集計処理
        if(((p = u_count.find(input)) != u_count.end())) {
            u_count.find(input)->second++;
        } else {
            u_count.insert({input, 1});
        }

    }

    for(p = u_count.begin(); p != u_count.end(); p++) {
        cout << p->first << "," << p->second << endl;
    }
}
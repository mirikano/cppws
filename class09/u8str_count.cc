//
// u8str_count.cc
//

#include <map>
#include <iostream>
#include "utf8string.h"

using namespace std;

int main() {
    map<utf8string, int> u_count{};
    map<utf8string, int>::const_iterator p;

    utf8string input;
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
//
// count_2gram.cc
//

#include <map>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "utf8.h"

using namespace std;

map<utf8, map<utf8, int>> counter;

map<utf8, map<utf8,int>>::iterator p1;
map<utf8, int>::iterator p2;


int main(int argc, char* argv[]) 
{
    if (argc < 2) exit(1);

    ifstream ifs(argv[1]);
    if(!ifs.is_open()) {
        cerr << "Cannnot open file " << argv[1] << endl;
        exit(2);
    }
    string buf;
    while(getline(ifs, buf)) {
        vector<utf8> u_charline;
        size_t pos = 0;
        while(pos < buf.length()) {
            utf8 temp_char(&buf[pos]);
            int nbytes = temp_char.count_bytes();
            u_charline.push_back(temp_char);
            pos += nbytes;
        }
        if (u_charline.size() >= 2) {
            for (size_t i = 0; i < u_charline.size() - 1; i++) {
                const utf8& first_char = u_charline[i];
                const utf8& second_char = u_charline[i + 1];
                counter[first_char][second_char]++;
            }
        }
    }
    
    ifs.close();

    for(p1 = counter.begin(); p1 != counter.end(); p1++) {
        for(p2 = p1->second.begin(); p2 != p1->second.end(); p2++){
            cout << p1->first << "," << p2->first << "," << p2->second << endl;
        }
    }
}
//
//        gen1gram.cc
//

#include "utf8.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{   
    string source;
    cout << "文字列は？: ";
    cin >> source;

    int offset=0;
    const char* sp = source.c_str();

    while(*(sp + offset) != '\0') {
	    utf8 first(sp+offset);
        cout << first << '\n' ;
        offset += first.count_bytes();
    }
    return 0;
}

//
// utf8_test.cc
// 

#include "utf8.h"
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    // constructor from byte pattern
    utf8 u2[] = { utf8(0xe6, 0xb3, 0x95), utf8(0xe6, 0x94, 0xbf),
		    utf8(0xe5, 0xa4, 0xa7), utf8(0xe5, 0xad, 0xa6) };
    utf8 u3[4];
    utf8 u4;
    utf8 u5[10];

    // show utf-8 character
    for (int i=0; i < 4; i++) {
	cout << i << " : " << u2[i] << endl;
    }

    string s("法政大学");
    int offset=0;
    const char* sp=s.c_str();
    for(int i=0; i < 4; i++) {
	u3[i]=utf8(sp+offset);
	offset+=u3[i].count_bytes();
	cout << u3[i] << '/' ;
    }
    cout << endl;

    // using istream
    while(cin >> u4) {
	cout << u4 << '/';
    }
    cout << endl;

    // using stringstream
    stringstream ss;
    ss << "情報科学部";
    int i = 0;
    while(ss >> u5[i]) {
	cout << u5[i++] << '/';
    }
    cout << endl;

    // act as utf-8 string
    u5[i]=utf8();
    cout << u5 << endl;

    cout << sizeof(utf8) << '/' << sizeof(u4) << '/' << sizeof(u5) << endl;
}

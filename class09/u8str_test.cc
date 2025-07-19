//
// u8str_test.cc
//

#include <iostream>
#include "utf8string.h"

using namespace std;

int main() {
    utf8string ustr1 = u8"法政大学";
    cout << ustr1 << endl;

    utf8string ustr2 = u8"小金井";

    if (ustr1 > ustr2)
	cout << ustr1 << " > " << ustr2 << endl;
    else if (ustr1 < ustr2)
	cout << ustr1 << " < " << ustr2 << endl;
    else
	cout << ustr1 << " = " << ustr2 << endl;

    cout << "Please input strings" << endl;
    utf8string inputstr;
    int i = 0;
    while (true) {
	cin >> inputstr;
	if (cin.eof())	break;
	cout << i++ << ": " << inputstr << endl;
    }

}

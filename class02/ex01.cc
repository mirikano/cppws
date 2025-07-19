//
//	ex01.cc
//	

#include <iostream>

using namespace std;

int main()
{
    string line;

    cout << "エコぴょん：メッセージをどうぞ"
	 << endl;
    cout << "あなた：";

    getline(cin, line);
        while(!line.empty()) {
        cout << "エコぴょん:ふ〜ん，それで?"
	     << endl;
        cout << "あなた:";
        getline(cin,line);
    }

    cout << "エコぴょん:ばいば〜い"
         << endl;
    return 0;
}

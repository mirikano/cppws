//
//	ai01.cc
//	

#include <iostream>

using namespace std;

int main()
{
    string line;
    int n = 0;

    cout << "エコぴょん：メッセージをどうぞ"
	 << endl;
    cout << "あなた：";

    getline(cin, line);
        while(!line.empty()) {
        n++;
        if (n == 1) {
            cout << "エコぴょん:はじめまして！"
             << endl;
            cout << "あなた:";
            getline(cin,line);
        }
        int r = rand() % 5 + 1;
        switch (r)
        {
            case 1:
                cout << "エコぴょん:ふ〜ん，それで?"
                << endl;
                break;
            case 2:
                cout << "エコぴょん:それは大変だ!"
                << endl;
                break;
            case 3:
                cout << "エコぴょん:イイネ!"
                << endl;
                break;
            case 4:
                cout << "エコぴょん:なるほど、それから?"
                << endl;
                break;
            case 5:
                cout << "エコぴょん:こんにちは"
                << endl;
                break;
        }
        cout << "あなた:";
        getline(cin,line);
    }
    cout << "エコぴょん:ばいば〜い"
         << endl;
    return 0;
}

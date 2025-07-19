//
//        ex02.cc
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string      source;
    int         n;

    cout << "文字列は？: ";
    cin >> source;
    do {
        cout << "何文字目から？ (quit to -1): ";
        cin >> n;
        if (n >= 0) {
            unsigned char c = source[n];
            cout << hex << int(c) << " : " << &source[n] << endl;
        }
    } while (n >= 0);
    
    return 0;
}

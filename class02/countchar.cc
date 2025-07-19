//
//        countchar.cc
//

#include <iostream>
#include <string>

using namespace std;

string      source;
int n = 0;
int m = 0;

void countchar(string source) {
    while (1){
        unsigned char c = source[n];
        if ((int(c) & 0xE0) == 0xC0) { // 2byte
            m = m + 1;
        } else if ((int(c) & 0xF0) == 0xE0) { //3byte
            m = m + 2;
        } else if ((int(c) & 0xF8) == 0xF0) { //4byte
            m = m + 3;
        }
        if (int(c) == 0) {
            break;
        }
        n++;
    }
}

int main()
{
    cout << "文字列は？: ";
    cin >> source;
    cout << "文字列：" << source << endl;
    countchar(source);
    int count = n;
    count = count - m;
    cout << "文字数：" << int(count) << "文字 (" << int(n) << "byte)";
    return 0;
}

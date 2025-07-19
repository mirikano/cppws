//
//        countchar2.cc
//

#include <iostream>
#include <string>

using namespace std;

string source;
int n = 0;
int Bytelength = 0;
int Charlength = 0;

int count_byte(const char* c) {
    unsigned char p = *c;
    if ((int(p) & 0xE0) == 0xC0) { // 2byte
        return 2;
    } else if ((int(p) & 0xF0) == 0xE0) { //3byte
        return 3;
    } else if ((int(p) & 0xF8) == 0xF0) { //4byte
        return 4;
    }
    return 1;
}

void countchar(const string &source) {
    do{
        const char* c = &source[n];
        if(n == Bytelength) {
            Bytelength += count_byte(c);
            Charlength++;
        }
        n++;
    } while(source[n] != '\0');
}

int main()
{
    cout << "文字列は？: ";
    cin >> source;
    cout << "文字列：" << source << endl;
    countchar(source);
    cout << "文字数：" << Charlength << "文字 (" << Bytelength << "byte)";
    return 0;
}

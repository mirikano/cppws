//
//        gen2gram.cc
//

#include "utf8.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string source;
    cout << "文字列は？: ";
    cin >> source;

    int offset = 0;
    const char* sp = source.c_str();

    while (*(sp + offset) != '\0') {
        utf8 first(sp + offset);
        int second_offset = offset + first.count_bytes(); 
        if (*(sp + second_offset) != '\0') {  
            utf8 second(sp + second_offset);
            cout << first << second << '\n'; 
        }
        offset += first.count_bytes(); // 1文字ずつスライド
    }

    return 0;
}

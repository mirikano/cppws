//
//        genngram.cc
//

#include "utf8.h"
#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_SIZE 2

int main(int argc, char *argv[]) {
    int size = DEFAULT_SIZE;

    if(argc > 1) {
        size = strtol(argv[1], NULL, 0);
    }

    string source;
    cout << "文字列は？: ";
    cin >> source;

    cout << source << endl;

    const char* sp = source.c_str();
    int offset = 0;
    int charCount = 0;

    while (*(sp + offset) != '\0') {
        utf8 first(sp + offset);
        offset += first.count_bytes();
        charCount++;
    }

    utf8 buffer[size];

    offset = 0;

    for (int i = 0; i < charCount; i++) {
        for (int j = 0; j < size - 1; j++) {
            buffer[j] = buffer[j + 1];
        }
        buffer[size - 1] = utf8(sp + offset); 
        offset += buffer[size - 1].count_bytes(); 
        if (i >= size - 1) {
            for (int j = 0; j < size; j++) {
                cout << buffer[j];
            }
            cout << endl;
        }
    }

    return 0;
}

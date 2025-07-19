//
//        genngram2.cc
//

#include "utf8.h"
#include <iostream>
#include <string>

using namespace std;

#define DEFAULT_SIZE 2
#define BUFFER_SIZE 256  

int main(int argc, char *argv[]) {
    int size = DEFAULT_SIZE;

    if(argc > 0) {
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
        utf8 counter(sp + offset);
        offset += counter.count_bytes();
        charCount++;
    }

    utf8 buffer[BUFFER_SIZE];         

    offset = 0;
    int head = 0;  

    for (int i = 0; i < charCount; i++) {
        buffer[head] = utf8(sp + offset);
        offset += buffer[head].count_bytes();  
        head = (head + 1) % BUFFER_SIZE; 
        if (i >= size - 1) {
            for (int j = 0; j < size; j++) {
                int index = (head + j - size + BUFFER_SIZE) % BUFFER_SIZE;  
                cout << buffer[index];
            }
            cout << endl;
        }
    }
    return 0;
}

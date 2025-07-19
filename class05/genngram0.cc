//
//        genngram0.cc
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

    utf8* container = NULL;

    return 0;
}

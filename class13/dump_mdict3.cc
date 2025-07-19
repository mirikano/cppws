//
//	dump_mdict3.cc -- create and display mdict3 object
//
#include <iostream>
#include "mdict3.h"

int main(int argc, char* argv[])
{
    mdict3	d;
    std::string fname="data-sample1.txt";

    if (argc > 1) {
	fname=argv[1];
    }

    d.load(fname);

    d.dump(std::cout);
}





#include <iostream>
#include "mdict1.h"

int main(int argc, char* argv[])
{
    mdict1	d;
    std::string fname="data-sample1.txt";

    if (argc > 1) {
	fname=argv[1];
    }

    d.load0(fname);

    d.dump(std::cout);
}

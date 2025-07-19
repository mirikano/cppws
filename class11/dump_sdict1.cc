#include <iostream>
#include "sdict1.h"

int main(int argc, char* argv[])
{
    sdict1	d;
    std::string fname="data-sample1.txt";

    if (argc > 1) {
	fname=argv[1];
    }

    d.load(fname);

    d.dump(std::cout);
}

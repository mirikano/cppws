#include <iostream>
#include "sdict2.h"

int main(int argc, char* argv[])
{
    sdict2	d;
    std::string fname="data-sample1.txt";

    if (argc > 1) {
	fname=argv[1];
    }

    d.load(fname);

    d.dump(std::cout);
}

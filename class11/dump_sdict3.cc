#include <iostream>
#include "sdict3.h"

int main(int argc, char* argv[])
{
    sdict3	d;
    std::string fname="data-sample1.txt";

    if (argc > 1) {
	fname=argv[1];
    }

    d.load(fname);

    d.dump(std::cout);
}

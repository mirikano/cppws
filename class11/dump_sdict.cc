#include <iostream>
#include "sdict.h"

int main(int argc, char* argv[])
{
    sdict	d;
    std::string fname="data-sample1.txt";
    std::vector<utf8>	prefix;

    if (argc > 1) {
	fname=argv[1];
    }

    d.set_depth(4);

    d.load(fname);

    d.dump(std::cout, prefix, 4);

}

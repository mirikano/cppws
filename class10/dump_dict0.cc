//
//	dump_dict0.cc
//
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "utf8.h"
#include "dict0.h"

int main(int argc, char *argv[])
{
    std::map<utf8, std::vector<utf8>>		dict;;

    if (argc < 2) {
	std::cerr << "Usage: " << argv[0] << " datafile" << std::endl;
	exit(1);
    }

    load_dict0(dict, argv[1]);

    dump_dict0(std::cout, dict);
}

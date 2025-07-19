//
//	dict0.h
//

#pragma once

#ifndef _DICT0_H
#define _DICT0_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utf8.h"

void load_dict0(std::map<utf8, std::vector<utf8>>&, std::string);
void dump_dict0(std::ostream&, std::map<utf8, std::vector<utf8>>&);

#endif /* _DICT0_H */


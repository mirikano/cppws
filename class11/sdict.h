//
//	sdict.h
//

#pragma once

#ifndef _SDICT_H
#define _SDICT_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utf8.h"

class sdict {
	int				times;
	int				cumul;
	std::map<utf8, sdict*>		chars;
	static int 			max_depth;

	void fill_cumul(int);
    public:
	sdict(int t=0, int c=0)		{ times=t; cumul=c; }
	sdict(const sdict& d) : times(d.times), cumul(d.cumul), chars(d.chars) {}
	sdict& operator=(const sdict& d) {
	    times=d.times; cumul=d.cumul; chars=d.chars;
	    return *this;
	}
	void set_depth(int n)		 { max_depth=n; }

	void load(const std::string);
	void dump(std::ostream&, std::vector<utf8>, int);
	utf8 get_next(const std::vector<utf8>&, int);

};

#endif /* _SDICT_H */


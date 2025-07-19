//
//	mdict1.h -- morpheme dict for 1-gram selection
//

#pragma once

#ifndef _MDICT1_H
#define _MDICT1_H

#include <iostream>
#include <string>
#include <map>
#include "utf8.h"
#include "utf8string.h"

class mdict1 {
	class counter {
	    public:
		int	times;		// occurence times
		int	cumul;		// cumulative of occurence times
		counter(int t=0, int c=0)	{ times=t; cumul=c; }
		counter(const counter& c) : times(c.times), cumul(c.cumul) {}
		counter& operator=(const counter& c) {
		    times=c.times; cumul=c.cumul; return *this;
		}
	};

	std::map<utf8string, std::map<utf8string, counter>>	dict;
	void add_morphemes(const utf8string&, const utf8string&);
    public:
	void load(const std::string);		// heuristic based load
	void load0(const std::string);		// split with char type
	void dump(std::ostream&);
	utf8string get_next(const utf8string&);
};

#endif /* _MDICT1_H */

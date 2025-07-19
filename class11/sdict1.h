//
//	sdict1.h
//

#pragma once

#ifndef _SDICT1_H
#define _SDICT1_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utf8.h"

class sdict1 {
	class counter {
	    public:
		int	times;
		int	cumul;
		counter(int t=0, int c=0)	{ times=t; cumul=c; }
		counter(const counter& c) : times(c.times), cumul(c.cumul) {}
		counter& operator=(const counter& c) {
		    times=c.times; cumul=c.cumul; return *this;
		}
	};

	std::map<utf8, std::map<utf8, counter>>	dict;
    public:
		void load(const std::string);
		void dump(std::ostream&);
		utf8 get_next(const utf8&);
};

#endif /* _SDICT1_H */


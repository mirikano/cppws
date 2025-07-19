//
//	sdict3.h
//

#pragma once

#ifndef _SDICT3_H
#define _SDICT3_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utf8.h"

class sdict3 {
	class counter {
	    public:
		int	times;
		int	cuml;
		counter(int t=0, int c=0)	{ times=t; cuml=c; }
		counter(const counter& c) : times(c.times), cuml(c.cuml) {}
		counter& operator=(const counter& c) {
		    times=c.times; cuml=c.cuml; return *this;
		}
	};

	std::map<utf8, std::map<utf8, std::map<utf8, std::map<utf8, counter>>>>	dict;
    public:
		void load(const std::string);
		void dump(std::ostream&);
		utf8 get_next(const utf8&, const utf8&, const utf8&);
};

#endif /* _SDICT3_H */

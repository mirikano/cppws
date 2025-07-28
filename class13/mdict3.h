//
//	mdict3.h
//

#pragma once

#ifndef _MDICT3_H
#define _MDICT3_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utf8string.h"

class mdict3 {
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

	std::map<utf8string, std::map<utf8string, std::map<utf8string, std::map<utf8string, counter>>>>	dict;
    std::map<utf8string, counter> start_dict;
	std::map<utf8, std::map<utf8string, int>> hint_table;
    
    public:
        typedef std::map<utf8string, std::map<utf8string, std::map<utf8string, std::map<utf8string, counter>>>>::iterator l1_iterator;
        typedef std::map<utf8string, std::map<utf8string, std::map<utf8string, counter>>>::iterator l2_iterator;
        typedef std::map<utf8string, std::map<utf8string, counter>>::iterator l3_iterator;
        typedef std::map<utf8string, counter>::iterator l4_iterator;
		typedef std::map<utf8, std::map<utf8string, int>>::iterator h_iteretor;

		void load(const std::string);
		void dump(std::ostream&);
        void add_morphemes(const utf8string&, const utf8string&, const utf8string&, const utf8string&);
        void update_counters();

        utf8string get_next();
		utf8string get_next(const utf8string&);
		utf8string get_next(const utf8string&, const utf8string&);
        utf8string get_next(const utf8string&, const utf8string&, const utf8string&);
		utf8string get_hint(const utf8string&);

};

#endif /* _MDICT3_H */

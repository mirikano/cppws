//
// utf8string.cc
//

#include "utf8string.h"

utf8string::utf8string(const char cstr[]) {
    const char* p = cstr;
    while (*p != '\0') {
        utf8 temp((const unsigned char*)p);
        s.push_back(temp);
        p += temp.count_bytes();
    }
}

utf8string::utf8string(const std::string& str) {
    const char* p = str.c_str();
    while (*p != '\0') {
        utf8 temp((const unsigned char*)p);
        s.push_back(temp);
        p += temp.count_bytes();
    }
}

std::istream &operator>>(std::istream& is, utf8string& us) {
    us.s.clear();
    is >> std::ws;
    while(true) {
        int c = is.peek();
        if (c == EOF || c == '\n') break;
        utf8 temp_char;
        is >> temp_char;
        if (is.good()) {
            us.s.push_back(temp_char);
        } else break;
    }
    return is;
}

std::ostream &operator<<(std::ostream& os, const utf8string& us) {
    for (const utf8& u_char : us.s) {
        os << u_char;
    }
    return os;
}
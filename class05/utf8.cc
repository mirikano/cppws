//
//      utf8.cc
//

#include "utf8.h"

utf8::utf8(unsigned char x0, unsigned char x1, unsigned char x2,
        unsigned char x3, unsigned char x4, unsigned char x5) {
    byte[0]=x0; byte[1]=x1; byte[2]=x2; byte[3]=x3; byte[4]=x4; byte[5]=x5;
}

utf8::utf8(const unsigned char *xp) {
    int i = 0;
    byte[0] = xp[0];
    for(i=1;i < count_bytes();i++) 
        byte[i]=xp[i];
    for(;i < 6;i++) byte[i]='\0';
}

utf8::utf8(const char *xp) {
    int i=0;
    byte[0]=xp[0];
    for(i=1;i < count_bytes();i++) 
        byte[i]=xp[i];
    for(;i < 6;i++) byte[i]='\0';
}

int utf8::count_bytes() const{
    if(is_1byte()) return 1;
    else if(is_2byte()) return 2;
    else if(is_3byte()) return 3;
    else if(is_4byte()) return 4;
    else if(is_5byte()) return 5;
    else return 6;
}

bool utf8::operator<(const utf8 &uc) const{
    int n1 = count_bytes();
    int n2 = uc.count_bytes();
    int nMin = (n1 < n2) ? n1: n2;
    for (int i = 0; i < nMin; i++) {
        if (byte[i] < uc.byte[i])
            return true;
        else if (byte[i] > uc.byte[i])
            return false;
    }
    return n1 < n2;
}

bool utf8::operator<=(const utf8 &uc) const{
    return (*this < uc) || (*this == uc);
}
        
bool utf8::operator>(const utf8 & uc) const{
    return uc < *this;
}
        
bool utf8::operator>=(const utf8 &uc) const{
    return !(*this < uc);
}

bool utf8::operator==(const utf8 &uc) const{
    int n1 = count_bytes();
    int n2 = uc.count_bytes();
    if (n1 != n2) 
        return false;
    for (int i = 0; i < n1; i++) {
        if (byte[i] != uc.byte[i])
            return false;
    }
    return true;
}

std::istream& operator>>(std::istream& ios, utf8& uc) {
    uc = utf8();    // zero clear uc
    ios >> uc.byte[0];
    for (int i=1;i < uc.count_bytes();i++) 
        ios >> uc.byte[i];
    return ios;
}

std::ostream& operator<<(std::ostream& ios, const utf8& uc) {
    for (int i=0;i < uc.count_bytes();i++)
        ios << uc.byte[i];
    return ios;
}

std::ostream& operator<<(std::ostream& ios, const utf8* up) {
    while(!up->is_null()) {
        ios << *up;
        up++;
    }
    return ios;
}
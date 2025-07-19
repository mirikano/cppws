//
//      utf8.h
//

#include <iostream>

class utf8 {
    unsigned char byte[6];

    //utf8 内部で使う定数
    static unsigned const char Mask1Byte = 0x80;
    static unsigned const char Match1Byte = 0x00;
    static unsigned const char Mask2Byte = 0xe0;
    static unsigned const char Match2Byte = 0xc0;
    static unsigned const char Mask3Byte = 0xf0;
    static unsigned const char Match3Byte = 0xe0;
    static unsigned const char Mask4Byte = 0xf8;
    static unsigned const char Match4Byte = 0xf0;
    static unsigned const char Mask5Byte = 0xfc;
    static unsigned const char Match5Byte = 0xf8;
    static unsigned const char Mask6Byte = 0xfe;
    static unsigned const char Match6Byte = 0xfc;
    
    static constexpr char BytesMap[] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 00-0F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 10-1F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 20-2F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 30-3F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 40-4F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 50-5F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 60-6F
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 70-7F
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 80-8F
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // 90-9F
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // A0-AF
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // B0-BF
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, // C0-CF
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, // D0-DF
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, // E0-EF
        4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 0, 0 // F0-EF
    };

    // バイト数判定
    inline bool is_1byte() const { return((byte[0]&Mask1Byte)==Match1Byte);}
    inline bool is_2byte() const { return((byte[0]&Mask2Byte)==Match2Byte);}
    inline bool is_3byte() const { return((byte[0]&Mask3Byte)==Match3Byte);}
    inline bool is_4byte() const { return((byte[0]&Mask4Byte)==Match4Byte);}
    inline bool is_5byte() const { return((byte[0]&Mask5Byte)==Match5Byte);}
    inline bool is_6byte() const { return((byte[0]&Mask6Byte)==Match6Byte);}

    public:
        // コンストラクタ
        utf8(unsigned char x0=0, unsigned char x1=0, unsigned char x2=0,
             unsigned char x3=0, unsigned char x4=0, unsigned char x5=0);
        utf8(const unsigned char *xp);
        utf8(const char *xp);
        inline bool is_null() const { return(byte[0]==0);}
        int     count_bytes() const;
        int     count_bytes2() const;
        bool operator<(const utf8 &) const;
        bool operator<=(const utf8 &) const;
        bool operator>(const utf8 &) const;
        bool operator>=(const utf8 &) const;
        bool operator==(const utf8 &) const;
    friend std::istream& operator>>(std::istream&, utf8&);
    friend std::ostream& operator<<(std::ostream&, const utf8&);
    friend std::ostream& operator<<(std::ostream&, const utf8*);
};

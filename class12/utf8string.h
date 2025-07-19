#pragma once //複数回includeされるのを防ぐ

#include <iostream>
#include <vector>
#include <string>
#include "utf8.h"

class utf8string{
    std::vector<utf8> s;
    public:
        typedef size_t size_type;
        typedef std::vector<utf8>::iterator iterator;
        typedef std::vector<utf8>::const_iterator const_iterator;

        // コンストラクタ
        utf8string() {};
        utf8string(const char[]);
        utf8string(const std::string&);
        utf8string(const utf8string& us): s(us.s) {};

        //代入
        utf8string& operator=(const utf8string& x) {s=x.s; return(*this);}

        // イテレータ
        inline iterator begin() {return(s.begin());} // 先頭
        inline const_iterator begin() const {return(s.begin());} //先頭
        inline iterator end() {return(s.end());} // 末尾の次
        inline const_iterator end() const {return(s.end());} // 末尾の次

        // 領域
        inline size_type size() const {return(s.size());} // 長さの取得
        inline size_type length() const {return(size());} //  長さの取得
        inline size_type capacity() const {return(s.capacity());} // 格納可能な最大文字数
        inline bool empty() const {return(s.empty());} // 空かどうか
        inline void reserve(size_type n) {s.reserve(n);} // capacityの変更
        

        // 要素アクセス
        inline utf8& operator[](size_type pos) {return(s[pos]);} // 任意の位置
        inline const utf8& operator[](size_type pos)const  {return(s[pos]);} // 任意の位置
        inline utf8& at(size_type pos) {return(s.at(pos));} // 任意の位置
        inline const utf8& at(size_type pos)const  {return(s.at(pos));} // 任意の位置

        inline utf8& front() {return(s.front());} // 先頭要素
        inline const utf8& front()const  {return(s.front());} // 先頭要素
        inline utf8& back() {return(s.back());} // 末尾要素
        inline const utf8& back()const {return(s.back());} // 末尾要素

        // 変更
        void push_back(const utf8& x) {s.push_back(x);}
        iterator erase(iterator pos) {return(s.erase(pos));}
        void clear() {s.clear();}

        // 演算子 overload
        inline bool operator<(const utf8string& rhs)const {return(s < rhs.s);}
        inline bool operator<=(const utf8string& rhs)const {return(s <= rhs.s);}
        inline bool operator>(const utf8string& rhs)const {return(s > rhs.s);}
        inline bool operator>=(const utf8string& rhs)const {return(s >= rhs.s);}
        inline bool operator==(const utf8string& rhs)const {return(s == rhs.s);}

        // 外部アクセス指定
        friend std::istream &operator>>(std::istream&, utf8string&);
        friend std::ostream &operator<<(std::ostream&, const utf8string&);
};
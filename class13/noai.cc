#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "utf8string.h"
#include "mdict3.h"

// get_str_list 関数は変更なし
std::vector<utf8string> get_str_list(const utf8string& input_line) {
    std::vector<utf8string> results;
    utf8string morpheme_buf;
    utf8::CharType prev_charType = utf8::NONE;
    for (utf8string::const_iterator it = input_line.begin(); it != input_line.end(); ++it) {
        const utf8& c_char = *it;
        utf8::CharType c_charType = c_char.get_chartype();
        if (prev_charType != utf8::NONE && c_charType != prev_charType) {
            if (!morpheme_buf.empty()) {
                utf8::CharType buf_type = morpheme_buf.at(0).get_chartype();
                if (buf_type == utf8::KANJI || buf_type == utf8::KATAKANA) {
                    results.push_back(morpheme_buf);
                }
            }
            morpheme_buf.clear();
        }
        morpheme_buf.push_back(c_char);
        prev_charType = c_charType;
    }
    if (!morpheme_buf.empty()) {
        utf8::CharType buf_type = morpheme_buf.at(0).get_chartype();
        if (buf_type == utf8::KANJI || buf_type == utf8::KATAKANA) {
            results.push_back(morpheme_buf);
        }
    }
    return results;
}


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "使い方: " << argv[0] << " <辞書ファイル>" << std::endl;
        exit(1);
    }
    std::string dictionary_file = argv[1];
    mdict3 dict;
    dict.load(dictionary_file);
    srandom(time(NULL));

    while (true) {
        std::string user_input_str;
        if (!std::getline(std::cin, user_input_str)) {
            break;
        }
        if (user_input_str.empty()) continue;

        utf8string user_input_utf8(user_input_str);
        
        std::vector<utf8string> seeds = get_str_list(user_input_utf8);
        bool sentence_generated = false;

        const utf8string end_symbol("。");
        const utf8string error_symbol("error");

        if (!seeds.empty()) {
            for (size_t i = 0; i < seeds.size(); ++i) {
                utf8string theme = seeds[i];
                utf8string c1 = dict.get_hint(theme);
                if (c1.empty()) {
                    c1 = theme;
                }
                
                utf8string c2 = dict.get_next(c1);
                // ▼▼▼ ここから比較演算子を修正 ▼▼▼
                if (!c2.empty() && !(c2 == end_symbol) && !(c2 == error_symbol)) {
                    utf8string c3 = dict.get_next(c1, c2);
                    if (c3.empty() || c3 == end_symbol || c3 == error_symbol) {
                        std::cout << c1 << c2 << "。" << std::endl;
                    } else {
                        std::cout << c1 << c2 << c3;
                        while (!(c3 == end_symbol)) {
                            utf8string c4 = dict.get_next(c1, c2, c3);
                            if (c4.empty() || c4 == error_symbol) break;
                            std::cout << c4;
                            c1 = c2; c2 = c3; c3 = c4;
                        }
                        std::cout << std::endl;
                    }
                    sentence_generated = true;
                    break; 
                }
            }
        }

        if (!sentence_generated) {
            utf8string c1 = dict.get_next();
            utf8string c2 = dict.get_next(c1);
            if (c2.empty() || c2 == end_symbol || c2 == error_symbol) {
                std::cout << c1 << "。" << std::endl;
            } else {
                utf8string c3 = dict.get_next(c1, c2);
                if (c3.empty() || c3 == end_symbol || c3 == error_symbol) {
                    std::cout << c1 << c2 << "。" << std::endl;
                } else {
                    std::cout << c1 << c2 << c3;
                    while (!(c3 == end_symbol)) {
                        utf8string c4 = dict.get_next(c1, c2, c3);
                        if (c4.empty() || c4 == error_symbol) break;
                        std::cout << c4;
                        c1 = c2; c2 = c3; c3 = c4;
                    }
                    std::cout << std::endl;
                }
            }
        }
        // ▲▲▲ ここまで ▲▲▲
    }
    return 0;
}
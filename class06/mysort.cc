#include "utf8.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#define MAX_CHARS 10000 

int utf8_cmp(const utf8* a, const utf8* b)
{
    return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(int argc, char* argv[])
{
    int blockSize = 2; 

    if (argc > 1)
    {
        try
        {
            blockSize = stoi(argv[1]);
            if (blockSize <= 0)
            {
                cerr << "警告: ブロック/列のサイズは正の数である必要があります。デフォルト値2を使用します。" << endl;
                blockSize = 2;
            }
        }
        catch (const exception& e) 
        {
            cerr << "エラー: ブロック/列サイズの引数処理中にエラー (" << argv[1] << ": " << e.what() << ")。デフォルト値2を使用します。" << std::endl;
            blockSize = 2;
        }
    }


    utf8 charBuf[MAX_CHARS]; 

    stringstream strBuilder; 
    string word;             

    bool blockSizeInitialized = false; 

    while (cin >> word)
    {
        strBuilder << word;

        if (!blockSizeInitialized)
        {
            const char* wordCStr = word.c_str(); 
            int byteOffset = 0;  
            int charsInWord = 0; 
            while (byteOffset < word.length())
            {
                utf8 uChar = utf8(wordCStr + byteOffset); 
                byteOffset += uChar.count_bytes();
                charsInWord++;
            }

            if (charsInWord > 0) {
                blockSize = charsInWord;
            } else {
                cerr << "警告: 最初の単語が空か有効なUTF-8文字を含みません。ブロックサイズは "
                          << blockSize << " のままです。" << endl;
            }
            blockSizeInitialized = true;
        }
    }

    string fullText = strBuilder.str(); 
    const char* textCStr = fullText.c_str(); 

    int currentBytePos = 0; 
    int totalChars = 0;     

    while (currentBytePos < fullText.length())
    {
        if (totalChars >= MAX_CHARS) {
            cerr << "エラー: 入力がバッファ容量 (" << MAX_CHARS << "文字) を超過。切り詰めます。" << endl;
            break;
        }
        utf8 uChar = utf8(textCStr + currentBytePos); 
        charBuf[totalChars++] = uChar;
        currentBytePos += uChar.count_bytes();
    }

    if (totalChars > 0 && blockSize > 0)
    {
        size_t numBlocks = totalChars / blockSize; 
        size_t elementSizeBytes = sizeof(utf8) * blockSize; 
        if (numBlocks > 0)
        {
            qsort(charBuf,
                  numBlocks,
                  elementSizeBytes,
                  reinterpret_cast<int (*)(const void*, const void*)>(utf8_cmp));
        } else {
            cerr << "情報: ソート可能な完全なブロックがありません。"
                      << " (総文字数: " << totalChars << ", ブロックサイズ: " << blockSize << ")" << endl;
        }

        for (int i = 0; i < totalChars; i++) 
        {
            cout << charBuf[i];
            if ((i + 1) % blockSize == 0)
            {
                cout << endl;
            }
        }
        if (totalChars > 0 && totalChars % blockSize != 0)
        {
            cout << endl; 
        }
    }
    else if (totalChars == 0)
    {
        cout << "入力がありませんでした。" << endl;
    }

    return 0;
}
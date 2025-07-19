#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> x;   // vectorオブジェクトの初期化
    cout << "整数を入力(終了は 9999)"  << endl;

    while(true) {
        int temp;
        cin >> temp;
        if(temp == 9999) break;
        x.push_back(temp); //push_back() でvectorに格納
    }

    int c = 0;
    for(vector<int>::iterator p = x.begin();
            p != x.end(); p++) {
        // pはxの中身に対するポインタ
        cout << "x[" << c++ << "] = " << *p << endl;
    } 
    cout << endl;

    cout << "先頭データは" << x.front() << endl;
    cout << "末尾からの逆順に一つずつ取り出して空にする" << endl;
    while(x.size()) {
        cout << x.back() << "";
        x.pop_back();
    }
    cout << endl;
}
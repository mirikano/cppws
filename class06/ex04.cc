//
//     ex04.cc
//

#include <cstdlib>
#include <iostream>

using namespace std;

#define DEFAULT_SIZE 2

int int_cmp(const int* a, const int* b) {
    return *a < *b ? -1 : *a > *b ? 1 : 0;
}

int main(int argc, char* argv[]) {
    int nx, x[100];
        // 配列サイズの設定・確認をすること

    cout << "配列の要素数：";
    cin >> nx;
    cout << nx << "個の整数を入力せよ。" << endl;

    for (int i = 0; i < nx; i++) {
        cout << "x[" << i << "] :";
        cin >> x[i];
    }
    qsort(x, nx, sizeof(int),
        reinterpret_cast<int (*)(const void*,
            const void*)>(int_cmp));
    cout << "昇順にソートしました。" << endl;
    for (int i = 0; i < nx; i++) {
        cout << "x[" << i << "] = "
            << x[i] << endl;
    }
}
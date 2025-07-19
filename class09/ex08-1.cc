#include <iostream>
#include <cstring>

using namespace std;

template <class Type> Type maxof(const Type x[], int n) {
    Type max = x[0];
    for(int i = 1; i < n; i++) {
        if(x[i] > max) max = x[i];
    }
    return max;
}

/*
template <> const char*
    maxof<const char*>(const char* x[], int n) {
        const char* max = x[0];
        for(int i = 1; i < n; i++) {
            if(strcmp(x[i], max)> 0 )max = x[i];
        }
        return max;
    }
*/

int main() {
    int idata[] = {3, 4, 2, 7, 1};
    double ddata[] = {3.3, 4.4, 2.2, 7.7, 1.1};
    const char* sdata[] = {"orange", "apple",
            "strawberry", "mango", "grape"};
    cout << maxof(idata, 5) << endl;
    cout << maxof(ddata, 5) << endl;
    cout << maxof<double>(ddata, 5) << endl; //型を明示

    //特殊化の有無で挙動が変わる
    cout << maxof(sdata, 5) << endl;
}
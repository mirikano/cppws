// 
// eval1-1.cc
//


#include <iostream>
#include <time.h>
#include "utf8.h"

using namespace std;

const static int USEC_PER_SEC = 1000000;
const static int default_loops = 100000000;
const static int default_trials = 10;


int clock_usec_diff(clock_t cs, clock_t ce) 
{
    return ((ce - cs)* USEC_PER_SEC
            / CLOCKS_PER_SEC);
}

int main(int argc, char* argv[])
{
    clock_t cstart, cend;
    int loopend = default_loops;

    if(argc > 1) {
        loopend = strtol(argv[1], NULL, 0);
        if (loopend < 1) {
            loopend = default_loops;
        }
    }
    
    cout << "id,trial,clock" << endl;

    // 1．int 変数と定数の加算
    for (int tr = 0; tr < default_trials; tr++) {
        int vl = 100, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2; vt = vl + 2; vt = vl + 2; vt = vl + 2;
        }
        cend = clock();

        cout << 1 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 2．int 変数同士の加算
    for (int tr = 0; tr < default_trials; tr++) {
        int vl = 100, vr = 2, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + vr; vt = vl + vr; vt = vl + vr; vt = vl + vr;
        }
        cend = clock();

        cout << 2 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 3．long long 変数と定数の加算
        for (int tr = 0; tr < default_trials; tr++) {
        long vl = 100LL, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2LL; vt = vl + 2LL; vt = vl + 2LL; vt = vl + 2LL;
        }
        cend = clock();

        cout << 3 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 4. long long 変数同士の加算
        for (int tr = 0; tr < default_trials; tr++) {
        long vl = 100LL, vr = 2LL, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + vr; vt = vl + vr; vt = vl + vr; vt = vl + vr;
        }
        cend = clock();

        cout << 4 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 5. float 変数と定数の加算
        for (int tr = 0; tr < default_trials; tr++) {
        float vl = 100.0f, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2.0f; vt = vl + 2.0f; vt = vl + 2.0f; vt = vl + 2.0f;
        }
        cend = clock();

        cout << 5 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 6. float 変数同士の加算
        for (int tr = 0; tr < default_trials; tr++) {
        float vl = 100.0f, vr = 2.0f, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + vr; vt = vl + vr; vt = vl + vr; vt = vl + vr;
        }
        cend = clock();

        cout << 6 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 7. double 変数と定数の加算
        for (int tr = 0; tr < default_trials; tr++) {
        double vl = 100.0, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2.0; vt = vl + 2.0; vt = vl + 2.0; vt = vl + 2.0;
        }
        cend = clock();

        cout << 7 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 8. double 変数同士の加算
        for (int tr = 0; tr < default_trials; tr++) {
        double vl = 100.0, vr = 2.0, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + vr; vt = vl + vr; vt = vl + vr; vt = vl + vr;
        }
        cend = clock();

        cout << 8 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

}
// 
// eval1-3.cc
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

    // 9. 定数に整数を使う
        for (int tr = 0; tr < default_trials; tr++) {
        float vl = 100.0f, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2; vt = vl + 2; vt = vl + 2; vt = vl + 2;
        }
        cend = clock();

        cout << 9 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 10. 定数に少数表現を使う
        for (int tr = 0; tr < default_trials; tr++) {
        float vl = 100.0f, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + 2.0; vt = vl + 2.0; vt = vl + 2.0; vt = vl + 2.0;
        }
        cend = clock();

        cout << 10 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 11. 定数をfloat()で囲う
        for (int tr = 0; tr < default_trials; tr++) {
        float vl = 100.0f, vt;
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            vt = vl + float(2); vt = vl + float(2); vt = vl + float(2); vt = vl + float(2);
        }
        cend = clock();

        cout << 11 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }
}
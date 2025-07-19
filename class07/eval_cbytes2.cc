// 
// eval_cbyte2.cc
//

#include <iostream>
#include <time.h>
#include "utf8.h"

using namespace std;

const static int USEC_PER_SEC = 1000000;
const static int default_loops = 100000;
const static int default_trials = 10;


int clock_usec_diff(clock_t cs, clock_t ce) 
{
    return ((ce - cs)* USEC_PER_SEC
            / CLOCKS_PER_SEC);
}

int main(int argc, char* argv[])
{
    utf8 CharMap[] = {utf8("a"), utf8("λ"), utf8("村"), utf8("😄")};
    clock_t cstart, cend;
    int loops = default_loops;

    if(argc > 1) {
        loops = strtol(argv[1], NULL, 0);
        if (loops < 1) {
            loops = default_loops;
        }
    }
    for (int idx = 0; idx < 4; idx++) {
        cout << endl;
        cout << idx + 1 << "byte" << endl;
        cout << endl;
        for (int tr= 0; tr < default_trials; tr++) {
            cstart = clock();
            for(int i = 0; i < loops; i++) {
                CharMap[idx].count_bytes2();
            }
            cend = clock();

            cout << "loop:" << loops
                << "trial:" << tr << "time:"
                << clock_usec_diff(cstart, cend)
                << "usec" << endl;
        }

        cout << endl;
        for (int tr= 0; tr < default_trials; tr++) {
            cstart = clock();
            for(int i = 0; i < loops/2; i++) {
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
            }
            cend = clock();

            cout << "2 loop:" << loops
                << "trial:" << tr << "time:"
                << clock_usec_diff(cstart, cend)
                << "usec" << endl;
        }

        cout << endl;
        for (int tr= 0; tr < default_trials; tr++) {
            cstart = clock();
            for(int i = 0; i < loops/5; i++) {
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
            } 
            cend = clock();

            cout << "5 loop:" << loops
                << "trial:" << tr << "time:"
                << clock_usec_diff(cstart, cend)
                << "usec" << endl;
        }
        
        cout << endl;
        for (int tr= 0; tr < default_trials; tr++) {
            cstart = clock();
            for(int i = 0; i < loops/10; i++) {
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
                CharMap[idx].count_bytes2();
            }
            cend = clock();

            cout << "10 loop:" << loops
                << "trial:" << tr << "time:"
                << clock_usec_diff(cstart, cend)
                << "usec" << endl;
        }
        
    }
    
}
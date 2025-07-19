// 
// ex07.cc
//

#include <iostream>
#include <time.h>

using namespace std;

const static int USEC_PER_SEC = 1000000;
const static int default_loops = 100;
        // ex06を見て決める
const static int default_trials = 5;

int clock_usec_diff(clock_t cs, clock_t ce)
{
    return ((ce - cs)* USEC_PER_SEC
            / CLOCKS_PER_SEC);
}

int main(int argc, char* argv[])
{
    clock_t cstart, cend;
    int loops = default_loops;
    int v = 0;

    if(argc > 1) {
        loops = strtol(argv[1], NULL, 0);
        if (loops < 1) {
            loops = default_loops;
        }
    }

    for (int tr= 0; tr < default_trials; tr++) {
        cstart = clock();
        for(int i = 0; i < loops; i++) {
            v = v + 1;
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
            v = v + 1; v = v + 1;
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
            v = v + 1; v = v + 1; v = v + 1;
            v = v + 1; v = v + 1;
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
            v = v + 1; v = v + 1; v = v + 1;
            v = v + 1; v = v + 1;
            v = v + 1; v = v + 1; v = v + 1;
            v = v + 1; v = v + 1;
        }
        cend = clock();

        cout << "10 loop:" << loops
            << "trial:" << tr << "time:"
            << clock_usec_diff(cstart, cend)
            << "usec" << endl;
    }
}
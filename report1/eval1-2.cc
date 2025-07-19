// 
// eval1-2.cc
//


#include <iostream>
#include <time.h>
#include "utf8.h"

using namespace std;

const static int USEC_PER_SEC = 1000000;
const static int default_loops = 390625;
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

    const int SZ = 256;

    // 1．int 変数と定数の加算
    for (int tr = 0; tr < default_trials; tr++) {
        int ila[SZ], ita[SZ], ilb[SZ], itb[SZ], ilc[SZ], itc[SZ], ild[SZ], itd[SZ];
        for (int i = 0; i < SZ; i++) {
            ila[i] = i; ita[i] = i; ilb[i] = i; itb[i] = i;
            ilc[i] = i; itc[i] = i; ild[i] = i; itd[i] = i;
        }
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                ita[x] = ila[x] + 2;
                itb[x] = ilb[x] + 2;
                itc[x] = ilc[x] + 2;
                itd[x] = ild[x] + 2;
            }
        }
        cend = clock();
        cout << 1 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 2．int 変数同士の加算
    for (int tr = 0; tr < default_trials; tr++) {
        int ila[SZ], ira[SZ], ita[SZ], ilb[SZ], irb[SZ], itb[SZ],
            ilc[SZ], irc[SZ], itc[SZ], ild[SZ], ird[SZ], itd[SZ];
        for (int i = 0; i < SZ; i++) {
            ila[i] = i; ira[i] = i; ita[i] = i;
            ilb[i] = i; irb[i] = i; itb[i] = i;
            ilc[i] = i; irc[i] = i; itc[i] = i;
            ild[i] = i; ird[i] = i; itd[i] = i;
        }
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                ita[x] = ila[x] + ira[x];
                itb[x] = ilb[x] + irb[x];
                itc[x] = ilc[x] + irc[x];
                itd[x] = ild[x] + ird[x];
            }
        }
        cend = clock();
        cout << 2 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 3．long long 変数と定数の加算
    for (int tr = 0; tr < default_trials; tr++) {
        long lla[SZ], lta[SZ], llb[SZ], ltb[SZ], llc[SZ], ltc[SZ], lld[SZ], ltd[SZ];
        for (int i = 0; i < SZ; i++) {
            lla[i] = i; lta[i] = i;
            llb[i] = i; ltb[i] = i;
            llc[i] = i; ltc[i] = i;
            lld[i] = i; ltd[i] = i;
        }
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                lta[x] = lla[x] + 2LL;
                ltb[x] = llb[x] + 2LL;
                ltc[x] = llc[x] + 2LL;
                ltd[x] = lld[x] + 2LL;
            }
        }
        cend = clock();
        cout << 3 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 4. long long 変数同士の加算
    for (int tr = 0; tr < default_trials; tr++) {
        long lla[SZ], lra[SZ], lta[SZ], llb[SZ], lrb[SZ], ltb[SZ],
            llc[SZ], lrc[SZ], ltc[SZ], lld[SZ], lrd[SZ], ltd[SZ];
        for (int i = 0; i < SZ; i++) {
            lla[i] = i; lra[i] = i; lta[i] = i;
            llb[i] = i; lrb[i] = i; ltb[i] = i;
            llc[i] = i; lrc[i] = i; ltc[i] = i;
            lld[i] = i; lrd[i] = i; ltd[i] = i;
        }        
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                lta[x] = lla[x] + lra[x];
                ltb[x] = llb[x] + lrb[x];
                ltc[x] = llc[x] + lrc[x];
                ltd[x] = lld[x] + lrd[x];
            }
        }
        cend = clock();
        cout << 4 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 5. float 変数と定数の加算
    for (int tr = 0; tr < default_trials; tr++) {
        float fla[SZ], fta[SZ], flb[SZ], ftb[SZ], flc[SZ], ftc[SZ], fld[SZ], ftd[SZ];
        for (int i = 0; i < SZ; i++) {
            fla[i] = i; fta[i] = i;
            flb[i] = i; ftb[i] = i;
            flc[i] = i; ftc[i] = i;
            fld[i] = i; ftd[i] = i;
        }
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                fta[x] = fla[x] + 2.0f;
                ftb[x] = flb[x] + 2.0f;
                ftc[x] = flc[x] + 2.0f;
                ftd[x] = fld[x] + 2.0f;
            }
        }
        cend = clock();
        cout << 5 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 6. float 変数同士の加算
    for (int tr = 0; tr < default_trials; tr++) {
        float fla[SZ], fra[SZ], fta[SZ], flb[SZ], frb[SZ], ftb[SZ],
            flc[SZ], frc[SZ], ftc[SZ], fld[SZ], frd[SZ], ftd[SZ];
        for (int i = 0; i < SZ; i++) {
            fla[i] = i; fra[i] = i; fta[i] = i;
            flb[i] = i; frb[i] = i; ftb[i] = i;
            flc[i] = i; frc[i] = i; ftc[i] = i;
            fld[i] = i; frd[i] = i; ftd[i] = i;
        }
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                fta[x] = fla[x] + fra[x];
                ftb[x] = flb[x] + frb[x];
                ftc[x] = flc[x] + frc[x];
                ftd[x] = fld[x] + frd[x];
            }
        }
        cend = clock();
        cout << 6 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 7. double 変数と定数の加算
    for (int tr = 0; tr < default_trials; tr++) {
        double dla[SZ], dta[SZ], dlb[SZ], dtb[SZ], dlc[SZ], dtc[SZ], dld[SZ], dtd[SZ];
        for (int i = 0; i < SZ; i++) {
            dla[i] = i; dta[i] = i;
            dlb[i] = i; dtb[i] = i;
            dlc[i] = i; dtc[i] = i;
            dld[i] = i; dtd[i] = i;
        }       
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                dta[x] = dla[x] + 2.0;
                dtb[x] = dlb[x] + 2.0;
                dtc[x] = dlc[x] + 2.0;
                dtd[x] = dld[x] + 2.0;
            }
        }
        cend = clock();
        cout << 7 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }

    // 8. double 変数同士の加算
    for (int tr = 0; tr < default_trials; tr++) {
        double dla[SZ], dra[SZ], dta[SZ], dlb[SZ], drb[SZ], dtb[SZ],
            dlc[SZ], drc[SZ], dtc[SZ], dld[SZ], drd[SZ], dtd[SZ];
        for (int i = 0; i < SZ; i++) {
            dla[i] = i; dra[i] = i; dta[i] = i;
            dlb[i] = i; drb[i] = i; dtb[i] = i;
            dlc[i] = i; drc[i] = i; dtc[i] = i;
            dld[i] = i; drd[i] = i; dtd[i] = i;
        }        
        cstart = clock();
        for (int i = 0; i < loopend; i++) {
            for (int x = 0; x < SZ; x++) {
                dta[x] = dla[x] + dra[x];
                dtb[x] = dlb[x] + drb[x];
                dtc[x] = dlc[x] + drc[x];
                dtd[x] = dld[x] + drd[x];
            }
        }
        cend = clock();
        cout << 8 << "," << tr << "," << clock_usec_diff(cstart,cend) << endl; 
    }
}
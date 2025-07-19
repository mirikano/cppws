// 
//  ex05-2.cc
//

#include <iostream>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 1000000; // 環境によって調整する
const static int USEC_PER_SEC = 1000000;
static int a[ARRAY_SIZE], b[ARRAY_SIZE], c[ARRAY_SIZE];

int tv_usec_diff(timeval* stv, timeval* etv) 
{
    return ((etv->tv_sec - stv->tv_sec)* USEC_PER_SEC
        + (etv->tv_usec - stv->tv_usec));
}

int clock_usec_diff(clock_t cs, clock_t ce)
{
    return((ce - cs)* USEC_PER_SEC / CLOCKS_PER_SEC);
}

void init_arrays()
{
    for(int i = 0; i < ARRAY_SIZE; i++) {
        a[i] = i + 1; b[i] = i * 2;
    }
}

int main(int argc, char* argv[])
{
    clock_t cstart, cend;
    struct timeval tvstart, tvend;

    init_arrays();

    cstart = clock();
    gettimeofday(&tvstart, NULL);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        c[i] = a[i] + b[i];
        usleep(1);
    }

    cend = clock();
    gettimeofday(&tvend, NULL);

    cout << "execution time by clock    :"
        << clock_usec_diff(cstart, cend)
        << "usec" << endl;
    cout << "execution time by gettimeofday:"
        << tv_usec_diff(&tvstart, &tvend)
        << "usec" << endl;
}
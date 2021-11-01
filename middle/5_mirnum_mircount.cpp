#include "middle.h"

bool itc_mirror_num(long long a)
{
    if (a < 0){
        bool b;
        return (b = (1 == 0));
    }
    else{
        long long mir = 10, c = a, n = itc_len_num(a);
        for(int i = 0; i < n; i++){
            mir = mir * 10 + (c % 10);
            c = c / 10;
        }
        mir = mir % itc_pow(10, n);
        bool b;
        return (b = (a == mir));
    }
}

int itc_mirror_count(long long a)
{
    a = itc_abs(a);
    long long i = 1, nol = 0;
    while (i <= a){
        if (itc_mirror_num(i) == 1){
            nol++;
        }
        i++;
    }
    return (nol);
}

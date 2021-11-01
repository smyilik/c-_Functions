#include "middle.h"
int itc_sum_num(long long a)
{
    a = itc_abs(a);
    long long b = 0, c = a;
    for (int i = 0; i < itc_len_num(c); i++){
        b = b + (a % 10);
        a = a / 10;
    }
    return(b);
}

long long itc_multi_num(long long a)
{
    a = itc_abs(a);
    long long b = 1;
    while (a > 0){
        b = b * (a % 10);
        a = a / 10;
    }
    return(b);
}

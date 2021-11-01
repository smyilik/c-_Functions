#include "middle.h"

int itc_rev_num(long long a)
{

    long long b = 1;
    a = itc_abs(a);
    while (a > 0){
        b = b * 10 + (a % 10);
        a = a / 10;
    }
    a = b % itc_pow(10, itc_len_num(b) - 1);
    return (itc_len_num(a));
}

int itc_null_count(long long a)
{
    a = itc_abs(a);
    int nol = 0, b = itc_len_num(a);
    for (int i = 0; i < b; i++){
        if (a % 10 == 0){
            nol++;
        }
        a = a / 10;
    }
    return (nol);
}

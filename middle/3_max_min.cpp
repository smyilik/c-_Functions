#include "middle.h"
int itc_max_num(long long a)
{
    a = itc_abs(a);
    int max = -1, b = itc_len_num(a);
    for (int i = 0; i < b; i++){
        if (a % 10 > max){
            max = a % 10;
        }
        a = a / 10;
    }
    return (max);
}

int itc_min_num(long long a)
{
    a = itc_abs(a);
    int min = 10, b = itc_len_num(a);
    for (int i = 0; i < b; i++){
        if (a % 10 < min){
            min = a % 10;
        }
        a = a / 10;
    }
    return (min);
}

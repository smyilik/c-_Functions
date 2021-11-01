#include "middle.h"

int itc_second_max_num(long long a)
{
    a = itc_abs(a);
    int maxi = -1, sndmax = -2, b = itc_len_num(a);
    for (int i = 0; i < b; i++){
        if (a % 10 > maxi){
            sndmax = maxi;
            maxi = a % 10;
        }
        else if((a % 10 <= maxi) && (a % 10 > sndmax)){
            sndmax = a % 10;
        }
        a = a / 10;
    }
    return (sndmax);
}

int itc_second_simple_max_num(long long a)
{
    a = itc_abs(a);
    if (a < 10){
        return -1;
    }
    int check = 0, max1 = 0, max2 = 0;
    while (a > 0){
        if (a % 10 >= max1){
            max2 = max1;
            max1 = a % 10;
        }
        if ((a % 10 < max1) && (a % 10 > max2)){
            max2 = a % 10;
        }
        a = a / 10;
    }
    if (max1 == max2){
        return -1;
    }
    return (max2);
}

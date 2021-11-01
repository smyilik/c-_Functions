#include "middle.h"

void itc_num_print(int a)
{
    cout << a << endl;
}

int itc_len_num(long long a)
{
    a = itc_abs(a);
    int nol = 0;
    if (a == 0){
        return 1;
    }
    while (a > 0){
        a = a / 10;
        nol++;
    }
    return (nol);
    return -1;
}

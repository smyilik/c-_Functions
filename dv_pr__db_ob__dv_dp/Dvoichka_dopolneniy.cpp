#include "TestHeader.h"

int dv_dp(int a)
{
    if (a >= 0){
        return (dv_ob(a));
    }
    a = dv_ob(a);
    if (a == -1){
        return -1;
    }
    int mnozh = 1, b = a, vych = 1;
    for (int i = 0; i < 7; i ++){
        if (b % 10 == 0){
            return(a + mnozh - (vych / 10));
        }
        vych = vych * 10 + 1;
        b = b / 10;
        mnozh = mnozh * 10; } }

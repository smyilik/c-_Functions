#include "TestHeader.h"

long long abs_(long long a)
{
    if (a >= 0){
        return (a);
    } else{
        return (a * -1); } }

long long pow(long long a, long long b)
{
    if (b == 0){
        return(1);
    } else if (b > 0){
        int nol = a;
        for (int j = 1; j < b; j++){
            a = a * nol;
        } return (a);
    } else if (b < 0){
        double nol = 1 / a;
        for (int j = -1; j > b - 2; j--){
            a = a * nol;
        } return(a); } }

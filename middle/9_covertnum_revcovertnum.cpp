#include "middle.h"

long long itc_covert_num(long long number, int ss)
{
    long long maxi = 10000000000000000;
    if ((ss > 10) || (ss < 2) || (number < 0) || (number >= itc_pow(ss, 15))){
        return -1;}
    else{
        long long chislo = 1, otv = 1;
        while (number > 0){
            chislo = (chislo * 10) + (number % ss);
            number = number / ss;}
        int i = itc_len_num(chislo);
        while (i > 1){
            i--;
            otv = (otv * 10) + (chislo % 10);
            chislo = chislo / 10;}
        return (otv % itc_pow(10, itc_len_num(otv) - 1));}}
    /*else if (number < 0){
        number = number * -1;
        long long chislo = 1, otv = 1;
        while (number > 0){
            chislo = (chislo * 10) + (number % ss);
            number = number / ss;
        }
        int i = itc_len_num(chislo);
        while (i > 1){
            i--;
            otv = (otv * 10) + (chislo % 10);
            chislo = chislo / 10;
        }
        otv = otv % pow(10, itc_len_num(otv) - 1);
        if (otv > maxi){
            return -1;
        }
        else if (otv < maxi){
            return (maxi + otv);
        }
        else{
            return (maxi);
        }
    }*/

long long itc_rev_covert_num(long long number, int ss)
{
    if ((ss > 10) || (ss < 2) || (number < 0) || (itc_max_num(number) > ss - 1)){
        return -1;}
    long long chislo = 0, i = 0;
    while (number > 0){
        chislo = chislo + ((number % 10) * itc_pow(ss, i));
        number = number / 10;
        i++;}
    return (chislo);}

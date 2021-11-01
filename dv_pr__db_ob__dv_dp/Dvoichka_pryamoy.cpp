#include "TestHeader.h"

int dv_pr(int a){
    if ((a > 127) || (a < -128)){
        return -1;
    } else if (a < 0){
        a = abs(a);
        int dvoichka = 1, chislo = 1;
        for (int i = 0; i < 7; i++){
            chislo = (chislo * 10) + (a % 2);
            a = a / 2;
        } for (int j = 0; j < 7; j++){
            dvoichka = (dvoichka * 10) + (chislo % 10);
            chislo = chislo / 10;
        } return (dvoichka);
    } else{
        int dvoichka = 1, chislo = 1;
        for (int i = 0; i < 7; i ++){
            chislo = (chislo * 10) + (a % 2);
            a = a / 2;
        } for (int j = 0; j < 7; j++){
            dvoichka = (dvoichka * 10) + (chislo % 10);
            chislo = chislo / 10;
        } return (dvoichka % pow(10, 7));} }

#include "TestHeader.h"

int dv_ob(int a){
    if ((a >= 0) && (a < 128)){
            return (dv_pr(a));
    } if ((a < 0) && (a >= -128)){
        a = dv_pr(a);
        int chislo = 1, dvob = 1;
        bool b;
        for (int i = 0; i < 7; i ++){
            chislo = chislo * 10 + (b = (a % 2 == 0));
            a = a / 10;
        } for (int j = 0; j < 7; j++){
            dvob = dvob * 10 + (chislo % 10);
            chislo = chislo / 10;
        } return(dvob); } return -1; }

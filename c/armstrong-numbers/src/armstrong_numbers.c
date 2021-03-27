#include "armstrong_numbers.h"
#include <stdio.h>
#include <math.h>

bool is_armstrong_number(int candidate){
    int aux = candidate;
    int length = 0;
    int flag = 1;
    int armstrong = 0;

    do{
        aux = aux/10;
        length++;
        if(aux < 1)
            flag = 0;
    }while(flag);

    aux = candidate;
    for(int i=0; i<length; i++){
        armstrong += pow(aux%10, length);
        aux = aux/10;
    }

    if(armstrong == candidate)
        return true;
    else
        return false;
}
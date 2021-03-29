#include "acronym.h"

char* abbreviate(const char* phrase){
    uint8_t i=1, j=1;

    if(phrase != NULL && phrase[0] != '\0'){
        char* acron = malloc(20*sizeof(char));
        acron[0] = to_uppercase(phrase[0]);
        
        while(phrase[i] != '\0'){
            if(is_letter(phrase[i]) && is_separator(phrase[i-1])){
                acron[j] = to_uppercase(phrase[i]);
                j++;
            }
            i++;
        }
        acron[j+1] = '\0';
        return acron;
    } else
        return NULL;
}

char to_uppercase(char c){
    if(c>='a' && c<='z')
        c -= 32;
    return c;
}

uint8_t is_separator(char c){
    if(c==' ' || c=='-' || c=='_')
        return 1;
    else
        return 0;
}

uint8_t is_letter(char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        return 1;
    else
        return 0;
}

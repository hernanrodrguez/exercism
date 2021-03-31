#include "pangram.h"

bool is_pangram(const char* sentence){
    if(sentence != NULL){
        char str[256] = "";
        char letters[28] = ""; 
        copy_str(sentence, str);
        get_letters(str, letters);
        return check_letters(letters);
    } 
    return false;
}

bool check_letters(const char* str){
    int i=0;
    char letters[28] = "abcdefghijklmnopqrstuvwxyz";
    while(letters[i] != '\0'){
        if(!contains(str, letters[i]))
            return false;
        i++;
    }
    return true;
}

void copy_str(const char* ori, char* cpy){
    int i=0;
    while(ori[i] != '\0'){
        cpy[i] = to_lowercase(ori[i]);
        i++;
    }
    cpy[i] = '\0';
}

void get_letters(const char* str, char* letters){
    int i=0;
    while(str[i] != '\0'){
        if(is_letter(str[i])){
            if(!contains(letters, str[i]))
                append(letters, str[i]);
        }
        i++;
    }
}

bool contains(const char* str, char c){
    int i=0;
    while(str[i] != '\0'){
        if(str[i] == c)
            return true;
        i++;
    }
    return false;
}

bool is_letter(char c){
    if(c>='a' && c<='z')
        return true;
    return false;
}

void append(char* str, char c){
    int i=0;
    while(str[i] != '\0')
        i++;
    str[i] = c;
    str[i+1] = '\0';
}

char to_lowercase(char c){
    if(c>='A' && c<='Z')
        c += 32;
    return c;
}
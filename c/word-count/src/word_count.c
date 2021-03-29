#include "word_count.h"

int count_words(const char* sentence, word_count_word_t* words){
    int counter = 0;
    char* token;
    char aux[MAX_WORDS*MAX_WORD_LENGTH] = "";
    const char delimit[]=", \t\r\n\v\f";

    copy_str(sentence, aux);
    token = strtok(aux, delimit);

    while(token != NULL){
        strip(token);
        counter += save_word(token, words);
        token = strtok(NULL, delimit);
    }    
    return counter;
}

int save_word(const char* str, word_count_word_t* words){
    int flag=1;
    word_count_word_t* ptr = words;

    while(ptr->count > 0)
    {
        if(!strcmp(ptr->text, str)){
            ptr->count += 1;
            flag = 0;
        }
        ptr++;
    }

    if(flag){
        strcpy(ptr->text, str);
        ptr->count = 1;
    }
    return flag;
}

void copy_str(const char* ori, char* cpy){
    int i=0;
    while(ori[i] != '\0'){
        cpy[i] = to_lowercase(ori[i]);
        i++;
    }
}

char to_lowercase(char c){
    if(c>='A' && c<='Z')
        c += 32;
    return c;
}

void strip(char* str){
    int i=0;

    while(!is_letter_number(str[i])) 
        i++;

    int j=0;
    while(str[i] != '\0'){
        str[j] = str[i];
        i++;
        j++;
    }
    str[j] = '\0';

    i = strlen(str);
    while(!is_letter_number(str[i])){
        str[i] = '\0';
        i--;
    }
}

int is_letter_number(char c){
    if((c>='a' && c<='z')||(c>='0' && c<='9'))
        return 1;
    else 
        return 0;
}
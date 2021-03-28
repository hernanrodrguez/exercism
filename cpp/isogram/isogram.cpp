#include "isogram.h"
#include <stdio.h>
#include <stdlib.h>

namespace isogram {

    bool is_isogram(const char* str){
        char letters[27] = "";
        int len = str_length(str);

        for(int i=0; i<len; i++){
            if(check_letter(letters, to_lowercase(str[i])))
                return false;
        }
        return true;
    }

    int str_length(const char* str){
        int i=0;
        while(str[i] != '\0')
            i++;
        return i;
    }

    bool check_letter(char* str, char letter){
        int i;
        int len = str_length(str);
        
        if(letter != ' ' && letter != '-'){
            for(i=0; i<len; i++){
                if(str[i] == letter)
                    return true;
            }
            str[i] = letter;
        }
        return false;
    }

    char to_lowercase(char c){
        if(c>='A' && c<='Z')
            c = c + 32;
        return c;
    }

}  // namespace isogram

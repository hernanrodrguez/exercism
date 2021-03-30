#include "bob.h"

namespace bob {

    std::string hey(const char* sentence){
        char aux[256] = "";
        if(is_silence(sentence))
            return "Fine. Be that way!";
        
        copy_str(sentence, aux);
        clear_end(aux);
        
        if(is_question(aux)){
            if(is_yell(aux)){
                return "Calm down, I know what I'm doing!";
            } else {
                return "Sure.";
            } 
        } else if(is_yell(aux)){
            return "Whoa, chill out!";
        } else {
            return "Whatever.";
        }
    }

    bool is_silence(const char* sentence){
        int len = str_length(sentence);
        for(int i=0; i<len; i++){
            if(sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\r' && sentence[i] != '\n')
                return false;
        }
        return true;
    }

    void copy_str(const char* ori, char* cpy){
        int i=0;
        while(ori[i] != '\0'){
            cpy[i] = ori[i];
            i++;
        }
    }

    void clear_end(char* str){
        int i = str_length(str)-1;
        while(str[i] == ' '){
            str[i] = '\0';
            i--;
        }
    }

    bool is_question(const char* sentence){
        int len = str_length(sentence);
        return sentence[len-1] == '?';
    }

    bool is_yell(const char* sentence){
        int len = str_length(sentence);
        for(int i=0; i<len; i++){
            if(is_lowercase(sentence[i]))
                return false;
        }
        for(int i=0; i<len; i++){
            if(is_uppercase(sentence[i]))
                return true;
        }
        return false;
    }

    bool is_lowercase(char c){
        return (c>='a' && c<='z');
    }

    bool is_uppercase(char c){
        return (c>='A' && c<='Z');
    }

    int str_length(const char* str){
        int i=0;
        while(str[i] != '\0')
            i++;
        return i;
    }

}  // namespace bob

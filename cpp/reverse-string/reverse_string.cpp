#include "reverse_string.h"


namespace reverse_string {
    std::string reverse_string(const char* str){
        int len = str_length(str);
        std::string str_rev = "";
        for(int i=1; i<=len; i++){
            str_rev.push_back(str[len-i]);
        }
        return str_rev;
    }

    int str_length(const char* str){
        int i=0;
        while(str[i] != '\0')
            i++;
        return i;
    }
}  // namespace reverse_string

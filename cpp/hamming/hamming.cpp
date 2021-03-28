#include "hamming.h"

namespace hamming {
    int compute(const char* str1, const char* str2){
        int i=0;
        int distance=0;

        int len1 = str_length(str1);
        int len2 = str_length(str2);

        if(len1 != len2){
            throw std::domain_error("Strings must have same length");
        }

        while(str1[i] != '\0'){
            if(str1[i] != str2[i])
                distance++;
            i++;
        }
        return distance;
    }

    int str_length(const char* str){
        int i=0;
        while(str[i] != '\0')
            i++;
        return i;
    }
}  // namespace hamming

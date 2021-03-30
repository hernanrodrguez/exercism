#if !defined(BOB_H)
#define BOB_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

namespace bob {

    std::string hey(const char* sentence);
    bool is_question(const char* sentence);
    bool is_yell(const char* sentence);
    bool is_lowercase(char c);
    bool is_uppercase(char c);
    int str_length(const char* str);
    bool is_silence(const char* sentence);
    void clear_end(char* str);
    void copy_str(const char* ori, char* cpy);

}  // namespace bob

#endif // BOB_H
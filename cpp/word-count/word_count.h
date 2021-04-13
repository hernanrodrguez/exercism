#if !defined(WORD_COUNT_H)
#define WORD_COUNT_H

#include <iostream>
#include <string>
#include <map>
#include <algorithm> 

namespace word_count {

    using namespace std;

    map<string, int> words(string str);
    string clear_str(string str);
    bool is_letter_number(char c);

}  // namespace word_count

#endif // WORD_COUNT_H
#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
#include <list>
#include <iostream>

namespace anagram {

    using namespace std;    

    class anagram{
        public:
            anagram(string str);
            vector<string> matches(vector<string> vec);
        private:
            string word;
            list<char> letters;
            bool is_anagram(string str);
            char to_lowercase(char c);
    };

}  // namespace anagram

#endif // ANAGRAM_H

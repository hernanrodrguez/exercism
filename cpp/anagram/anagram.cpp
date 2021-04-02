#include "anagram.h"

using namespace std;

namespace anagram {

    anagram::anagram(string str){
        for(string::iterator it=str.begin(); it!=str.end(); it++){
            word.push_back(to_lowercase(*it));
            letters.push_back(to_lowercase(*it));    
        }
    }

    vector<string> anagram::matches(vector<string> vec){
        vector<string> ret {};
        for(vector<string>::iterator it = vec.begin() ; it != vec.end(); it++){
            if(is_anagram(*it))
                ret.push_back(*it);            
        }
        return ret;
    }

    bool anagram::is_anagram(string str){
        bool flag = false;
        list<char> cpy (letters); 
        string aux (str);

        int i=0;        
        // test if they are not the same word
        for(string::iterator it=aux.begin(); it!=aux.end(); it++){
            if(word[i] != to_lowercase(*it))
                flag = true;
            i++;
        }

        for(string::iterator it=str.begin(); it!=str.end(); it++){
            if(!flag)
                return false;
            flag = false;
            for(list<char>::iterator ii=cpy.begin(); ii!=cpy.end(); ii++){
                if(to_lowercase(*it) == *ii){
                    cpy.erase(ii);
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            if(cpy.empty())
                return true;            
            else 
                return false;            
        } else 
            return false;
    }

    char anagram::to_lowercase(char c){
        if(c>='A' && c<='Z')
            c = c + 32;
        return c;
    }
    
}  // namespace anagram

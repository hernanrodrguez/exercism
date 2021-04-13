#include "word_count.h"

namespace word_count {

    map<string, int> words(string str){
        map<string, int> ret;
        size_t beg, pos = 0;
        string const delims{ " .,:\n" };
        string word = "";
        map<string,int>::iterator it;

        while ((beg = str.find_first_not_of(delims, pos)) != string::npos) {
            pos = str.find_first_of(delims, beg + 1);
            word = clear_str(str.substr(beg, pos - beg));

            it = ret.find(word);
            if(it != ret.end())
                it->second += 1;
            else 
                ret.insert(pair<string,int>(word, 1));
        }
        return ret;
    }

    string clear_str(string str){
        string::iterator it;
        string ret = "";
        for(it=str.begin(); it!=str.end(); it++){
            if(is_letter_number(*it))
                break;
        }
        while(it!=str.end()){
            ret.push_back(*it);
            it++;
        }
        for(string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); rit++){
            if(is_letter_number(*rit))
                break;
            else
                ret.pop_back();               
        }
        transform(ret.begin(), ret.end(), ret.begin(), ::tolower);
        return ret;
    }

    bool is_letter_number(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'))
            return true;
        else 
            return false;
    }

}  // namespace word_count

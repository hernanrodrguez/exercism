#include "nucleotide_count.h"

namespace nucleotide_count {

    counter::counter(const char* str){
        int i=0;
        map<char,int>::iterator it;

        // init my_map
        my_map.insert(pair<char,int>('A', 0));
        my_map.insert(pair<char,int>('T', 0));
        my_map.insert(pair<char,int>('C', 0));
        my_map.insert(pair<char,int>('G', 0));

        while(str[i] != '\0'){            
            it = my_map.find(str[i]);
            if(it != my_map.end())
                it->second += 1;
            else 
                throw invalid_argument("Invalid DNA string.");
            i++;
        }
    }

    map<char,int> counter::nucleotide_counts() const{
        return my_map;
    }

    int counter::count(char c) const{
        auto it = my_map.find(c);
        if(it != my_map.end())
            return it->second;
        else 
            throw invalid_argument("Invalid DNA character.");
    }

}  // namespace nucleotide_count

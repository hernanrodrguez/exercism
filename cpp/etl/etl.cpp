#include "etl.h"

using namespace std;

namespace etl {

    map<char, int> transform(map<int, vector<char>> old){
        int points[] = {1,2,3,4,5,8,10};
        map<char, int> ret;
        vector<char> aux;

        for(int i=0; i<7; i++){
            auto search = old.find(points[i]);
            if(search != old.end()){
                aux = (old.at(points[i]));
                for(vector<char>::iterator it = aux.begin() ; it != aux.end(); it++)
                    ret.insert({to_lowercase(*it), points[i]});
            }
        }
        
        return ret;         
    }

    char to_lowercase(char c){
        if(c>='A' && c<='Z')
            c = c + 32;
        return c;
    }

}  // namespace etl

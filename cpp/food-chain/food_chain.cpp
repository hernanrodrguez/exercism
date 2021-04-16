#include "food_chain.h"

namespace food_chain {

    const string intro  = "I know an old lady who swallowed a ";

    const vector<string> verses_vec {{
        "I don't know why she swallowed the fly. Perhaps she'll die.\n",
        "It wriggled and jiggled and tickled inside her.\n",
        "How absurd to swallow a bird!\n",
        "Imagine that, to swallow a cat!\n",
        "What a hog, to swallow a dog!\n",
        "Just opened her throat and swallowed a goat!\n",
        "I don't know how she swallowed a cow!\n",
        "She's dead, of course!\n"
    }};

    const vector<string> animals {{"fly","spider","bird","cat","dog","goat","cow","horse"}};


    string verse(int v){
        v-=1;
        string ret = "";
        ret.append(intro).append(animals[v]).append(".\n");
        if(v!=0)
            ret.append(verses_vec[v]);
        if(v!=7){
            for(int i=v; i>0; i--){
                ret.append("She swallowed the ").append(animals[i]).append(" to catch the ").append(animals[i-1]);
                if(i==2)
                    ret.append(" that wriggled and jiggled and tickled inside her.\n");
                else 
                    ret.append(".\n");
            }
            ret.append(verses_vec[0]);
        }
        return ret;
    }

    string verses(int init, int end){
        string ret = "";
        for(int i=init-1; i<end; i++){
            ret.append(verse(i+1));
            ret.append("\n");
        }
        return ret;
    }

    string sing(){
        return verses(1,8);
    }

}  // namespace food_chain


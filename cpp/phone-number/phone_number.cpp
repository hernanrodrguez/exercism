#include "phone_number.h"

namespace phone_number {

    phone_number::phone_number(string phone){
        int i=0;
        _number = "";
        for (string::reverse_iterator rit=phone.rbegin(); 
             rit!=phone.rend() && i<10;
             ++rit) {

            if(*rit >= '0' && *rit<='9'){
                i++;
                _number.insert(_number.begin(), *rit);
            }
        }  
        _string = phone.substr(3);
        _area_code = _number.substr(0,3);
        
        if(_number.size() < 10)
            throw domain_error("Phone number is too short");

        if(phone.size() == 11 && phone[0] != '1')
            throw domain_error("Wrong country code");

        if(_area_code[0] == '0' || _area_code[0] == '1')
            throw domain_error("Wrong area code");

        if(_number[3] == '0' || _number[3] == '1')
            throw domain_error("Wrong exchange code");
    }


}  // namespace phone_number

#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <iostream>

namespace phone_number {

    using namespace std;

    class phone_number{
        private:
            string _string;
            string _number;
            string _area_code;
        public:
            phone_number(string phone);
            string number() const{ return _number; }
            string area_code() const{ return _area_code; }
            operator string() const{ return _string; }
    };

}  // namespace phone_number

#endif // PHONE_NUMBER_H
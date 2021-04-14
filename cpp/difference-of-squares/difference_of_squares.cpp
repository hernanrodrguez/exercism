#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int num){
        int ret = 0;
        for(int i=1; i<=num; i++)
            ret += i;
        return ret*ret;
    }

    int sum_of_squares(int num){
        int ret = 0;
        for(int i=1; i<=num; i++)
            ret += i*i;
        return ret;
    }

    int difference(int num){
        return square_of_sum(num)-sum_of_squares(num);
    }

}  // namespace difference_of_squares

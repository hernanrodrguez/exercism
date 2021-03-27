#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t pos){

    float dist = sqrt((pos.x * pos.x) + (pos.y * pos.y));
    
    if(dist > 10) // fuera del circulo mas grande
        return 0;
    else if(dist > 5)
        return 1;
    else if(dist > 1)
        return 5;
    else    
        return 10;
}
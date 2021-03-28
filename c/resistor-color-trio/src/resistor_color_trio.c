#include "resistor_color_trio.h"
#include <stdio.h>
#include <math.h>

resistor_value_t color_code(resistor_band_t* color){
    resistor_value_t actual;
    double aux = (color[0]*10 + color[1]) * pow(10, color[2]);

    actual.value = get_value(aux);
    actual.unit = get_unit(aux);

    return actual;
}

uint16_t get_value(double value){
    while(value > 1000){
        value /= 1000;
    }
    return (uint16_t)value;
}

uint8_t get_unit(double value){
    uint8_t i = 0;
    while(value > 1000){
        value /= 1000;
        i++;
    }
    return i;
}

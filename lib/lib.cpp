#include "lib.h"

#include <iostream>
#include <cstring>


EMode GetMode(char* mode) {
    if (strcmp(mode, "c2f") == 0) {
        return kC2F;
    }
    if (strcmp(mode, "f2c") == 0) {
        return fF2C;
    }
    return kUnsupported;
}
double CelsiusToFarenheit(double celsius){
    return celsius * 9 / 5 + 32;
}
double FarenheitToCelsius(double farenheit){
    return (farenheit - 32) * 5 / 9;
}


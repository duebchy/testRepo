#pragma once

#include <iostream>
#include <cstring>

enum EMode {
    kUnsupported,
    kC2F,
    fF2C

};


EMode GetMode(char* mode);

double CelsiusToFarenheit(double celsius);

double FarenheitToCelsius(double farenheit);



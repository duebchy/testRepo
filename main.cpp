#include "lib/lib.h"

int main(int argc, char** argv){
    if (argc != 3) {
        std::cout << "Bad arguments" << std::endl;
        return 1;
    }
    else    {


    char* mode = argv[1];
        double degree = std::stod(argv[2]);
        EMode emode = GetMode(mode);
        switch (emode) {
            case EMode::fF2C:
                std::cout << degree << " Fahrenheit is " << FarenheitToCelsius(degree) << " Celsius." << std::endl;
                break;
            case EMode::kC2F:
                std::cout << degree << " Celsius is " << CelsiusToFarenheit(degree) << " Fahrenheit." << std::endl;
                break;
           
            default:
                std::cout << "Unknown mode. Supported f2c or c2f." << std::endl;
                return 1;
        }
}
}
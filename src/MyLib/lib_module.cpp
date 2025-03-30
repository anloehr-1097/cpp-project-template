#include "include/interface.h"
#include <iostream>


void cust_func(std::string s) {
    // Do something
    std::cout << "Custom print with third party fun." << std::endl;
    any_third_fun(s);
}

std::string cust_func2(std::string s) {
    // Do something
    return s;
}

#include "include/interface.h"
#include <iostream>


void cust_func(std::string s) {
    // Do something
    std::cout << "Custom print with third party fun." << std::endl;
    any_third_fun(s);
}

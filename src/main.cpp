#include <iostream>
#include <string>
#include "include/lib_module.h"
#include "include/project-nameConfig.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "This is version "<< VERSION_MAJOR << "." << VERSION_MINOR << std::endl;

    std::string s = "Hello from main!";
    cust_func(s);
    return 0;

}


#include <iostream>
#include <string>
#include "MyLib/lib_module.h"
#include "project-nameConfig.h"
#include <fmt/core.h>

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "This is version "<< VERSION_MAJOR << "." << VERSION_MINOR << std::endl;

    fmt::print("Hello, {}!\n", "world");
    std::string s = "Hello from main!";
    cust_func(s);
    return 0;

}


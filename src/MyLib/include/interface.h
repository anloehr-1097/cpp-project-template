#include <string>
#include <iostream>

#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H

void any_third_fun(std::string s){
    std::cout << "Third party print: " << s << std::endl;
}

#endif


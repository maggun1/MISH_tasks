#include "SimpleClass.h"
#include <iostream>

SimpleClass::SimpleClass() {
    std::cout << "SimpleClass object created" << std::endl;
}

SimpleClass::~SimpleClass() {
    std::cout << "SimpleClass object destroyed" << std::endl;
}

void SimpleClass::ShowMessage(const std::string &str) {
    std::cout << "Message: " << str << "." << std::endl;
}
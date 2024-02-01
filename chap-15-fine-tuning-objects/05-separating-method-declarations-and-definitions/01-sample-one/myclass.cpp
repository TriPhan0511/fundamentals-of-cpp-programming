#include <iostream>
#include "myclass.h" 
// Note: We would #include the .h header file 
// in all source files that need to use MyClass objects

void MyClass::my_method() const
{
    std::cout << "ALOHA, world!";
}
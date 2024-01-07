#include <iostream>

int main()
{
    // Declare some Boolean variables
    bool a = true;
    bool b = false;
    std::cout << "a = " << a << ", b = " << b << '\n';
    // Reassign a
    a = false;
    std::cout << "a = " << a << ", b = " << b << '\n';
    // Mix integers and Booleans
    a = 1;
    b = 1;
    std::cout << "a = " << a << ", b = " << b << '\n';
    // Assign Boolean value to an integer
    int x = a;
    int y = true;
    std::cout << "a = " << a << ", b = " << b 
        << ", x = " << x << ", y = " << y << '\n';
    // More mixing
    a = 1725; // Warning issued
    b = -19; // Warning issued
    std::cout << "a = " << a << ", b = " << b << '\n';

    // ->
    // a = 1, b = 0
    // a = 0, b = 0
    // a = 1, b = 1
    // a = 1, b = 1, x = 1, y = 1
    // a = 1, b = 1

}
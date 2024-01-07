#include <iostream>

int main()
{
    // Sometimes it is desirable to print Boolean values with the words false and true rather than with 0 and
    // The following code uses the std::boolalpha stream manipulator to condition the output
    // stream to provide the designed effect.
    
    // Declare some Boolean variables
    bool a = true;
    bool b = false;
    // Condition the stream to display Booleans as words
    std::cout << std::boolalpha;
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
    int y = b;
    std::cout << "a = " << a << ", b = " << b 
       << ", x = " << x << ", y = " << y << '\n';
    // More mixing
    a = 1725; // Warning issued
    b = -19; // Warning issued
    std::cout << "a = " << a << ", b = " << b << '\n';

    // ->
    // a = true, b = false
    // a = false, b = false
    // a = true, b = true
    // a = true, b = true, x = 1, y = 1
    // a = true, b = true
}
#include <iostream>

int main(){
    // Mixed type expressions
    // int x = 4;
    // double y = 10.2;
    // double sum = x + y;
    // std::cout << sum << '\n'; // 14.2
    // std::cout << typeid(sum).name() << '\n'; // d

    // Widening an int to a double: always safe
    // int i1 = 500;
    // double d1 = i1;
    // std::cout << "d1 = " << d1 << '\n'; // 500

    // Narrowing
    // Assigning a double to an int variable is not always possible,
    // since the double value may not be in the range of ints.
    // Furthermore, if the double variable falls within the range of ints but is
    // not a whole number, the int variable is unable to the manage fractional part
    // double d = 1.6;
    // int i = d;
    // std::cout << "i = " << i << '\n'; // i = 1

    // Type cast
    // The cast forces the compiler to accept the assignment without a issuing a warning
    // double d = 10.5;
    // int i = static_cast<int> (d);
    // // We also can cast literal values and expressions:
    // i = static_cast<int> (1.6);
    // int x = 10;
    // i = static_cast<int> (x + 2.1);
    // std::cout << "i = " << i << '\n';

    // Bad narrow
    double d = 2200000000.0;
    int i = d;
    std::cout << i; // -2147483648 <- wrong

}
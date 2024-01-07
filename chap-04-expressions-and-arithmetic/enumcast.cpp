#include <iostream>

int main(){
    // Section 3.9 introduced enumerated types. Behind the scenes, the compiler translates enumerated values
    // into integers. The first value in the enumeration is 0, the second value is 1, etc. Even though the underlying
    // implementation of enumerated types is integer, the compiler does not allow the free exchange between
    // integers and enumerated types. The following code will not compile:
    enum class Color {Red, Orange, Yellow, Green, Blue};
    // std::cout << Color::Orange; // Error
    
    // The std::cout printing object knows how to print integers, but it does not know anything about our
    // Color class and its values. If we really want to treat an enumerated type value as its underlying integer,
    // we must use a type cast.
    std::cout << static_cast<int> (Color::Orange); // 1

    // Even though enumerated types are encoded as integers internally, programmers may not perform arithmetic
    // on enumerated types without involving casts. Such opportunities should be very rare; if you need to
    // perform arithmetic on a variable, it really should be a numerical type, not an enumerated type.

}
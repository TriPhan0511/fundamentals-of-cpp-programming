#include <iostream>
#include "rational.h"

using std::cout;

// Overload the operator<< function
// std::ostream& operator<<(std::ostream& os, const Rational& f)
// {
//     os << f.getNumerator() << "/" << f.getDenominator();
//     return os;
// }

int main()
{
    Rational f(10, 20);
    cout << "f = " << f << '\n';
    // f = f.reduce();
    // cout << "After reducing, " << "f = " << f << '\n';

    // Rational f1{1, 3};
    // Rational f2{3, 9};
    // Rational f3{3, 10};
    // Rational f4{1, 3};

}
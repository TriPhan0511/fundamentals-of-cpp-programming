#include <iostream>
#include "rational.h"

using std::cout;

// Overload the operator<< function
std::ostream& operator<<(std::ostream& os, const Rational& f)
{
    os << f.getNumerator() << "/" << f.getDenominator();
    return os;
}

int main()
{
    Rational f(10, 20);
    cout << "f = " << f << '\n';
    f = f.reduce();
    cout << "After reducing, " << "f = " << f << '\n';

    Rational f11{1, 3};
    Rational f22{3, 9};
    Rational f33{3, 10};
    Rational f44{1, 3};

    if (f11 == f22)
    {
        cout << f11 << " is equal to " << f22 << '\n';
    }
    else
    {
        cout << f11 << " is NOT equal to " << f22 << '\n';
    }
    if (f11 == f33)
    {
        cout << f11 << " is equal to " << f33 << '\n';
    }
    else
    {
        cout << f11 << " is NOT equal to " << f33 << '\n';
    }
    if (f11 == f44)
    {
        cout << f11 << " is equal to " << f44 << '\n';
    }
    else
    {
        cout << f11 << " is NOT equal to " << f44 << '\n';
    }
   
    

    Rational f1{1, 3};
    Rational f2{3, 9};
    
    cout << f1 << " + "  << f2 << " = " << (f1 + f2) << '\n';
    f1 = {2,5};
    cout << f1 << " + "  << f2 << " = " << (f1 + f2) << '\n';
    
    cout << f1 << " - "  << f2 << " = " << (f1 - f2) << '\n';
    f1 = {2,5};
    cout << f1 << " - "  << f2 << " = " << (f1 - f2) << '\n';
    
    cout << f1 << " * "  << f2 << " = " << (f1 * f2) << '\n';
    f1 = {2,5};
    cout << f1 << " * "  << f2 << " = " << (f1 * f2) << '\n';
    
    cout << f1 << " / "  << f2 << " = " << (f1 / f2) << '\n';
    f1 = {2,5};
    cout << f1 << " / "  << f2 << " = " << (f1 / f2) << '\n';
}
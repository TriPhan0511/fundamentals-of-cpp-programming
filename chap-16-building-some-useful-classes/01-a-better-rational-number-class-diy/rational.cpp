#include <iostream>
#include "rational.h"

// Overload the function operator<<
std::ostream& operator<<(std::ostream& os, const Rational& r)
{
    os << r.getNumerator() << "/" << r.getDenominator();
    return os;
}

Rational::Rational(int n, int d): numerator(n), denominator(d)
{
    if (d == 0)
    {
        std::cout << "*****Warning: Denominator can not be zero.\n";
        numerator = 0;
        denominator = 1;
    }
}

Rational::Rational(): numerator(0), denominator(1) {}

int Rational::getNumerator() const
{
    return this->numerator;
}

int Rational::getDenominator() const
{
    return this->denominator;
}

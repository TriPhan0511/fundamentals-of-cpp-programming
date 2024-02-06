#include <iostream>
#include "rational.h"

// Find the greatest common divisor of two integers
int Rational::findGCD(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;    
}

// Find the least common multiple of two integers
int Rational::findLCM(int a, int b)
{
    if (a == 0 || b == 0) {
        return 0; // LCM is undefined for zero
    }
    int gcd = findGCD(a, b);
    // LCM(a, b) = |a * b| / GCD(a, b)
    int lcm = std::abs(a * b) / gcd;
    return lcm;
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

void Rational::setNumerator(int value)
{
    this->numerator = value;
}

void Rational::setDenominator(int value)
{
    if (value == 0)
    {
        std::cout << "*****Warning: Denominator can not be zero.\n";
    }
    else
    {
        this->denominator = value;
    }
}

// Reduce a rational number
Rational Rational::reduce() const
{
    int gcd = findGCD(this->numerator, this->denominator);
    return {this->numerator/gcd, this->denominator/gcd};
}

// Overload the operator== function
// to check whether two Rational objects are equal or not
bool Rational::operator==(const Rational& other) const
{
    Rational f1 = (*this).reduce();
    Rational f2 = other.reduce();
    return (f1.numerator == f2.numerator) 
        && (f1.denominator == f2.denominator);
}

// Overload the operator!= function
// to check whether two Rational objects are different or not
bool Rational::operator!=(const Rational& other) const
{
    return !operator==(other);
}

// Overload the operator+ function
// to compute addition of two Rational objects
Rational Rational::operator+(const Rational& other) const
{
    int lcm = findLCM(this->denominator, other.denominator);
    int factor1 = lcm / this->denominator;
    int factor2 = lcm / other.denominator;
    return Rational(this->numerator*factor1 + other.numerator*factor2, lcm).reduce();
}

// Overload the operator+ function
// to compute subtraction of two Rational objects
Rational Rational::operator-(const Rational& other) const
{
    int lcm = findLCM(this->denominator, other.denominator);
    int factor1 = lcm / this->denominator;
    int factor2 = lcm / other.denominator;
    return Rational(this->numerator*factor1 - other.numerator*factor2, lcm).reduce();
}

// Overload the operator+ function
// to compute multiplication of two Rational objects
Rational Rational::operator*(const Rational& other) const
{
    return Rational(this->numerator*other.numerator, this->denominator*other.denominator)
        .reduce();
}

// Overload the operator+ function
// to compute division of two Rational objects
Rational Rational::operator/(const Rational& other) const
{
    return Rational(this->numerator*other.denominator, this->denominator*other.numerator)
        .reduce();
}

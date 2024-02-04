#include <iostream>

#ifndef RATIONAL_H_
#define RATIONAL_H_

class Rational
{
private:
    int numerator;
    int denominator;
    // Find the greatest common divisor of two integers
    static int findGCD(int a, int b); 
    // Find the least common multiple of two integers
    static int findLCM(int a, int b); 
public:
    Rational(int n, int d);
    Rational();
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int value);
    void setDenominator(int value);
    // Reduce a rational number
    Rational reduce();
    // Overload the operator== function
    // to check whether two Rational objects are equal or not
    bool operator==(const Rational& other);
    // Overload the operator!= function
    // to check whether two Rational objects are different or not
    bool operator!=(const Rational& other);
    // Overload the operator+ function
    // to compute addition of two Rational objects
    Rational operator+(const Rational& other);
    // Overload the operator+ function
    // to compute subtraction of two Rational objects
    Rational operator-(const Rational& other);
    // Overload the operator+ function
    // to compute multiplication of two Rational objects
    Rational operator*(const Rational& other);
    // Overload the operator+ function
    // to compute division of two Rational objects
    Rational operator/(const Rational& other);

};

#endif
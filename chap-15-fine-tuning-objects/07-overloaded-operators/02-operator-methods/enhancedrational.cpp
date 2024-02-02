#include <iostream>

class Rational
{
    int numerator;
    int denominator;
public:
    Rational() {}

    Rational(int numerator, int denominator): 
        numerator(numerator), denominator(denominator) {}

    int get_numerator() const
    {
        return this->numerator;
    }

    int get_denominator() const
    {
        return this->denominator;
    }

    // Unary plus returns a double number
    // equivalent of the ration number.
    double operator+() const
    {
        return static_cast<double>(numerator) / denominator;
    }

    // Binary plus returns the rational number that results
    // from adding another rational number (the parameter) to
    // this object.
    Rational operator+(const Rational& other)
    {
        int den = denominator * other.denominator;
        int num = numerator * other.denominator + other.numerator * denominator;
        return {num, den};
    }
};

// Print a Rational object
void print_fraction(const Rational& f)
{
    std::cout << f.get_numerator() << "/" << f.get_denominator();
}

int main()
{
    Rational fract1(1, 2);
    Rational fract2(1, 3);
    Rational fract3;

    double value = +fract1; // Assigns 0.5
    std::cout << value << '\n';

    fract3 = fract1 + fract2;
    print_fraction(fract3); // 5/6

    /*
        NOTE:
        The statement:
            fract3 = fract1 + fract2;
        is the syntactically sugared version of:
            fract3 = fract1.operator+(fract2);fract3 = fract1 + fract2;

        The statement:
            double value = +fract1;
        is the syntactically sugared version of:
            double value = fract1.operarot+();
    */
}
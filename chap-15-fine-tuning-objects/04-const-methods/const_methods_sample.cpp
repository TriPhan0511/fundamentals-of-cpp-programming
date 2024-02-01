#include <iostream>

using std::cout;

class SimpleRational
{
    int numerator;
    int denominator;
public:
    // Constructor
    SimpleRational(int numerator, int denominator): 
        numerator(numerator), denominator(denominator) {}
    
    // Getters/Setters
    int get_numerator() const
    {
        return this->numerator;
    }

    int get_denominator() const
    {
        return this->denominator;
    }

    void set_numerator(int numerator)
    {
        this->numerator = numerator;
    }

    void set_denominator(int denominator)
    {
        if (denominator == 0)
        {
            cout << "The dnominator cannot be zero.";
        }
        else
        {
            this->denominator = denominator;
        }
    }
};

void print_fraction(SimpleRational f)
{
    cout << f.get_numerator() << "/" << f.get_denominator();
}

int main()
{
    const SimpleRational fract(1, 2); // constant fraction 1/2
    // fract.set_numerator(10); // Error, cannot change a constant
    cout << fract.get_numerator() << '\n'; // Okay with const get_numerator
    cout << fract.get_denominator() << '\n'; // Okay with const get_denominator
}
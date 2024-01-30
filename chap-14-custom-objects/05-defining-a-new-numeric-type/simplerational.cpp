#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;

class SimpleRational
{
    int numerator;
    int denominator;
public:
    // Initialize the components of a Rational object
    SimpleRational(int n, int d): numerator(n), denominator(d)
    {
        if (d == 0)
        {
            // Display error message
            cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
    }

    // The default contructor makes a zero rational number
    SimpleRational(): numerator(0), denominator(1) {}

    // Allows a client to reassign the numerator
    void set_numerator(int n)
    {
        numerator = n;
    }

    // Allows a client to reassign the denominator
    // Disallows an illegal fraction (zero denominator)
    void set_denominator(int d)
    {
        if (d == 0)
        {
            // Display error message
            cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
        else
        {
            denominator = d;
        }
    }

    // Allows a client to see the numerator's value
    int get_numerator()
    {
        return numerator;
    }

    // Allows a client to see the denominator's value
    int get_denominator()
    {
        return denominator;
    }
};

// Returns the product of two rational numbers
SimpleRational multiply(SimpleRational f1, SimpleRational f2)
{
    // return SimpleRational(f1.get_numerator()*f2.get_numerator(), f1.get_denominator()*f2.get_denominator())
    return 
    {
        f1.get_numerator() * f2.get_numerator(),
        f1.get_denominator() * f2.get_denominator()
    };
}

// Print a fraction
void print_fraction(SimpleRational f)
{
    cout << f.get_numerator() << "/" << f.get_denominator();
}

int main()
{
    SimpleRational fract(1, 2); // The fraction 1/2
    cout << "The fraction is ";
    print_fraction(fract);
    cout << '\n';
    fract.set_numerator(19);
    fract.set_denominator(4);
    cout << "The fraction now is ";
    print_fraction(fract);
    cout << '\n';

    // Alternate syntax uses {} with constructor instead of ()
    SimpleRational fract1{1, 2};
    SimpleRational fract2{2, 3};
    auto prod = multiply(fract1, fract2);
    cout << "The product of ";
    print_fraction(fract1);
    cout << " and ";
    print_fraction(fract2);
    cout << " is ";
    print_fraction(prod);
}
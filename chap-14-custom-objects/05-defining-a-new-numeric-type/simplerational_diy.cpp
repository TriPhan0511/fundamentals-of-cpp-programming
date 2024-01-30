#include <iostream>

using std::cout;
using std::cin;

class SimpleRational
{
    int numerator;
    int denominator;
public:
    // Constructor
    SimpleRational(int n, int d): numerator(n), denominator(d)
    {
        if (d == 0)
        {
            cout << "Zero denominator error.\n";
            exit(1); // Exit the program
        }
    }

    int get_numerator()
    {
        return numerator;
    }

    void set_numerator(int value)
    {
        numerator = value;
    }

    int get_denominator()
    {
        return denominator;
    }

    bool set_denominator(int value)
    {
        bool result = false;
        if (value == 0)
        {
            cout << "Denominator cannot be set to zero.\n";
        }
        else
        {
            denominator = value;
        }
        return result;
    }
};

// Print fraction
void print_fraction(SimpleRational& f)
{
    cout << f.get_numerator() << "/" << f.get_denominator();
}

// Computer product of two fractions
// SimpleRational multipy(const SimpleRational& f1, const SimpleRational& f2)
SimpleRational multipy(SimpleRational& f1, SimpleRational& f2)
{
    SimpleRational result
    {
        f1.get_numerator()*f2.get_numerator(), 
        f1.get_denominator()* f2.get_denominator()
    };
    return result;
}

int main()
{
    SimpleRational fract{1, 2}; // The fraction 1/2
    cout << "The fraction is ";
    print_fraction(fract);
    fract.set_numerator(19);
    fract.set_denominator(4);
    // fract.set_denominator(0);
    cout << '\n';
    cout << "The fraction now is ";
    print_fraction(fract);
    cout << '\n';

    // Alternate syntax use {} with contructor instead of ()
    SimpleRational fract1{1, 2};
    SimpleRational fract2{2, 3};
    auto prod = multipy(fract1, fract2);
    cout << "The product of ";
    print_fraction(fract1);
    cout << " and ";
    print_fraction(fract2);
    cout << " is ";
    print_fraction(prod);
}
#include <iostream>

using std::cout;

class SimpleRational
{
    int numerator;
    int denominator;

public:
    SimpleRational(int n, int d): numerator(n), denominator(d) {}
    
    int get_numerator()
    {
        return numerator;
    }
    
    int get_denominator()
    {
        return denominator;
    }

    void set_numerator(int n)
    {
        numerator = n;
    }

    void set_denominator(int d)
    {
        if (d == 0)
        {
            cout << "Warning: denominator cannot be zero.";
            exit(1); // Exit the program
        }
        else
        {
            denominator = d;
        }
    }
};

// Print fraction
void print_fraction(SimpleRational f)
{
    cout << f.get_numerator() << "/" << f.get_denominator();
}

// Zero numerator
SimpleRational zero1(const SimpleRational& f)
{
    SimpleRational result{f}; // Make a copy of parameter f
    result.set_numerator(0);
    return result;
}

SimpleRational zero2(SimpleRational f)
{
    // Just use f; it is a copy of the caller's actual parameter
    f.set_numerator(0);
    return f;
}

int main()
{
    SimpleRational fract{3, 4};
    cout << "Original: ";
    print_fraction(fract);
    // auto zero = zero1(fract);
    auto zero = zero2(fract);
    cout << '\n';
    cout << "After: ";
    print_fraction(fract);
    cout << '\n';
    cout << "The zero one: ";
    print_fraction(zero);
}
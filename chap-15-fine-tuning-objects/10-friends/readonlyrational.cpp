/*
    NOTE:
    Some would argue that the Listing 15.13 (printonlyrational.cpp) example could be better written as
    shown in Listing 15.15 (readonlyrational.cpp).

    The get_numerator and get_denominator methods eliminate the need for a friend function. Note
    that a ReadOnlyRational object is subtly different from an PrintOnlyRational object. Clients
    can see the numerator and denominator fields of a ReadOnlyRational object as desired, but
    PrintOnlyRational objects are “print only;” clients readily can print an PrintOnlyRational
    object but cannot easily discern the individual numerator and denominator values.
*/

#include <iostream>

class ReadOnlyRational
{
    int numerator;
    int denominator;
public:
    // Initialized the components of a ReadOnlyRational object
    ReadOnlyRational(int n, int d): numerator(n), denominator(d)
    {
        if (d == 0)
        {
            std::cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
    }

    // The default constructor makes a zero ration number
    ReadOnlyRational(): ReadOnlyRational(0, 1) {}

    // Allows a client to see the numerator's value.
    int get_numerator() const
    {
        return this->numerator;
    }

    // Allows a client to see the denominator's value.
    int get_denominator() const
    {
        return this->denominator;
    }
};

// This opeator sends a fraction object to the outout stream
// in a human-readable form.
std::ostream& operator<<(std::ostream& os, const ReadOnlyRational& f)
{
    os << f.get_numerator() << "/" << f.get_denominator();
    return os;
}

int main()
{
    ReadOnlyRational fract{1, 2};
    std::cout << "The fraction is " << fract << '\n';
    ReadOnlyRational fract2(2, 3);
    std::cout << "The fraction is " << fract2 << '\n';
}
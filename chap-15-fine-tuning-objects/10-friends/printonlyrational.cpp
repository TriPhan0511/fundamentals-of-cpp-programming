/*
    NOTE:
    A class can grant access to an outside function or another class 
    via the friend reserved word. 
    In the following program we specify a friend function that 
    allows clients to display in humanreadable form an opaque rational 
    number object via operator<< with an output stream object.
*/

#include <iostream>
#include <cstdlib>

// Models a mathematical ration number
class PrintOnlyRational
{
    int numerator;
    int denominator;
public:
    // Initializes the components of an PrintOnlyRational object
    PrintOnlyRational(int n, int d): numerator(n), denominator(d)
    {
        if (d == 0)
        {
            std::cout << "Zero denominator error\n";
            exit(1); // Exit the program
        }
    }

    // The default constructor makes a zero rational number
    // 0/1
    PrintOnlyRational(): PrintOnlyRational(0, 1) {}

    // Way 1:Implement the operator<< function outside of the class
    // This operator can access the internal details
    // of an object of this class
    // friend std::ostream& operator<<(std::ostream& os,
    //     const PrintOnlyRational& f);

    // Way 2: Implement the operator<< function 
    // within the body of the class
    friend std::ostream& operator<<(std::ostream& os,
        const PrintOnlyRational& f)
    {
        os << f.numerator << "/" << f.denominator;
        return os;
    }
};

// Way 1:
// Implement the operator<< function outside of the class
// std::ostream& operator<<(std::ostream& os,
//     const PrintOnlyRational& f)
// {
//     os << f.numerator << "/" << f.denominator;
//     return os;
// }

int main()
{
    PrintOnlyRational fract{1, 2};
    std::cout << "The fraction is " << fract << '\n';
    PrintOnlyRational fract2{2, 3};
    std::cout << "The fraction is " << fract2 << '\n';
    // ->
    // The fraction is 1/2
    // The fraction is 2/3
}
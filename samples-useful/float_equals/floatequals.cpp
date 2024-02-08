#include <iostream>
#include <cmath> // for fabs()

/**
 * equals(a, b, tolerance)
 *  Returns true if a = b or |a - b| < tolerance.
 *  If a nd b differ by only a small amount
 *  (specified by tolerance), a and b are considered "equal".
 *  Useful to account for floating-point round-off error.
 *  The == operator is checked first since some special
 *  floating-point values such as HUG_VAL requires an
 *  exact equality check.
*/
bool equals(double a, double b, double tolerance)
{
    return a == b || fabs(a - b) < tolerance;
}

int main()
{
    // for (double i = 0.0; !equals(i, 1.0, 0.0001); i += 0.1)
    // {
    //     std::cout << "i = " << i << '\n';
    // }

    for (double i = 0.0; i != 1.0; i += 0.1)
    {
        std::cout << "i = " << i << '\n';
    }
        
}
#include <iostream>
#include <cmath>

/*
*   equals(a, b, tolerance)
*       Returns true if a = b or |a - b| < tolerance.
*       If a and b differ by only a small amount
*       (specified by tolerance), a and b are considered
*       "equal". Useful to account fo floating-point 
*       round-of error.
*       The == operator is checked first since some special
*       floating-point values such as HUGE_VAL require an
*       exact equality check.
*/
bool equals(double a, double b, double tolerance)
{
    return a == b || fabs(a - b) < tolerance;
}

int main()
{
    for (double i = 0.0; !equals(i, 1.0, 0.0001); i += 0.1)
    {
        std::cout << "i = " << i << '\n';
    }
}
// ->
// i = 0
// i = 0.1
// i = 0.2
// i = 0.3
// i = 0.4
// i = 0.5
// i = 0.6
// i = 0.7
// i = 0.8
// i = 0.9

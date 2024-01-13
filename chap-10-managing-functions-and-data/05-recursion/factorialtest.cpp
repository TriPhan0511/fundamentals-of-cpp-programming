#include <iostream>

using std::cout;
using std::cin;

/**
 * factorial(n)
 *      Computes n!
 *      Returns the factorial of n.
*/
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << "0! = " << factorial(0) << '\n'; // 0! = 1
    cout << "1! = " << factorial(1) << '\n'; // 1! = 1
    cout << "6! = " << factorial(6) << '\n'; // 6! = 720
    cout << "10! = " << factorial(10) << '\n'; // 10! = 3628800
}
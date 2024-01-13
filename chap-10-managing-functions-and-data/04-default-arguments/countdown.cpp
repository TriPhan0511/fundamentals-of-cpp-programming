#include <iostream>

using std::cout;

/**
 * countdown
 *      Prints a count down from n to zero.
 *      The default starting value is 10.
*/
void count(int n = 10)
{
    while (n >= 0)
    {
        cout << n-- << " ";
    }
    cout << '\n';
}

int main()
{
    count(5); // 5 4 3 2 1 0
    count(); // 10 9 8 7 6 5 4 3 2 1 0 
}
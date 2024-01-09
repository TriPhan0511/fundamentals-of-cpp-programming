// Illustrate the goto statement
// The goto statement allows the program’s execution flow
// to jump to a specified location within the function

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int op1 = 2;
    while (op1 < 100)
    {
        int op2 = 2;
        while (op2 < 100)
        {
            if (op1 * op2 == 3731)
            {
                goto end;
            }
            cout << "Product is "  << (op1 * op2) << '\n';
            op2++;
        }
        op1++;
    }
    end:
        cout << "The end";
}
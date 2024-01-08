/*
* Allow the user to enter a sequence of nonnegative
* integers. The user ends the list with a negative
* integer. At the end the sum of the nonnegative
* integers entered is displayed. The program prints
* zero if the user enters no nonnegative integers.
*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sum = 0;
    int input = 0;
    cout << "Enter numbers to sum, negative number ends list: ";
    while (input >= 0)
    {
        cin >> input;
        if (input >= 0)
        {
            sum += input;
        }
    }
    cout << "Sum = " << sum;
}


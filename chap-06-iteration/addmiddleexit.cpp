#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sum = 0;
    int input;
    cout << "Enter numbers to sum, negative number ends list: ";
    while (true)
    {
        cin >> input; 
        if (input < 0)
        {
            break; // Exit loop immediately
        }
        sum += input;
    }
    cout << sum;
}
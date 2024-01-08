#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sum = 0;
    int input;
    cout << "Enter numbers to sum, type 'q' to end list: ";
    while (cin >> input)
    {
        sum += input;
    }
    cout << "Sum = " << sum;
}
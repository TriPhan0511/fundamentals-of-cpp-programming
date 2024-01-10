#include <iostream>

using std::cout;
using std::cin;

int prompt()
{
    int result;
    cout << "Please enter an integer value: ";
    cin >> result;
    return result;
}

int main()
{
    cout << "This program adds together two integers\n";
    int value1 = prompt();
    int value2 = prompt();
    cout << value1 << " + " << value2 << " = " << value1 + value2;
}
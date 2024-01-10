#include <iostream>

using std::cout;
using std::cin;

int prompt(int n)
{
    int result;
    cout << "Please enter integer #" << n << ": ";
    cin >> result;
    return result;
}

int main()
{
    cout << "This program adds together two integers\n";
    int value1 = prompt(1);
    int value2 = prompt(2);
    cout << value1 << " + " << value2 << " = " << value1 + value2;

}
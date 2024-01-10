#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main()
{
    double input;
    cout << "Enter number: ";
    cin >> input;
    double root = sqrt(input);
    cout << "Square root of " << input << " = " << root;
}
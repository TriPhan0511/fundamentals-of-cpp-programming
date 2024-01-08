#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int value;
    cout << "Please enter an integer in the range 0..5: ";
    cin >> value;
    if (value < 0)
        cout << "Too small";
    else if (value == 0)
        cout << "zero";
    else if (value == 1)
        cout << "one";
    else if (value == 2)
        cout << "two";
    else if (value == 3)
        cout << "three";
    else if (value == 4)
        cout << "four";
    else if (value == 5)
        cout << "five";
    else 
        cout << "Too large";
}


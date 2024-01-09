#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int value;
    cout << "Please neter an integer in the range 0..5: ";
    cin >> value;
    switch (value)
    {
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        
        default:
            if (value < 0)
            {
                cout << "Too small";
            }
            else
            {
                cout << "Too large";
            }
            break;
    }
}
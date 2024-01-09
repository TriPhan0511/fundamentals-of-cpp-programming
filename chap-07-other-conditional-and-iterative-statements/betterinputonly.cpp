#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int in_value;
    cout << "Please neter an integer in the range 0-10: ";
    do
    {
        cin >> in_value;
    } while (in_value < 0 || in_value > 10);
    cout << "Legal value entered was " << in_value;
}
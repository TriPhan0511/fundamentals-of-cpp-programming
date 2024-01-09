#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int in_value;
    cout << "Please neter an integer in the range 0-10: ";
    while (true)
    {
        cin >> in_value;
        if (in_value >= 0 && in_value < 10)
        {
            break;
        }
    }
    cout << "Legal value entered was " << in_value;
}

// int main()
// {
//     int in_value = -1;
//     cout << "Please neter an integer in the range 0-10: ";
//     while (in_value < 0 || in_value > 10)
//     {
//         cin >> in_value;
//     }
//     cout << "Legal value entered was " << in_value;
// }
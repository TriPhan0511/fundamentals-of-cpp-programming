#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int count = 0;
    char input;
    while (true)
    {
        cout << count << '\n';
        cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
        cin >> input;
        if (input == 'y' || input == 'Y')
        {
            count++;
            continue;
        }
        if (input == 'n' || input == 'N')
        {
            break;
        }
        cout << "\"" << input << "\"" << " is not a valid choice\n";
    }
    
}

// int main()
// {
//     int count = 0;
//     bool done = false;
//     char input;
//     while (!done)
//     {
//         cout << count << '\n';
//         cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
//         cin >> input;
//         if (input != 'y' && input != 'Y' & input != 'n' & input != 'N')
//         {
//             cout << "\"" << input << "\"" << " is not a valid choice\n";
//         }
//         else if  (input == 'n' || input == 'N')
//         {
//             done = true;
//         }
//         else 
//         {
//             count++;
//         }
//     }
// }
#include <iostream>

using std::cout;
using std::cin;

/*
 *  help_screen
 *      Display information about how the program works
 *      Accepts no parameters
 *      Return nothing
*/
void help_screen()
{
    cout << "Add:   Adds two numbers\n";
    cout << "       Example: a 2.5 8.0\n";
    cout << "Subtract:  Subtracts two numbers\n";
    cout << "       Example: s 10.5 8.0\n";
    cout << "Print:     Displays the result of the latest operation\n";
    cout << "       Example:p\n";
    cout << "Quit:      Exits the program\n";
    cout << "       Example: q\n";
}

/*
 * menu
 *      Display a menu
 *      Accepts no parameters
 *      Returns the character entered by the user
 * 
*/
char menu()
{
    char ch;
    cout << "=== A)dd S)ubtract P)rint H)elp Q)uit ===\n";
    cin >> ch;
    return ch;
}

int main()
{
    double num1;
    double num2;
    double result = 0.0;
    bool done = false;
    while (!done)
    {
        char ch = menu();
        switch (ch)
        {
        case 'a':
        case 'A':
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << result << '\n';
            break;
        case 's':
        case 'S':
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << result << '\n';
            break;
        case 'p':
        case 'P':
            cout << result << '\n';
            break;
        case 'h':
        case 'H':
            help_screen();
            break;
        case 'q':
        case 'Q':
            done = true;
            break;
        
        default:
        cout << "Wrong choice.\n";
            break;
        }
    }
}

// int main()
// {
//     double num1;
//     double num2;
//     bool done = false;
//     double result = 0.0;
//     do
//     {
//         char ch = menu();
//         switch (ch)
//         {
//         case 'a':
//         case 'A':
//             cin >> num1 >> num2;
//             result = num1 + num2;
//             cout << result << '\n';
//             break;
//         case 's':
//         case 'S':
//             cin >> num1 >> num2;
//             result = num1 - num2;
//             cout << result << '\n';
//             break;
//         case 'p':
//         case 'P':
//             cout << result << '\n';
//             break;
//         case 'h':
//         case 'H':
//             help_screen();
//             break;
//         case 'q':
//         case 'Q':
//             done = true;
//             break;
        
//         default:
//         cout << "Wrong choice.\n";
//             break;
//         }
//     } while (!done);
// }
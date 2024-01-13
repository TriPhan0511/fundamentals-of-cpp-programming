#include <iostream>

using std::cout;
using std::cin;

/**
 * help_screen
 *      Display information about how the program works.
 *      Accepts no parameters.
 *      Returns nothing.
*/
void help_screen()
{
    cout << "Add: Adds two numbers\n";
    cout << " Example: a 2.5 8.0\n";
    cout << "Subtract: Subtracts two numbers\n";
    cout << " Example: s 10.5 8.0\n";
    cout << "Print: Displays the result of the latest operation\n";
    cout << " Example: p\n";
    cout << "Help: Displays this help screen\n";
    cout << " Example: h\n";
    cout << "Quit: Exits the program\n";
    cout << " Example: q\n";
}

/**
 * menu
 *      Display a menu.
 *      Accepts no parameters.
 *      Returns the character entered by the user.
*/
char menu()
{
    cout << "=== A)dd S))ubtract P)rint H)elp Q)uit ===\n";
    char ch;
    cin >> ch;
    return ch;
}

/**
 * Global variables used by serveral functions
*/
double result = 0.0;
double arg1;
double arg2;

/**
 * get_input
 *      Assigns the globals arg1 and arg2 
 *      from user keyboard input.
*/
void get_input()
{
    cin >> arg1 >> arg2;
}

/**
 * report
 *      Reports the value of the global result
*/
void report()
{
    cout << result << '\n';
}

/**
 * add
 *      Assigns the sum of the globals arg1 and arg2
 *      to the global variable result.
*/
void add()
{
    result = arg1 + arg2;
}

/**
 * subtract
 *      Assigns the difference of the globals arg1 and arg2
 *      to the global variable result.
*/
void subtract()
{
    result = arg1 - arg2;
}

int main()
{
    bool done = false;
    while (!done)
    {
        switch (menu())
        {
        case 'a':
        case 'A':
            get_input();
            add();
            report();
            break;
        case 's':
        case 'S':
            get_input();
            subtract();
            report();
            break;
        case 'p':
        case 'P':
            report();
            break;
        case 'q':
        case 'Q':
            done = true;
            break;
        
        default:
            cout << "Wrong input. Try again\n";
            break;
        }
    }
    
}
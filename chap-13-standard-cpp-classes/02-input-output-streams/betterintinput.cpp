#include <iostream>
#include <limits>

using std::cout;
using std::cin;

int main()
{
    int x;
    // I hioo the user does the right thing!
    cout << "Please enter an integer: ";
    // Enter and remain in the loops as long as
    // the user provides bad input
    while (!(cin >> x))
    {
        // Report error and re-prompt
        cout << "Bad entry, please try again: ";
        // Clean up the input stream
        cin.clear(); // Clear the error state of the stream
        // Empty the keyboard buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "You enter " << x << '\n';
}
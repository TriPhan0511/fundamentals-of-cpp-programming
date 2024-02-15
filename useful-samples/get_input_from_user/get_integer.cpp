/*
The following program detects illegal input and continues to 
receive input until the user provides an acceptable value.
*/

/*
We learned in Section 6.1 that the expression
    std::cin >> x
has a Boolean value that we may use within a conditional or iterative statement.
If the user enters a value with a type compatible with the declared type of 
the variable, the expression evaluates to true; otherwise, it is interpreted 
as false. The negation
    !(std::cin >> x)
is true if the input is bad, so the only way to execute the body of the loop 
is provide illegal input. As long as the user provides bad input, 
the program’s execution stays inside the loop.
*/

/*
While determining whether of not a user’s entry is correct seems sufficient for 
the programmer to make corrective measures, it is not. Two additional steps 
are necessary:
    1.  The bad input characters the user provided cause the std::cin object to 
        enter an error state. The input stream object remains in an error state 
        until the programmer manually resets it. The call cin.clear(); resets 
        the stream object so it can process more input.
    2.  Whatever characters the user typed in that cannot be assigned to the 
        given variable remain in the keyboard input buffer. Clearing the 
        stream object does not remove the leftover keystrokes. Asking the user 
        to retry without clearing the bad characters entered from before results 
        in the same problem, the stream object re-enters the error state and 
        the bad characters remain in the keyboard buffer. The solution is to flush 
        from the keyboard buffer all of the characters that the user entered since 
        the last valid data entry. The statement
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        removes from the buffer all the characters, up to and including the 
        newline character ('\n'). The function call
            numeric_limits<streamsize>::max()
        returns the maximum number of characters that the buffer can hold, 
        so the ignore method reads and discards characters until it reads the 
        newline character ('\n') or reaches the end of the buffer, whichever comes first.
*/

#include <iostream>
#include <limits>
#include <string>

using std::cout;
using std::cin;
using std::string;

int get_int(string prompt = "Please enter an integer: ")
{
    int value;
    cout << prompt;
    while (!(cin >> value))
    {
        // Report error and re-prompt
        cout << "Bad entry! The value you entered is not an integer.\n"
             << "Please try again: ";
        // Clean up the input stream
        cin.clear(); // Clear the error state of the stream
        // Empty the keyboard buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}

int main()
{
    int value = get_int();
    cout << "You enter " << value << '\n';
}

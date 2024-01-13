#include <iostream>

using std::cout;
using std::cin;

/**
 * prompt
 *      Requests an integer from the user and
 *      keeps track of the cumulative number of entries.
 *      Returns the value entered by the user.
*/
int prompt() {
    int number;
    static int count = 1;
    cout << "Please enter integer #" << count << ": ";
    cin >> number;
    count++;
    return number;
}

int main() {
    int value1 = prompt();
    int value2 = prompt();
    cout << "Sum = " << value1 + value2;
}

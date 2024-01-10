// The program measures how long it takes
// a user to enter a charcter from keyboard

#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    char letter;
    cout << "Enter a character: ";
    clock_t seconds = clock(); // Record starting time
    cin >> letter;
    clock_t other = clock(); // Record ending time
    // Print the elapse time
    cout << static_cast<double> (other - seconds) / CLOCKS_PER_SEC << " seconds";
}
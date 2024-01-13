#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::cin;
using std::setw;
using std::setfill;

// Some conversion from seconds
const clock_t SEC_PER_MIN = 60;
const clock_t SEC_PER_HOUR = 60 * SEC_PER_MIN;
const clock_t SEC_PER_DAY = 24 * SEC_PER_HOUR;

/**
 * print_time
 *      Displays the time in hr:min:sec format.
 *      seconds is the number of seconds to display
*/
void print_time(clock_t seconds)
{
    clock_t hours = 0;
    clock_t minutes = 0;
    // Prepare to display time
    cout << '\n';
    cout << "     ";
    // Compute and display hours
    hours = seconds / SEC_PER_HOUR;
    cout << setw(2) << setfill('0') << hours << ":";
    // Remove the hours from seconds
    seconds = seconds % SEC_PER_HOUR;
    // Compute and display minutes
    minutes = seconds / SEC_PER_MIN;
    cout << setw(2) << setfill('0') << minutes << ":";
    // Remove the minutes from seconds
    seconds = seconds % SEC_PER_MIN;
    // Compute and display seconds
    cout << setw(2) << setfill('0') << seconds << '\n';
}

int main()
{
    clock_t start = clock(); // Record starting time
    clock_t elapsed = (clock() - start) / CLOCKS_PER_SEC; // Elapsed time in second
    clock_t previousElapsed = elapsed;
    // Counts up to 24 hours (1 day), then stops
    while (elapsed < SEC_PER_DAY)
    {
        // Update the display only every second
        if (elapsed - previousElapsed >= 1)
        {
            // Remember when we last updated the display
            previousElapsed = elapsed;
            print_time(elapsed);
        }
        // Update elapsed time
        elapsed = (clock() - start)/CLOCKS_PER_SEC;
    }
    
}
#include <iostream>
#include "stopwatch.h"

using std::cout;

int main()
{
    Stopwatch timer; // Declare a stopwatch object
    timer.start(); // Start timing
    // Do something here that you wish to time
    int counter = 0;
    for (int i = 0; i < 1000000000; i++) { counter++; }
    timer.stop(); // Stop the clock

    Stopwatch timer2;
    timer2.start();
    int counter2 = 0;
    while (counter2 < 1000000000)
    {
        counter2++;
    }
    timer2.stop();
    
    // Print results
    cout << timer.elapsed() << " seconds\n";
    cout << timer2.elapsed() << " seconds\n";
}
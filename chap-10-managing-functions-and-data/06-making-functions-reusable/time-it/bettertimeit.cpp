#include <iostream>
#include "timermodule.h"// Our timer module

using std::cout;
using std::cin;

int main()
{
    char letter;
    cout << "Enter a character: ";
    start_timer(); // Start timing
    cin >> letter;
    stop_timer(); // Stop timing
    cout << elapsed_time() << " seconds" << '\n';
}

// int main()
// {
//     clock_t start_time = clock();
//     for (int i = 0; i < 1000; i++)
//     {
//         cout << i << " ";
//     }
//     clock_t end_time = clock();
//     double elapsed_time = static_cast<double>(end_time - start_time)/CLOCKS_PER_SEC;
//     cout << "\nElapsed time: " << elapsed_time;

// }
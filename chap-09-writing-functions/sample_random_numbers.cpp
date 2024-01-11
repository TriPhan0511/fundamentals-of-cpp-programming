// C++ programmer can use two standard C functions for generating
// pseudorandom numbers: srand and rand (#include <cstdlib>):
//      void srand(unsigned)
//      int rand()

// srand established the first value in the sequence of 
// the pseudorandom integer values.
// Each call to rand returns the next value in the sequence \
// of pseudorandom values.

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

// Sample 1:
// Show a sequence of 100 pseudorandom numbers.
// If you run the program again, the same sequence 
// is displayed because the same seed value, 23, is used.
// In order to allow each program run to display different
// sequences, the seed value must be different for each run.
// (Sample 2)

// int main()
// {
//     // Set the random seed value
//     srand(23); 
//     // srand(static_cast<unsigned>(time(0))); 
//     for (int i = 0; i < 100; i++)
//     {
//         cout << rand() << " ";
//     }
// }
// ----------------------------------------------------------

// Sample 2:
// The program display different sequences

// In order to allow each program run to display different
// sequences, the seed value must be different for each run.

// How can we establish a different seed value for each run?
// The best way to make up a "random" seed at run time is 
// to use the time function (#include <ctime>) which 
// is found in the ctime library.
// The call time(0) returns the number of seconds since
// midnight January 1, 1970.

// This value obviously differs between program runs,
// so each execution will use a different value, and 
// the generated pseudorandom number sequences 
// will be different.

// Notice that the numbers returned by the rand function
// can be rather large. The maximum value return by the
// rand function is 32,767 (RAND_MAX constant).
// Ordinarily we need values in more limited range, 
// like 1..100. (Sample 3)

// int main()
// {
//     // Set the random seed value
//     srand(static_cast<unsigned>(time(0))); 
//     for (int i = 0; i < 100; i++)
//     {
//         cout << rand() << " ";
//     }
// }

// ----------------------------------------------------------

// Sample 3:
// Ordinarily we need values in more limited range, 
// like 1..100. Simple arithmetic with the modulus operator
// can produce the result we need.
// If n is any nonnegative integer and 
// m is any positive integer, the expression:
//      n % m
// produce a value in the range 0..m - 1.

// This means the statement:
//      int r = rand() % 100;
// can assign only values in the rang 0..99 to r.

// If we really want value in the range 1..100, what 
// can we do? We simply need only add one the result:
//      int r = rand() % 100 + 1;
// This statement produces pseudorandom numbers 
// in the range 1..100.

// And if we need a pseudorandom number in the range 1..6,
// we use the following statement:
//      int r = rand() % 6 + 1;

// die.cpp
// int main()
// {
//     srand(static_cast<unsigned>(time(0)));
//     for (int i = 0; i < 3; i++)
//     {
//         int r = rand() % 6 + 1;
//     cout << "+-------+\n";
//         switch (r)
//         {
//             case 1:
//                 cout << "|       |\n";
//                 cout << "|   *   |\n";
//                 cout << "|       |\n";
//                 break;
//             case 2:
//                 cout << "| *     |\n";
//                 cout << "|       |\n";
//                 cout << "|      *|\n";
//                 break;
//             case 3:
//                 cout << "|      *|\n";
//                 cout << "|   *   |\n";
//                 cout << "| *     |\n";
//                 break;            
//             case 4:
//                 cout << "| *    *|\n";
//                 cout << "|       |\n";
//                 cout << "| *    *|\n";
//                 break;
//             case 5:
//                 cout << "| *    *|\n";
//                 cout << "|   *   |\n";
//                 cout << "| *    *|\n";
//                 break;
//             case 6:
//                 cout << "| * * * |\n";
//                 cout << "|       |\n";
//                 cout << "| * * * |\n";
//                 break;
            
//             default:
//                 cout << " ***  Error: illegal die value ***\n";
//                 break;
//         }
//         cout << "+-------+\n";
//     }
    
// }

// ----------------------------------------------------------

// Sample 4
// betterdie.cpp
void initialize_seed()
{
    srand(static_cast<unsigned>(time(0)));
}

int roll()
{
    // Return a pseudorandom number in the range 1..6
    return rand() % 6 + 1; 
}

void show_die(int spots)
{
    cout <<"+-------+\n";
    switch (spots)
    {
    case 1:
        cout << "|       |\n";
        cout << "|   *   |\n";
        cout << "|       |\n";
        break;
    case 2:
        cout << "| *     |\n";
        cout << "|       |\n";
        cout << "|     * |\n";
        break;
    case 3:
        cout << "|     * |\n";
        cout << "|   *   |\n";
        cout << "| *     |\n";
        break;
    case 4:
        cout << "| *   * |\n";
        cout << "|       |\n";
        cout << "| *   * |\n";        
        break;
    case 5:
        cout << "| *   * |\n";
        cout << "|   *   |\n";
        cout << "| *   * |\n";        
        break;
    case 6:
        cout << "| * * * |\n";
        cout << "|       |\n";
        cout << "| * * * |\n";
        break;
    
    default:
    cout << "Error: illegal die value\n";
        break;
    }
    cout <<"+-------+\n";
}

int main()
{
    int num;
    cout << "How many times do you want to roll die? ";
    cin >> num;
    initialize_seed();
    for (int i = 0; i < num; i++)
    {
        show_die(roll());
    }
    
}
// Ordinarily we need values in a more limited range, like 1...100. Simple arithmetic with the modulus
// operator can produce the result we need. If n is any nonnegative integer and m is any positive integer, the
// expression:  
//     n % m
// produces a value in the range 0. . .m−1.

// This means the statement:
//     int r = rand() % 100;
// can assign only values in the range 0...99 to r. If we really want values in the range 1...100, what can we
// do? We simply need only add one to the result:
//     int r = rand() % 100 + 1;
// This statement produces pseudorandom numbers in the range 1...100.

// The following code simulates the rolling of a die.

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

int main()
{
    // Set the random seed value
    srand(static_cast<unsigned>(time(0)));
    // Roll the die three times
    for (int i = 0; i < 3; i++)
    {
        // Generate random numner in the range 1..6
        int r = rand() % 6 + 1;
        // Show the die
        cout << "+-------+\n";
        switch (r)
        {
            case 1:
                cout << "|       |\n";
                cout << "|   *   |\n";
                cout << "|       |\n";
                break;
            case 2:
                cout << "| *     |\n";
                cout << "|       |\n";
                cout << "|      *|\n";
                break;
            case 3:
                cout << "|      *|\n";
                cout << "|   *   |\n";
                cout << "| *     |\n";
                break;            
            case 4:
                cout << "| *    *|\n";
                cout << "|       |\n";
                cout << "| *    *|\n";
                break;
            case 5:
                cout << "| *    *|\n";
                cout << "|   *   |\n";
                cout << "| *    *|\n";
                break;
            case 6:
                cout << "| * * * |\n";
                cout << "|       |\n";
                cout << "| * * * |\n";
                break;
            
            default:
                cout << " ***  Error: illegal die value ***\n";
                break;
        }
        cout << "+-------+\n";
    }
}

// int main()
// {
//     srand(static_cast<unsigned> (time(0)));
//     for (int i = 0; i < 100; i++)
//     {
//         // // Produces pseudorandom numbers in the range 0..99
//         // int r = rand() % 100; 
//         // Produces pseudorandom numbers in the range 1..100
//         int r = rand() % 100 + 1; 
//         // int r = rand();
//         cout << r << " ";
//     }
    
// }
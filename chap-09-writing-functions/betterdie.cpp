#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

// Initializes the randomness of the die
void initialize_die()
{
    // Set the random seed value
    srand(static_cast<unsigned>(time(0)));
}

// Draw a picture of a die with number of spots
// indicated spots is the number of spots on the top face
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
    cout <<"+-------+\n";
}

// Returns a pseudorandom number in the range 1..6
int roll()
{
    return rand() % 6 + 1;
}

// Simulate the roll of a die three times
int main()
{
    int num;
    cout << "How many times do you want to roll die? ";
    cin >> num;
    // Initialize the die
    initialize_die();
    // Roll the die three times
    for (int i = 0; i < num; i++)
    {
        show_die(roll());
    }
}

// // Simulate the roll of a die three times
// int main()
// {
//     // Initialize the die
//     initialize_die();
//     // Roll the die three times
//     for (int i = 0; i < 3; i++)
//     {
//         show_die(roll());
//     }
// }
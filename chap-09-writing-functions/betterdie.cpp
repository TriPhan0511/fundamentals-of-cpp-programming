#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

void roll_die()
{
    srand(static_cast<unsigned>(time(0)));
    int r = rand() % 6 + 1; // Generate random number in the range 1..6
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
            cout << " *** Error: illegal die value ***\n";
            break;
    }
    cout << "+-------+\n";
}

int main()
{
    int num;
    cout << "How many times do you want roll die? ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        roll_die();
    }
    
}
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    const int SIZE = 3;
    vector<int> numbers{5, 5, 5};

    // Print the contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers.at(i) << " ";
    }

    // Change all 5s in the vector numbers to 8s
    for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
    {
        numbers.at(i) = 8;
    }

    // Reprint the contents of the vector
    for (int i = 0; i < 3; i++)
    {
        cout << numbers.at(i) << " ";
    }
}


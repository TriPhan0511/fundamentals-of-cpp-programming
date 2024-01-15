#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    vector<double> numbers(10, 3);
    cout << "Enter an index: ";
    int x;
    cin >> x;
    if (x >= 0 && x < 10)
    {
        cout << numbers[x];
    }
    else
    {
        cout << "Index provided is out of range.";
    }
}

// int main()
// {
//     const int SIZE = 3;
//     vector<int> numbers{5, 5, 5};
//     // Print the content of the vector
//     cout << "numbers contain ";
//     for (int i = 0; i < SIZE; i++)
//     {
//         cout << numbers[i] << " ";
//     }
//     cout << '\n';
//     // Change all the 5s in vector numbers to 8s
//     for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
//     {
//         numbers[i] = 8;
//     }
//     // Reprint the content of the vector
//     cout << "numbers contain ";
//     for (int i = 0; i < SIZE; i++)
//     {
//         cout << numbers[i] << " ";
//     }
//     cout << '\n';
// }
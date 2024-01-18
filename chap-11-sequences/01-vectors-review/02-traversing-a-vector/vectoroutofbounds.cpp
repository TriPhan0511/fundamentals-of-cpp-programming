// The program illustrate a problem:
// Misuse of a vector index can lead to run-time errors.

// Note:
// The file 03-vector-methods/vectoroutofbounds2.cpp 
// introduces the at method that is useful for 
// defending against vector out-of-bounds accesses.

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    const int SIZE = 3;
    vector<int> v{5, 5, 5};

    // Print the contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';

    // Change all the 5s in vector v to 8s
    for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
    {
        v[i] = 8;
    }
    
    // Reprint the contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
}

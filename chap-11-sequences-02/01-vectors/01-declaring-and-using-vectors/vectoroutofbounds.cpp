#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    cout << '\n';
    
    const int SIZE = 3;
    vector<int> v(SIZE, 5);
    // Print contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
    // Change all the 5s in the vector v to 8s
    // NOTE: Attempt to access elements outside the bounds 
    // of a vector produces what is known as undefined behavior.
    for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
    {
        v[i] = 8;
    }
    // Re-print the contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
}
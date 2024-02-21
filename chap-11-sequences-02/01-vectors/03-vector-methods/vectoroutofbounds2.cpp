// NOTE: The method `v.at(x)` will check to ensure that the index
// is within the bounds of the vector. If x is outside of the
// acceptable range of indices, the method is guarantee to produce
// a run-time error.

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    cout << '\n';

    const int SIZE = 3;
    vector<int> v(SIZE, 5);

    // Print the contents of the vector 
    for (int i = 0; i < SIZE; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << '\n';

    // Change all the 5s in the vector v to 8s
    for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
    {
        v.at(i) = 8;
    }
    
    // Reprint the contents of the vector
    for (int i = 0; i < SIZE; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << '\n';
}

/*
NOTE:
When compiled and executed the above program is guaranteed to produce a run-time error.
Run-time errors are bad, but undefined behavior is worse because it can manifest itself as unpredictable
run-time errors and programs that behave differently across multiple platforms.
*/
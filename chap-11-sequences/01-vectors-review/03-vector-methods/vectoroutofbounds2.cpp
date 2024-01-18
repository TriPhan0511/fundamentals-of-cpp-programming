
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

void print(const vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

int main()
{
    const int SIZE = 3;
    vector<int> v{5, 5, 5};

    // Print the contents of the vector
    cout << "v contains ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';

    // Change all the 5s in vector v to 8s
    for (int i = 0; i <= SIZE; i++) // Bug: <= should be <
    {
        v.at(i) = 8;
    }
    
    // Reprint the contents of the vector
    cout << "v contains ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
}
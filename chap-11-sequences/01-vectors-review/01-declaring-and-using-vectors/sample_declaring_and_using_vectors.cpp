#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Print vector
// Because vector can be large so 
// we should pass by reference.
// And we do not change the content of the vector so 
// we use the "const" keyword.
void print(const vector<int>& v)
{
    // Use foreach (also called forrange) loop
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';

    // Use normal for loop
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';
}

// Populate vector
// We will change the content of the vector,
// so we use non-const.
void populate(vector<int>& v)
{
    int size = v.size();
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
}

int main()
{
    // Declare a vector
    // An empty vector
    // vector<int> v;

    // A vector hold 10 integers. 
    // All 10 elements are zero by default
    // vector<int> v(10);    

    // A vector hold 10 integers. 
    // All having the value 8.
    // vector<int> v(10, 8);

    // Declare a vector and specify each 
    // and every element separately (only in C++11 and up)
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v{1, 2, 3, 4, 5};

    // Access vector's elements
    // vector<int> v(3);
    // v[0] = 5;
    // v[1] = -3;
    // v[2] = 12;
    // cout << "First element: " << v[0] << '\n';

    // Populate vector
    vector<int> v(5);
    populate(v);


    // Print the vector
    print(v);
}
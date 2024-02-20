#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Populate vector
void populate_vector(vector<int>& v)
{
    int size = v.size();
    cout << "Please enter " << size << " numbers: ";
    for (auto& e : v)
    {
        cin >> e;
    }
}

// Print vector
void print_vector(const vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << '\n';
}

int main()
{
    // Create a vector and populate it
    vector<int> v(5);
    populate_vector(v);

    // Print the vector's content
    print_vector(v);
}

// int main()
// {
//     cout << '\n';

//     // Declare a vector of 5 numbers
//     vector<int> v(5);

//     // Allow the user to populate the vecotr
//     // NOTE: If the element variable within the range-based for loop is declared
//     // to be a reference, the code within the body of the loop may modify the 
//     // vector's elements.
//     cout << "Please enter 5 numbers: ";
//     for (int& e : v)
//     {
//         cin >> e;
//     }
    
//     // Print the vector's content
//     for (int e : v)
//     {
//         cout << e << " ";
//     }
// }
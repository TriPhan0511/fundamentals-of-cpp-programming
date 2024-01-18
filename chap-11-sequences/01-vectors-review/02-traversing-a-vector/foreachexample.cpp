// The program illustrate a range-based loop (also called
// foreach loop).

// Note: (in the first range-based loop)
// If the element variable within the range-based for loop 
// is declared to be a reference, the code within the body 
// of the loop may modify the vector's elements.


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    // Declare a vector of five numbers
    vector<double> v(5);

    // Allow the user to populate the vector
    cout << "Enter 5 numbers: ";
    for (auto& elem : v)
    // for (double& elem : v)
    {
        cin >> elem;
    }
    
    // Print the vector's contents
    for (double elem : v)
    {
        cout << elem << " ";
    }
    cout << '\n';
}
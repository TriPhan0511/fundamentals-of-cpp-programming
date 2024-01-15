// If the element variable within the range-based for loop
// is declared to be a reference, the code within the body 
// of the loop may modify the vector's elements.

// The program allows a user to populate a vector 
// with 5 numbers and then the vector's contents.

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    // Declare a vector of ten numbers
    vector<double> numbers(5);
    // Allow the user to populate the vector
    cout << "Please enter 5 numbers: ";
    for (double& num : numbers)
    {
        cin >> num;
    }
    // Print the vector's content
    for (double num : numbers)
    {
        cout << num << " ";
    }
}
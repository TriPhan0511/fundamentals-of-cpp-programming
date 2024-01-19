// The program uses a functio named make_random that 
// fills a vector with pseudorandom integer values.

#include <iostream>
#include <vector>
#include <cstdlib> // For srand and rand
#include <ctime> // For time

using std::cout;
using std::cin;
using std::vector;


/**
 * print(v)
 *  Prints the contents of an int vector
 *  v is the vector to print; v is not modified
*/
void print(const vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

/**
 * make_random(v, maximum_size)
 *  Fills an int vector with pseudorandom numbers
 *  v is the vector to fill; v id modified
 *  maximum_size is the maximum size of the vector
*/
void make_random(vector<int>& v, int maximum_size)
{
    // Empty the contents of vector
    v.clear(); 
    // Generate a random number between 1 and maximum_size
    // and use this value for vector's size.
    int n = rand() % maximum_size + 1; 
    // Populate with random values
    for (int i = 0; i < n; i++)
    {
        v.push_back(rand());
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0))); // Set pseudorandom number generator seed
    vector<int> list;
    // Print the contents of the vector
    cout << "Vector initialy: ";
    print(list);
    make_random(list, 20);
    cout << "1st random vector: ";
    print(list);
    make_random(list, 5);
    cout << "2nd random vector: ";
    print(list);
    make_random(list, 10);
    cout << "3rd random vector: ";
    print(list);
}
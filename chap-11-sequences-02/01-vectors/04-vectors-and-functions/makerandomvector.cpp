#include <iostream>
#include <vector>
#include <cstdlib> // For rand()

using std::cout;
using std::vector;

void print_vector(const vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << '\n';
}

/*
NOTE:
If a function’s purpose is to modify a vector, the reference should not be const.
*/
void make_random(vector<int>&v , int max_size)
{
    v.clear(); // Clear the contents of the vector
    int n = rand() % max_size + 1; // Random size for v
    for (int i = 0; i < n; i++)
    {
        v.push_back(rand()); // Populate with random values
    }
}

int main()
{
    cout << '\n';

    srand(2); // Set pseudorandom number generator seed
    vector<int> v;
    cout << "Vector initially: ";
    print_vector(v);
    make_random(v, 20);
    cout << "1st random vector: ";
    print_vector(v);
    make_random(v, 5);
    cout << "2nd random vector: ";
    print_vector(v);
    make_random(v, 10);
    cout << "3rd random vector: ";
    print_vector(v);
}
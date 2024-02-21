#include <iostream>
#include <vector>
#include <random> // for std::random_device, std::mt19937, std::uniform_int_distribution<int>

using std::cout;
using std::vector;

// Generate a random integer
int generate_random_integer(int lowerBound, int upperBound)
{
    // Create a random number generator engine
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    // Create a distribution for the random integer within the specified range
    std::uniform_int_distribution<int> distribution(lowerBound, upperBound);
    // Generate a random integer and return
    return distribution(gen);
}

// Overload the operator<< function
std::ostream& operator<<(std::ostream& os, const vector<int>& v)
{
    for (auto e : v)
    {
        os << e << " ";
    }
    os << '\n';
    return os;
}

// Create a vector containing random integers
vector<int> create_a_random_vector(int max_size)
{
    int lower = 1;
    int upper = 100;
    vector<int> v;
    int n = generate_random_integer(1, max_size); // Random size for v
    for (int i = 0; i < n; i++)
    {
        v.push_back(generate_random_integer(lower, upper));
    }
    return v;
}

int main()
{
    cout << '\n';

    cout << create_a_random_vector(20);
    cout << create_a_random_vector(5);
    cout << create_a_random_vector(10);
}


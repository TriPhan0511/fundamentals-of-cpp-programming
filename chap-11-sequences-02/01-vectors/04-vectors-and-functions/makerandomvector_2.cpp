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

void print_vector(const vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << '\n';
}

void make_random(vector<int>& v, int max_size)
{
    int lowerBound = 1;
    int upperBound = 100;
    v.clear();
    int n = generate_random_integer(1, max_size); // Random size for v
    for (int i = 0; i < n; i++)
    {
        v.push_back(generate_random_integer(lowerBound, upperBound));
    }
}

int main()
{
    cout << '\n';

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
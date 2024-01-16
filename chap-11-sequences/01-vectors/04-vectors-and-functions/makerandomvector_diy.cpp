#include <iostream>
#include <vector>
#include <random>

using std::cout;
using std::cin;
using std::vector;

// Make a random integer (ChatGPT 3.5)
int generate_random_integer(int lowerBound, int upperBound) {
    // Create a random number generator engine
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    // Create a distribution for the random integer within the specified range
    std::uniform_int_distribution<int> distribution(lowerBound, upperBound);
    // Generate a random integer
    int randomNumber = distribution(gen);
    return randomNumber;
}

// Print content of a vector
void print_vector(const vector<int>& v)
{
    for (auto item : v)
    {
        cout << item << " ";
    }
    cout << '\n';
}

// Make a random vector
void fill_vector(vector<int>& v, int size)
{
    if (size < 1)
    {
        size = 1;
    }
    v.clear();
    for (int i = 0; i < size; i++)
    {
        v.push_back(generate_random_integer(1, 100));
    }
}

vector<int> make_vector(int size)
{
    if (size < 1)
    {
        size = 1;
    }
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        v[i] = generate_random_integer(1, 100);
    }
    return v;
}

int main()
{
    // vector<int> numbers;
    // fill_vector(numbers, 10);
    // print_vector(numbers);
    // fill_vector(numbers, 15);
    // print_vector(numbers);
    // fill_vector(numbers, -1);
    // print_vector(numbers);

    cout << "Enter size of vector: ";
    int size;
    cin >> size;
    vector<int> numbers = make_vector(size);
    print_vector(numbers);
}

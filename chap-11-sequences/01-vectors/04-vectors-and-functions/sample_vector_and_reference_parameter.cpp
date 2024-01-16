// Due to the fact that vectors may contain a large of elements,
// you usually should pass vectors to functions as 
// reference parameters rather than value parameters:

//      1. If the function is meant to modify the contents of 
//      the vector, declare the vector as a non-const reference
//      (that is, omit the const keyword when declaring the 
//      parameter)

//      2. If the function is not meant to modify the content of
//      the vector, declare the vector as a const reference.

// It generally is safe to return a vector by value from a 
// function if that vector is declared local to the function.
// Modern C++ compilers generate optimzed code that avoid the 
// overhead of copying the result back to the caller.

#include <iostream>
#include <vector>
#include <random>

using std::cout;
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

// The print_vector does not modify the content of the vector,
// so we declare the vector as a const reference.
void print_vector(const vector<int>& v)
{
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << '\n';
}

// The fill_vector modify the content of the vector,
// so we declare the vector as a non-const reference.
void fill_vector(vector<int>& v, int size, int num)
{
    v.clear();
    for (int i = 0; i < size; i++)
    {
        v.push_back(num);
    }
}

// The generate_numbers return a vector.
vector<int> generate_numbers(int size, int low, int high)
{
    vector<int> result;
    for (int i = 0; i < size; i++)
    {
        result.push_back(generate_random_integer(low, high))        ;
    }
    return result;
}

int main()
{
    vector<int> numbers{1, 2, 3, 4, 5};
    print_vector(numbers); // -> 1 2 3 4 5
    
    vector<int> numbers_2;
    fill_vector(numbers_2, 5, 0);
    print_vector(numbers_2); // -> 0 0 0 0 0

    int size = 10;
    int low = 1;
    int high = 100;
    vector<int> random_numbers = generate_numbers(size, low, high);
    print_vector(random_numbers); // -> 86 83 9 64 95 44 78 25 35 4
}
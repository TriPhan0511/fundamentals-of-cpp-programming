#include <iostream>
#include <random>

using std::cout;

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

int main()
{
    int lowerBound = 1;
    int upperBound = 100;
    int randomNumber = generate_random_integer(lowerBound, upperBound);
    cout << "A random integer between " 
        << lowerBound << " and " << upperBound 
        << ": " << randomNumber;
}
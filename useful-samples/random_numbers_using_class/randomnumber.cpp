#include "randomnumber.h"

// Define stactic variables
// Source of randomness to initialize the generator
std::random_device RandomNumber::rd;
// A Mersenne Twister random number generator with a seed
// obtained from a random_device object.
std::mt19937 RandomNumber::gen(rd());

// Create a pseudorandom number generator that produces 
// values in the range low...high
RandomNumber::RandomNumber(int low, int high):
    dist(low, high), MIN(low), MAX(high) {}

// Return a pseudorandom number in the range MIN...MAX
int RandomNumber::operator()()
{
    return dist(gen);
}

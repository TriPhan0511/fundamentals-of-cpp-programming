// Note:
// Remember that if you need random numbers in multiple places in your program, 
// it's generally a good practice to call srand only once in your program, 
// typically at the beginning, to avoid getting the same sequence of random numbers.

#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For time

int generateRandomNumber(int lowerBound, int upperBound)
{
    // // Seed the random number generator with the current time
    // std::srand(static_cast<unsigned int>(std::time(0)));
    // Generate a random number within the specified range
    int randomNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    return randomNumber;
}

int main()
{
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(0)));
    // Define the range for the random number
    int lowerBound = 1;
    int upperBound = 100;
    // Generate and display a random number within the specified range
    int randomNum = generateRandomNumber(lowerBound, upperBound);
    std::cout << "Random Number: " << randomNum << std::endl;
    return 0;
}


// C++ programmers can use two standard C functions for generating pseudorandom numbers: 
// srand and rand:
// void srand(unsigned)
// int rand()

// Example:
// srand(static_cast<unsigned> (time(0))); // Set pseudorandom number generator seed
// // Produces pseudorandom numbers in the range 0..99
// int r = rand() % 100; 
// // Produces pseudorandom numbers in the range 1..100
// int r = rand() % 100 + 1; 

// Note:
// Remember that if you need random numbers in multiple places in your program, 
// it's generally a good practice to call srand only once in your program, 
// typically at the beginning, to avoid getting the same sequence of random numbers.

#include <iostream>
#include <cstdlib> // For srand(unsigned) and rand()
#include <ctime> // For time(0)

// Generate a random number in range 1..max
int generate_random_integer(int max)
{
    return rand() % max + 1;
}

int main()
{
    // Set pseudorandom number generator seed
    srand(static_cast<unsigned>(time(0))); 
    // Generate a random number in range 1..6
    std::cout << generate_random_integer(6);
}

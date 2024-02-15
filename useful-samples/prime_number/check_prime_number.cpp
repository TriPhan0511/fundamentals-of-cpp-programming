#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

/**
 * is_prime(number)
 *  Determines the primality of a given value
 *  number an integer to test for primality
 *  Returns true if n is prime; otherwise, returns false
*/
bool is_prime(int number)
{
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    // Check divisibility from 2 to the square root of the number
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false; // The number is divisible, so it's not prime
        }
    }
    return true; // If no divisors were found, the number is prime
}

int main()
{
    // Print the prime numbers in the range 0..100
    for (int i = 0; i < 100; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
        
    }
}



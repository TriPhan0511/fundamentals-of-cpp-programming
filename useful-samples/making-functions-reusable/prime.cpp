#include <cmath> // Need for sqrt
#include "prime.h" // is_prime prototype

/**
 * is_prime(n)
 *      Determines the primality of a given value
 *      n an integer to test for primality
 *      Returns true if n is prime; otherwise, return false.
*/
bool is_prime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    // Check divisibility from 2 to the square root of the number
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; // The number is divisible, so it's not prime
        }
    }

    return true; // If no divisors were found, the number is prime
}


// bool is_prime(int n)
// {
//     bool result = true; // Provisionally, n is prime
//     double r = n;
//     double root = sqrt(r);
//     // Try all possible factors from 2 to 
//     // the square root of n
//     for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
//     {
//         result = (n % trial_factor != 0);
//     }
//     return result;    
// }



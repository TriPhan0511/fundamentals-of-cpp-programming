#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

// ChatGPT 3.5
bool is_prime(int number) {
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

int main() {
    // Print the prime numbers in the range 0..100
    for (int i = 0; i < 100; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
        
    }
}

// -------------------------------------------------------------
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (is_prime(num)) {
//         cout << num << " is a prime number." << '\n';
//     } else {
//         cout << num << " is not a prime number." << '\n';
//     }
// }

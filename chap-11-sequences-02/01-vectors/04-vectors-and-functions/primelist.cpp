#include <iostream>
#include <vector>
#include <cmath> // For sqrt()

using std::cout;
using std::cin;
using std::vector;

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

// Overload the operator<< function
std::ostream& operator<<(std::ostream& os, const vector<int> v)
{
    for (auto e : v)
    {
        os << e << " ";
    }
    os << '\n';
    return os;
}

vector<int> primes(int begin, int end)
{
    vector<int> v;
    for (int i = begin; i <= end; i++)
    {
        if (is_prime(i))
        {
            v.push_back(i);
        }
    }
    return v;    
}

int main()
{
    cout << '\n';

    int low;
    int high;
    cout << "Please enter lowest and highest values in the range: ";
    cin >> low >> high;
    cout << primes(low, high);
}


#include <iostream>
#include <vector>
#include <cmath>


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

/**
 * print(v)
 *  Prints the contents of an int vector
 *  v is the vector to print; v is not modified
*/
void print(const vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

/**
 * primes(begin, end)
 *  Returns a vector containing the prime
 *  numbers in the range begin...end.
 *  begin is the first number in the range
 *  end is the last number in the range
*/
vector<int> primes(int begin, int end)
{
    vector<int> result;
    for (int i = begin; i <= end; i++)
    {
        if (is_prime(i))
        {
            result.push_back(i);
        }
    }
    return result;    
}

int main() 
{
    int low;
    int high;
    cout << "Please enter lowest and highest values in the range: ";
    cin >> low >> high;
    print(primes(low, high));
}
#include <iostream>
#include <cmath>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

/*
* is_prime(number)
*   Determines the primality of a given value
*   number an integer to test for primality
*   Returns true if n is prime; otherwise, returns false
*/
bool is_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;    
}

/*
* print_vector(numbers)
*   Prints the contents of an int vector
*   numbers is the vector to print; numbers is not modified
*/
void print_vector(const vector<int>& numbers)
{
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << '\n';
}

/*
* primes(low, high)
*   Returns a vector containing the prime
*   numbers in the range low...high.
*   low is the first number in the range
*   high is the last number in the range
*/
vector<int> get_primes(int low, int high)
{
    vector<int> result;
    for (int i = low; i <= high; i++)
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
    vector<int> primes = get_primes(low, high);
    print_vector(primes);
}
// Display the prime numbers between 2 and 500,00 and
// time how long it takes

#include <iostream>

using std::cout;
using std::cin;

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;    
}


int main()
{
    int max_value;
    cout << "Display primes up to what values? ";
    cin >> max_value;
    for (int i = 2; i <= max_value; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
        
    }
}

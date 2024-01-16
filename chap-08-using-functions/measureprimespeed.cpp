// Display the prime numbers between 2 and 500,00 and
// time how long it takes

#include <iostream>
#include <ctime>

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
    clock_t start_time = clock(); // Record starting time
    for (int i = 2; i <= 500000; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
    clock_t end_time = clock(); // Record ending time
    // Print the elapse time
    cout << "\nElapsed time:" << static_cast<double> (end_time - start_time) / CLOCKS_PER_SEC << " seconds.";
}


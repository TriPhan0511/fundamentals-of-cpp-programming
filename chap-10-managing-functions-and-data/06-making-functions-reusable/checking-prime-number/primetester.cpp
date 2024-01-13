#include <iostream>
#include "prime.h"

using std::cout;
using std::cin;

// int main()
// {
//     cout << "hello";
// }

int main()
{
    int max_value;
    cout << "Display primes up to what value? ";
    cin >> max_value;
    for (int i = 2; i <= max_value; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
        
    }
    
}
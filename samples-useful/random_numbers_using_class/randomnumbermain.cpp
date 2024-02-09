#include <iostream>
#include "randomnumber.h"

using std::cout;

int main()
{
    int low = 1;
    int high = 100;
    RandomNumber rand(low, high);
    
    cout << "Minimum value: " << rand.MIN << '\n';
    cout << "Maximum value: " << rand.MAX << '\n';

    for (int i = 0; i < 10; i++)
    {
        cout << rand() << '\n';
    }
}
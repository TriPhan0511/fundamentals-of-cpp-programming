#include <iostream>

using std::cout;
using std::cin;

/**
 * count
 *      Keeps track of a count.
 *      Returns the current count.
*/
int count()
{
    // cnt's value is retained between calls  
    // because it is declared static.
    static int cnt = 0;
    // Increment and return current count
    cnt++;
    return cnt; 

    // // Increment and return current count
    // return ++cnt; 
}

int main()
{
    // Count to ten
    for (int i = 0; i < 10; i++)
    {
        cout << count() << " ";
    }
}
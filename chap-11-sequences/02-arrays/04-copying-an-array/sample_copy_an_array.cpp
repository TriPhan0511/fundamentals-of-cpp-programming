#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    // // Declare two arrays
    // int a[10];
    // int b[10];
    // // Populate array a
    // for (int i = 0; i < 10; i++)
    // {
    //     a[i] = i;
    // }
    // // Make a copy of array a?
    // // b = a; //  error: invalid array assignment
    // --------------------------------------------------

    // // Declare an arrays
    // int a[10];
    // // Declare a pointer
    // int *b;
    // // Populate array a
    // for (int i = 0; i < 10; i++)
    // {
    //     a[i] = i;
    // }
    // // alias, no copy
    // b = a; 

    // cout << a[1] << '\n'; // 1
    // cout << b[1] << '\n'; // 1

    // // Change an element using the pointer
    // b[1] = 300;

    // cout << a[1] << '\n'; // 300
    // cout << b[1] << '\n'; // 300
    // --------------------------------------------------

    // Declare two arrays, one dynamic
    int a[10];
    int *b;
    // Populate array a
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    // Really make a copy of array a
    b = new int[10]; // Allocate b
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    

    cout << a[1] << '\n'; // 1
    cout << b[1] << '\n'; // 1

    // Change an element of one array will not affect the other.
    a[1] = 300;

    cout << a[1] << '\n'; // 300
    cout << b[1] << '\n'; // 1

   delete [] b; // Free upb's space
}
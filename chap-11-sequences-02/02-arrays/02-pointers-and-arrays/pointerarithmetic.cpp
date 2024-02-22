/*
Since the memory devoted to an array is a continuous, contiguous block of memory addresses, 
pointer arithmetic simply redirects a pointer from one element in an array to another element 
in that array. 
The following program provides some more examples of pointer arithmetic in action.
*/

#include <iostream>

using std::cout;

int main()
{
    cout << '\n';

    int a[] = {10, 20, 30, 40, 50};
    int *p = a; // p points to the first element
    cout << *p << '\n'; // Prints 10, does not change p
    cout << p[0] << '\n'; // Prints 10, does not change p
    cout << p[1] << '\n'; // Prints 20, does not change p
    cout << *p << '\n'; // Prints 10, does not change p
    p++; // Advances p to the next element
    cout << *p << '\n'; // Prints 20, does not change p
    p += 2; // Advances p two places
    cout << *p << '\n'; // Prints 40, does not change p
    cout << p[0] << '\n'; // Prints 40, does not change p
    cout << p[1] << '\n'; // Prints 50, does not change p
    p--; // Moves p back one place
    cout << *p << '\n'; // Prints 30, does not change p

    // ->
    // 10
    // 10
    // 20
    // 10
    // 20
    // 40
    // 40
    // 50
    // 30
}
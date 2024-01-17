// The program uses a pointer to traverse an array.
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *p;

    // p = &a[0]; // p points to the first element of array a
    // A shorter way to accomplish the same thing is:
    p = a;

    // Print out the content of the array
    for (int i = 0; i < 10; i++)
    {
        // Way 1:
        cout << *p << " "; // Print the element p points to
        p++; // Increment p so it points to the next element
        
        // Way 2:
        // The array indexing operator ([]) can be used with pointers.
        // cout << p[i] << " "; 
        
        // Way 3:
        // cout << *(p + i) << " ";
    }
    
    
}
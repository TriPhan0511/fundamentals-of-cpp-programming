/*
NOTE:
A dynamic array is simply is a pointer that points to a dynamically allocated block of memory.

    int size;
    cout << "Enter size: ";
    cin >> size;
    double *numbers;
    numbers = new double[size];

The value within the square brackets in a dynamic array allocation may be a variable determined
at run time.

While we access a dynamic array via a pointer, a static array behaves like a constant pointer; 
that is, a pointer that we cannot assign to point elsewhere.

The reserved word `new` allocates memory for array's elements. `new` technically is classified
as an operator. The area of memory used for memory allocation via `new` is different from the
area used for local variables (the stack) and global variables (static memory).
Dynamic memory comes from the heap, which has capacity larger than the stack.
*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << '\n';

    double sum = 0.0;
    int size; // Actual number of entries
    double *numbers; // Note: number is a pointer, not an array

    // Get effective size of the array
    cout << "Please enter number of values to process: ";
    cin >> size;

    if (size > 0) // Nothing to do with no entries
    {
        // Allocate the exact size needed
        numbers = new double[size]; // Dynamically allocated array
        // Allow the user to enter in the values
        cout << "Please enter " << size << " numbers: ";
        for (int i = 0; i < size; i++)
        {
            // cin >> *(numbers+i);
            cin >> numbers[i];
            sum += numbers[i];
        }
        
        cout << "The average of ";
        for (int i = 0; i < size; i++)
        {
            if (i == size - 1)
            {
                cout << numbers[i];
            }
            else
            {
                cout << numbers[i] << ", ";
            }
        }
        cout << " is " << sum/size << '\n';
    }
}
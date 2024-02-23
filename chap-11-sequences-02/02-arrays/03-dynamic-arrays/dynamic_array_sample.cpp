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

// Print all contents or a slice of an array
void print(double *begin, double *end)
{
    double *elem = begin;
    while (elem != end)
    {
        cout << *elem << " ";
        elem++;
    }
    cout << '\n';
}

// Create a dynamic array
double* create_dynamic_array(int size)
{
    double *p = new double[size];
    cout << "Please enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    return p;
}

// Compute the average
double compute_avg(double *begin, double *end)
{
    double sum = 0.0;
    int count = 0;
    double *elem = begin;
    while (elem != end)
    {
        sum += *elem;
        count++;
        elem++;
    }
    return sum/count;
}

int main()
{
    // Get size of array from user input
    int size;
    cout << "How many numbers do you want? ";
    cin >> size;
    // Create a dynamic array
    double *p = create_dynamic_array(size);
    // Print the array
    cout << "Contents of the array: ";
    print(p, p + size);
    // Compute the average
    cout << "The average is " << compute_avg(p, p + size) << '\n';
    // Clean up the memory
    delete [] p;
}
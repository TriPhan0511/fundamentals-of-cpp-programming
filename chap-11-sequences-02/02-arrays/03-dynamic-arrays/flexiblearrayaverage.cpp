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

The variable numbers is local to main, so it lives on the stack. It is a pointer, so it stores a memory
address. The `new` expression returns an address to memory in the heap. So, even though the numbers
variable itself is stored on the stack, the memory it references is located in the heap. We do not need to
worry about our array being too big to be local to main, since its contents do not consume stack space.

An executing program automatically allocates on the stack the local variables of a function when a
caller invokes the function. The executing program also automatically deallocates local variables when the
function returns. The programmer does not need to explicitly manage local variables. Dynamically allocated
memory, however, requires more attention on the part of the programmer. The statement:

    delete [] numbers; // Free up the space held by numbers

uses the delete operator to free up the memory held by the numbers array. The programmer is responsible
for deallocating memory that was allocated with new. Every use of the new operator should have a
corresponding use of delete somewhere later in the program’s execution. Notice that the square brackets
([]) are empty. The run-time environment keeps track of the amount of memory to free up.

You should develop the habit of ensuring that every use of the new operator has an associated call of
delete. If the delete statement is omitted from the following program (flexiblearrayaverage.cpp), 
the program in this case likely will behave no differently since most operating systems reclaim all 
the dynamic memory a program holds when the program finishes executing. Serious problems arise in longer 
running programs that must allocate and deallocate dynamic memory over time. Programs that run for 
extended periods of time, like web servers and operating system kernels, can crash due to failures to 
properly deallocate memory. The condition is known as a memory leak—the program overtime allocates more 
and more memory via new but never releases the memory back with delete. Eventually the program uses up all 
of the available heap space and crashes.
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
        // Print the result
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
        // Clean up the memory
        delete [] numbers; // Free up the space held by numbers
    }
}
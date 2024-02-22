#include <iostream>

using std::cout;

/*
Sometimes pointer notation is used to represent an array parameter to a function. 
The array print function that begins:

    void print_array(const int a[], int size)

could instead be written:
    void print_array(const int *a, int size)    

where a is a pointer to an array. The compiler treats the two forms identically 
in the machine language it produces.    

*/
// void print_array(const int a[], int size)
void print_array(const int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main()
{
    cout << '\n';

    int a[] = {2, 4, 6, 8, 10, 12, 14};
    // int *p = &a[0];
    int *p = a; // a is itself a reference to the array's location in memory

    // Print out the contents of the array
    int size = (sizeof a) / (sizeof a[0]);
    for (int i = 0; i < size; i++)
    {
        cout << *p << " "; // Print the element p points to
        p++; // Increment p so it points to the next element
    }
    cout << '\n';

    // The expression p[0] is another way to write *p
    // So the array indexing operator ([]) can be used with pointers
    // The expression p[5] represents the element at index 5 within 
    // the array pointed by p
    p = a;
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
    }
    cout << '\n';

    // If pointer p points to an array, the element at index i can be accessed 
    // as either p[i] or *(p + i).
    // The expression *(p + i) dereferences the address that is i positions away 
    // from the address referenced by p.
    p = a;
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << '\n';
    
    // Print out the contents of the array
    print_array(a, size);

    // // Traverse the array from back to front
    // int *p2 = a;
    // p2 += size - 1;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *p2 << " ";
    //     p2--;
    // }
    // cout << '\n';

    // Zero out elements of the array
    p = a;
    for (int i = 0; i < size; i++)
    {
        *p = 0;
        p++;
    }

    // Reprint the contents of the array
    p = a;
    for (int i = 0; i < size; i++)
    {
        cout << *p << " ";
        p++;
    }
    cout << '\n';
} 

/*
NOTE:
Each byte in memory has a unique numeric address. Since most C++ types require more than one byte of storage, incrementing
a pointer by 1 does not simply add 1 to the address it holds. The amount added depends on the type of the pointer; for example, on
systems using 32-bit (4 byte) integers, adding 1 to an integer pointer variable increments its address by 4, not 1. The compiler knows
the type of the pointer variable because programmers must declare all variables. The compiler, therefore, can automatically adjust the
arithmetic to work properly. If a pointer points to memory within an array and is of the same type as the array, incrementing the pointer
correctly repositions the pointer to point to the next element in the array.
*/
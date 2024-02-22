/*
*** Question
In C++, what is constant pointer?

*** Answer
In C++, a constant pointer is a pointer whose value (i.e., the memory address it holds) 
cannot be changed after initialization. This means that once a constant pointer is 
assigned an address, it cannot be reassigned to point to a different memory location.

There are two ways to declare a constant pointer:

1. Pointer to Constant Data (const qualifier before the pointer symbol *):

    * This means that the data pointed to by the pointer is constant and cannot be 
      modified through that pointer.
    
    * The pointer itself can still be modified to point to different memory locations.

        const int* p; // Pointer to constant data

2. Constant Pointer (const qualifier after the pointer symbol *):

    * This means that the pointer itself is constant and cannot be modified to point to 
      a different memory location.

    * The data pointed to by the pointer can still be modified through that pointer.

        int value = 5;
        int* const p = &value; // Constant pointer

The following code illustrates both types of constant pointers:

    int main()
    {
        int num1 = 10;
        int num2 = 20;

        // Pointer to constant data
        const int* ptr1 = &num1;
        // *ptr1 = 30; // Error: Cannot modify data through ptr1
        ptr1 = &num2; // OK: Can change pointer to point to a different memoty location

        // Constant pointer
        int* const ptr2 = &num1;
        *ptr2 = 30; // OK: Can modify data through ptr2
        // ptr2 = &num2; // Error: Cannot change pointer to point to ad different memory location
    }

In this example:

    `ptr1` is a pointer to constant data, so it cannot be used to modify the data it points to 
    (`*ptr1 = 30;` would result in a compilation error), but it can be reassigned to point to a 
    different memory location (`ptr1 = &num2;` is allowed).

    `ptr2` is a constant pointer, so it cannot be reassigned to point to a different memory location 
    (`ptr2 = &num2;` would result in a compilation error), but it can be used to modify the data it 
    points to (`*ptr2 = 30;` is allowed).

*/

int main()
{
    int num1 = 10;
    int num2 = 20;

    // Pointer to constant data
    const int* ptr1 = &num1;
    // *ptr1 = 30; // Error: Cannot modify data through ptr1
    ptr1 = &num2; // OK: Can change pointer to point to a different memoty location

    // Constant pointer
    int* const ptr2 = &num1;
    *ptr2 = 30; // OK: Can modify data through ptr2
    // ptr2 = &num2; // Error: Cannot change pointer to point to ad different memory location
}
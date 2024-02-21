/*
NOTE:
    void clear(int a[], int size)

An undecorated array name by itself in C++ source code behaves like a constant pointer 
to the beginning element of the array. Consequently, when an array is passed as an 
actual parameter during a function call, as:

    clear(list, size);   

the function is passed the address of the array—the array’s address is bound to the 
formal parameter. So, while the function cannot affect the address of the array itself, 
the function has total access to the array’s contents.

In the following program, the function `clear` modifies the contents of
any array sent to it, making all the elements zero.

The clear function actually modifies the contents of main’s list array. 
The function works on the array’s actual elements, not copies of its elements.

Arrays, therefore, by default are passed by reference with respect to the elements 
they contain. By default, an array’s contents are open to corruption by errant functions. 
In order to protect an array so that a function may read its contents but not modify 
its contents, the parameter must be declared const, as in:

    void print_array(const int a[], int size)

As a general rule, all functions that accept array parameters should declare the
array contents as const unless they need to modify the elements of the array. For
example, use:

    int sum(const int a[], int n)

rather than:

    int sum(int a[], int n)

if the sum function must be able to examine the contents of the array but is not
intended to modify its contents.

C++ does not directly support empty arrays. A physical array must contain at least 
one element. Sometimes it is appropriate to consider an array that is conceptually empty; 
for example, what if we wish to pass an “empty” array to the sum function? 
We can pass 0 as the second parameter since an empty array contains no elements, 
but what should we pass as the first parameter? Any array will do, but there is no need create 
an real array when none truly is needed. Instead, we may use nullptr:

    quanitity = sum(nullptr, 0);

If you scrutinize the body of the sum function, you will see that this call will assign to
quantity the correct answer, namely zero.
*/

#include <iostream>

using std::cout;

// Zero out the contents of an array
void clear(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 0;
    }
}

// Print the contents of an array
void print_array(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

// Compute the sum of contents of an array
int sum(const int a[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    cout << '\n';

    int list[] = {1, 2, 3, 4, 5};
    int size = (sizeof list) / (sizeof list[0]);
    // Print the array
    print_array(list, size); // 1 2 3 4 5
    // Zero out the array
    clear(list, size);
    // Reprint the array
    print_array(list, size); // 0 0 0 0 0 

    /*
    C++ does not directly support empty arrays. A physical array must contain at least 
    one element. Sometimes it is appropriate to consider an array that is conceptually empty; 
    for example, what if we wish to pass an “empty” array to the sum function? 
    We can pass 0 as the second parameter since an empty array contains no elements, 
    but what should we pass as the first parameter? Any array will do, but there is no need create 
    an real array when none truly is needed. Instead, we may use nullptr:

        quanitity = sum(nullptr, 0);

    If you scrutinize the body of the sum function, you will see that this call will assign to
    quantity the correct answer, namely zero.
    */
    cout << sum(nullptr, 0) << '\n'; // 0
}
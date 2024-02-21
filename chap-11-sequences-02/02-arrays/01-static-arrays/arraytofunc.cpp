#include <iostream>

using std::cout;

// Print a static array
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
    
    int list[] = {2, 4, 6, 8};
    int size = (sizeof list) / (sizeof list[0]);
    // Print the contents of the array
    print_array(list, size);
    // Compute and display sum
    cout << sum(list, size) << '\n';
    // Zero out al the elemtns of the array
    for (int i = 0; i < size; i++)
    {
        list[i] = 0;
    }
    // RepPrint the contents of the array
    print_array(list, size);
    // Compute and display sum
    cout << sum(list, size) << '\n';
}

/*
NOTE:
    void print_array(int a[], int size)

An undecorated array name by itself in C++ source code behaves like a constant pointer to the beginning
element of the array. Consequently, when an array is passed as an actual parameter during a function call,
as in the above program:    

    print_array(list, size);

the function is passed the address of the array—the array’s address is bound to the formal parameter. So,
while the function cannot affect the address of the array itself, the function has total access to the array’s
contents.
*/
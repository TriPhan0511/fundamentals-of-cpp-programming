#include <iostream>

using std::cout;

/*
* print(a, n)
*   Prints the contents of an int array
*   a is the array to print
*   n is the size of the array
*/
// Note: Use the "const" keyword signify the function does not modify the content of the array
void print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

/*
* clear(a, n)
*   Makes all the elements of array a zero
*   a is the array to zero out
*   n is the size of the array
*/
// Note: the function modify the content of the array, so we do not use the "const" keyword.
void clear(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}

int main()
{
    int list[] = {2, 4, 6, 8};
    // Print the content of the array
    print(list, 4);
    // Compute and display sum
    clear(list, 4);
    // Reprint the content of the array
    print(list, 4);
}
#include <iostream>

using std::cout;
using std::cin;

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
* sum(a, n)
*   Adds up the contents of an int array
*   a is the array to sum
*   n is the size of the array
*/
// Note: Use the "const" keyword signify the function does not modify the content of the array
int sum(const int a[], int n) 
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    int list[] = {2, 4, 6, 8};
    // Print the content of the array
    print(list, 4);
    // Compute and display sum
    cout << sum(list, 4) << '\n';
    // Zero out all the elements of list
    for (int i = 0; i < 4; i++)
    {
        list[i] = 0;
    }
    // Reprint the content of the array
    print(list, 4);
    // Compute and display sum
    cout << sum(list, 4) << '\n';
    
    // --------------------------------------------------------

    // C++ does not directly support empty arrays. A physical array must contain at least one element. Sometimes
    // it is appropriate to consider an array that is conceptually empty; for example, what if we wish to pass
    // an “empty” array to the sum function?We can pass 0 as the second parameter since an empty array contains
    // no elements, but what should we pass as the first parameter? Any array will do, but there is no need create
    // an real array when none truly is needed. Instead, we may use nullptr:

    // int quantity = sum(nullptr, 0);
    // cout << "quantity = " << quantity; // quantity = 0
}
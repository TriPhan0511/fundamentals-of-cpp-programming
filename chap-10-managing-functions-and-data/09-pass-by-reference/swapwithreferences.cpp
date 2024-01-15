#include <iostream>

using std::cout;

/*
* swap(a, b)
*   Interchanges the values of memory
*   referenced by its parameters a and b.
*   It effectively interchanges the values
*   of variables in the caller's context.
*/
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int var1 = 5;
    int var2 = 19;
    cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
    swap(var1, var2);
    cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
    // ->
    // var1 = 5, var2 = 19
    // var1 = 19, var2 = 5
}
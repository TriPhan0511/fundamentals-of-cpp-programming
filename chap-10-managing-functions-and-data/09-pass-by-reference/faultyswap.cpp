#include <iostream>

using std::cout;

/*
* swap(a, b)
*   Attempts to interchange the values of
*   its parameters a and b. That it does, but
*   unfortunately it only affects the local
*   copies.
*/
void swap(int a, int b)
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
    // var1 = 5, var2 = 19
}
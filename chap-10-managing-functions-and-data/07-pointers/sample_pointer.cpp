#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int x;
    x = 4;
    int *p; // The * symbol used to indicate that the variable is a pointer.
    p = &x;

    // In order to access memory via a pointer, we use 
    // the unary * operator. When not used in the context
    // of a declaration the unary * operator is call 
    // the pointer dereferencing operator.
    *p = 7; // This statement copies the value 7 into the address referenced by the pointer p.
    cout << "x = " << x; // x = 7

    *p = 0;
    cout << '\n' << x;
}
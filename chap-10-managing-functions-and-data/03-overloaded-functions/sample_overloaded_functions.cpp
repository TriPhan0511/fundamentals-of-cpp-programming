#include <iostream>

using std::cout;
using std::cin;

// In C++, a program can have multiple functions with the same name. When two or more functions within
// a program have the same name, the function is said to be overloaded. The functions must be different
// somehow, or else the compiler would not know how to associate a call with a particular function definition.
// The compiler identifies a function by more than its name; a function is uniquely identified by its signature.
// A function signature consists of the function’s name and its parameter list. In the parameter list, only the
// types of the formal parameters are important, not their names. If the parameter types do not match exactly,
// both in number and position, then the function signatures are different. Consider the following overloaded
// functions:

void my_func()
{
    cout << "Hello" << '\n';
}

void my_func(int x)
{
    cout << "ALOHA" << '\n';
}

int main()
{
    my_func();
    my_func(1);
}

// -> 
// Hello
// ALOHA
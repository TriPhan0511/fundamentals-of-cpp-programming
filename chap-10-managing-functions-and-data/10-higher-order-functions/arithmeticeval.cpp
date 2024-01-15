// This program illustrates higher-order functions.

#include <iostream>

using std::cout;

int add(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return x * y;
}

int evaluate(int (*f)(int, int), int x, int y)
{
    return f(x, y);
}

// Sample 1:
int main()
{
    cout << add(2, 3) << '\n';
    cout << multiply(2, 3) << '\n';
    cout << evaluate(&add, 2, 3) << '\n';
    cout << evaluate(&multiply, 2, 3) << '\n';

    // C++ has a somewhat relaxed syntax for function pointers that cannot be applied to pointers to data.
    // invoking evaluate in source code we may omit the ampersand in front of the function argument,
    // as is
    cout << evaluate(add, 2, 3) << '\n';
    cout << evaluate(multiply, 2, 3) << '\n';
    
    // ->
    // 5
    // 6
    // 5
    // 6
    // 5
    // 6
}

// // Sample 2:
// int main()
// {
//     // Declare func to be a pointer to a function
//     // that accepts two integer parameters and 
//     // returns an integer result.
//     int (*func)(int, int);
//     // Assign add to func
//     func = add;
//     // Call add through func
//     cout << func(7,2); // -> 9
// }
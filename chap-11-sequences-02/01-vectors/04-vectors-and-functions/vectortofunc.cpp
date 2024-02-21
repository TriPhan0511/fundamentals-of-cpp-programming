#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Print contents of a vector
// void print_vector(vector<int> v)
// {
//     for (int e : v)
//     {
//         cout << e << " ";
//     }
//     cout << '\n';
// }

/*
NOTE:
The print function’s definition:
    
    void print_vector(vector<int> v)

shows that a vector formal parameter is declared just like a non-vector formal parameter. In this case, the
print function uses pass by value, so during the program’s execution an invocation of print will copy the
data in the actual parameter (list) to the formal parameter (v). Since a vector potentially can be quite
large, it generally is inefficient to pass a vector by value as shown above. Pass by value requires a function
invocation to create a new vector object for the formal parameter and copy all the elements of the actual
parameter into the new vector which is local to the function. A better approach uses pass by reference, with
a twist:

    void print_vector(const vector<int>& v)
    {
        for (auto e : v)
        {
            cout << e << " ";
        }
        cout << '\n';
    }

The & symbol indicates that a caller invoking print will pass v by reference (see Section 10.9). This copies
the address of the actual parameter (owned by the caller) to the formal parameter v instead of making a copy
of all the data in the caller’s vector. Passing the address is much more efficient because on most systems
an address is the same size as a single int, whereas a vector could, for example, contain 1,000,000 ints.
With pass by value a function invocation would have to copy all those 1,000,000 integers from the caller’s
actual parameter into the function’s formal parameter.

Section 10.9 indicated that call-by-value parameter passing is preferred to call-by-reference parameter
passing. This is because a function using pass by value cannot modify the actual variable the caller passed to
it. Observe closely that our new print function declares its formal parameter v to be a const reference.
This means the function cannot modify the actual parameter passed by the caller. Passing a vector object
as a constant reference allows us to achieve the efficiency of pass by reference with the safety of pass by
value.

Passing by const reference is not the same as pass by value, though. The function receiving a parameter
passed by value can modify the parameter and return a modified copy. A function using pass by const
reference cannot modify the parameter passed to it.
*/
void print_vector(const vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << '\n';
}

// Sum contents of a vector containing integers
// int sum(vector<int> v)
// {
//     int result = 0;
//     for (auto e : v)
//     {
//         result += e;
//     }
//     return result;
// }

/*
NOTE:
Like the print function, the sum function in Listing 11.8 (vectortofunc.cpp) does not intend to modify
the contents of its vector parameter. Since the sum function needs only look at the vector’s contents, its
vector parameter should be declared as a const reference.
*/
int sum(const vector<int>& v)
{
    int result = 0;
    for (auto e : v)
    {
        result += e;
    }
    return result;
}

int main()
{
    cout << '\n';

    vector<int> v{2, 4, 6, 8};
    // Print the contents of the vector
    print_vector(v); // 2 4 6 8
    // Compute and display the sum
    cout << sum(v) << '\n'; // 20
    // Zero out all the elements of v
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v[i] = 0;
    }
    // Reprint the contents of the vector
    print_vector(v); // 0 0 0 0
    // Compute and display the sum
    cout << sum(v) << '\n'; // 0
}
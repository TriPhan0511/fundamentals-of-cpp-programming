#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Note 1:
// Since a vector potentially can be quite large, 
// it generally is inefficient to pass a vector by value 
// Pass by value requires a function invocation to create 
// a new vector object for the formal parameter and 
// copy all the elements of the actual parameter into 
// the new vector which is local to the function. 
// A better approach uses pass by reference.

// The & symbol indicates that a caller invoking print 
// will pass v by reference. This copies the address of 
// the actual parameter (owned by the caller) to the 
// formal parameter v instead of making a copy of all the data 
// in the caller’s vector. 
// Passing the address is much more efficient because on 
// most systems an address is the same size as a single int, 
// whereas a vector could, for example, contain 1,000,000 ints.
// With pass by value a function invocation would have to copy 
// all those 1,000,000 integers from the caller’s actual 
// parameter into the function’s formal parameter.

// Note 2:
// Section 10.9 indicated that call-by-value parameter passing 
// is preferred to call-by-reference parameter passing. 
// This is because a function using pass by value cannot modify 
// the actual variable the caller passed to it. 
// Observe closely that our new print function declares 
// its formal parameter v to be a const reference.
// This means the function cannot modify the actual parameter 
// passed by the caller. Passing a vector object as a 
// constant reference allows us to achieve the efficiency 
// of pass by reference with the safety of pass by value.

// Passing by const reference is not the same as 
// pass by value, though. The function receiving a parameter
// passed by value can modify the parameter and return 
// a modified copy. A function using pass by const reference 
// cannot modify the parameter passed to it.

/**
 * print(v)
 *  Prints the contents of an int vector
 *  v is the vector to print
*/
void print(const vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

// Note:
// Like the print function, the sum function does not intend to 
// modify the contents of its vector parameter. 
// Since the sum function needs only look at the 
// vector’s contents, its vector parameter should be declared 
// as a const reference. In general, if a function’s purpose is 
// to modify a vector, the reference should not be const.

/**
 * sum(v)
 *  Adds up the contents of an int vector
 *  v in the vector to sum
 *  Returns the sum of all the elements
 *  or zero if the vetor us empty.
*/
int sum(const vector<int>& v)
{
    int result = 0;
    for (auto i : v)
    {
        result += i;
    }
    return result;
}

int main()
{
    vector<int> list{2, 4, 6, 8,};
    // Print the contents of the vector
    print(list);
    // Compute and display sum
    cout << sum(list) << '\n';
    // Zero out all the lements of list
    for (auto& i : list)
    {
        i = 0;
    }
    // Reprint the contents of the vector
    print(list);
    // Compute and display sum
    cout << sum(list) << '\n';
}


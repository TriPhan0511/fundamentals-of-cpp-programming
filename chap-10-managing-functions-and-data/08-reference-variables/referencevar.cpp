#include <iostream>

using std::cout;
using std::cin;

// int main()
// {
//     int x = 5;
//     int y = x;
//     int& r = x;
    

//     cout << "x = " << x << '\n';  // x = 5
//     cout << "y = " << y << '\n';  // y = 5
//     cout << "r = " << r << '\n';  // r = 5

//     cout << "Assign 7 to x\n";
//     x = 7;
//     cout << "x = " << x << '\n';  // x = 7
//     cout << "y = " << y << '\n';  // y = 5
//     cout << "r = " << r << '\n';  // r = 7

//     cout << "Assign 8 to y\n";
//     y = 8;
//     cout << "x = " << x << '\n';  // x = 7
//     cout << "y = " << y << '\n';  // y = 8
//     cout << "r = " << r << '\n';  // r = 7

//     cout << "Assign 8 to r\n";
//     r = 2;
//     cout << "x = " << x << '\n';  // x = 2
//     cout << "y = " << y << '\n';  // y = 8
//     cout << "r = " << r << '\n';  // r = 2
// }

int main()
{
    // int x = 10;
    // int *ptr = &x;
    // int& ref = x;

    // cout << "Value of ptr = " << *ptr << '\n'; // Value of ptr = 10
    // cout << "Value of ref = " << ref << '\n'; // Value of ref = 10

    // int num = ref;
    // int num2 = *ptr;
    // cout << "Value of num = " << num << '\n'; // Value of num = 10
    // cout << "Value of num2 = " << num2 << '\n'; // Value of num2 = 10
    // --------------------------------------------------------------------

    // A reference variable has two big limitations over a pointer variable:

    // 1. A reference variable must be initialized with an actual variable when it is declared. A pointer variable
    // may be declared without an initial value and assigned later. Consider the following statements:

    // int& ref; // error: 'ref' declared as reference but not initialized
    // int *p; // Legal, we will assign p later

    // 2. There is no way to bind a reference variable to a different variable during its lifetime. Consider the
    // following code fragemnt:

    int x = 5;
    int y = 7;
    int *p = &x; // Binds p to point to x
    int& r = x; // Binds r to x
    p = &y; // Reassign p to point to y
    r = y;
    
    // The statement: 
    //      r = y;
    // does not bind r to the y variable. The declaration of r binds r to the x variable for the life of r. This
    // statement simply assigns y’s value to x via the reference r. In contrast, we may freely bind pointer
    // variables to any variables we choose at any time.


    // cout << "x = " << x << '\n';
    // cout << "y = " << y << '\n';
    // cout << "*p = " << *p << '\n';
    // cout << "r = " << r << '\n';
    // // x = 5
    // // y = 7
    // // *p = 5
    // // r = 5

    // x = 300;
    // cout << "x = " << x << '\n';
    // cout << "y = " << y << '\n';
    // cout << "*p = " << *p << '\n';
    // cout << "r = " << r << '\n';
    // // x = 300
    // // y = 7
    // // *p = 7
    // // r = 300

    // *p = 100;
    // cout << "x = " << x << '\n';
    // cout << "y = " << y << '\n';
    // cout << "*p = " << *p << '\n';
    // cout << "r = " << r << '\n';
    // // x = 100
    // // y = 7
    // // *p = 100
    // // r = 100
}


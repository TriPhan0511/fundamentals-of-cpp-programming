#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

void print_vector(const vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << '\n';
}

void print_array(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main()
{
    // Declare two array, one dynamic
    int a[10];
    int *b;
    // Populate array a
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    // Really make a copy of array a
    b = new int[10];
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }

    cout << "Contents of array a: ";
    print_array(a, 10);
    cout << "Contents of array b: ";
    print_array(b, 10);

    // Change the first value
    // // a[0] = 1000;
    // b[0] = 1111;
    // cout << "Contents of array a: ";
    // print_array(a, 10);
    // cout << "Contents of array b: ";
    // print_array(b, 10);
    
    // Clean up the memory
    delete [] b;
    cout << "Contents of array a: ";
    print_array(a, 10);
    cout << "Contents of array b: ";
    print_array(b, 10);
}

// int main()
// {
//     cout << '\n';

//     // // Delcare two arrays
//     // int a[10];
//     // int b[10];
//     // // Populate one of them
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     a[i] = i;
//     // }
//     // // Make a copy of array a?
//     // // b = a; // Illegal

//     // Declare two arrays, one dynamic
//     // int a[10];
//     // int *b;
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     a[i] = i;
//     // }
//     // b = a; // Aliasing

//     // cout << "Contents of a: ";
//     // print_array(a, 10);
//     // cout << "Contents of b: ";
//     // print_array(b, 10);

//     // // Change the first value
//     // // a[0] = 100;
//     // b[0] = 111;
//     // cout << "Contents of a: ";
//     // print_array(a, 10);
//     // cout << "Contents of b: ";
//     // print_array(b, 10);

//     // ---------------------------------------
//     // int a[10];
//     // int *b = new int[10];;
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     a[i] = i;
//     // }

//     // // Copy
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     b[i] = a[i];
//     // }    
    
//     // cout << "Contents of a: ";
//     // print_array(a, 10);
//     // cout << "Contents of b: ";
//     // print_array(b, 10);

//     // // Change the first value
//     // a[0] = 100;
//     // // b[0] = 111;
//     // cout << "Contents of a: ";
//     // print_array(a, 10);
//     // cout << "Contents of b: ";
//     // print_array(b, 10);

//     // vector<int> x{1, 2, 3, 4, 5};
//     // vector<int> y = x;

//     // cout << "Contents of vector x: ";
//     // print_vector(x);
//     // cout << "Contents of vector y: ";
//     // print_vector(y);

//     // // Change the first value
//     // // x[0] = 1000;
//     // y[0] = 1111;
//     // cout << "Contents of vector x: ";
//     // print_vector(x);
//     // cout << "Contents of vector y: ";
//     // print_vector(y);
// }
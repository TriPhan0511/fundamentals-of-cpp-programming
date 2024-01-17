#include <iostream>

using std::cout;

void print_1(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << a[i] << " ";
    }
    cout << '\n';
}

// Sometimes pointer notation is used to 
// represent an array parameter to a function.
void print_2(const int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Way 1:
        // cout << a[i] << " ";

        // Way 2:
        // cout << *(a + i) << " ";

        // Way 3:
        cout << *a << " ";
        a++;
    }
    cout << '\n';
}

// Note: Omit const keyword
void print_3(int *a, int n)
{
    int *begin = a;
    int *end = a + n;
    for (int *cursor = begin; cursor != end; cursor++)
    {
        cout << *cursor << " ";
    }
    cout << '\n';
}

// Using recursion
void print_4(const int a[], int n)
{
    if (n > 0)
    {
        cout << *a <<  " "; // Print the first element of the array
        print_4(a + 1, n - 1); // Print the rest of the array
    }
}


// Using two pointers
// The advantage of the begin/end pointer approach is that 
// it allows a programmer to pass a slice of the array to
// the function;
// for example, if we wish to print the elements of the array
// from index 3 to index 7, we would call the function as:
void print_5(int *begin, int *end)
{
    for (int *elem = begin; elem != end; elem++)
    {
        cout << *elem << " ";
    }
    cout << '\n';
}

int main()
{
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // print_1(numbers, 10);
    // print_2(numbers, 10);
    // print_3(numbers, 10);
    // print_4(numbers, 10); // recursive print
    // print_5(numbers, numbers + 10); // use two pointers

    // Print the elements of the array from index 3 to index 7
    print_5(numbers + 3, numbers + 8);
}
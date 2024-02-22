// The following program uses two array printing functions, iterative_print
// and recursive_print. Both use the pointer notation when declaring their 
// array parameters

#include <iostream>

using std::cout;

void iterative_print(const int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

void recursive_print(const int *a, int size)
{
    if (size > 0)
    {
        cout << *a << " "; // Print the first element of the array
        recursive_print(a + 1, size - 1); // Print rest of the array
    }    
}

// Instead of passing a pointer to an array and the array’s size, we can pass two pointers. 
// The first pointer points to the beginning of the array and another pointer points just past 
// the end of the array. The following print function illustrates:
void print(int *begin, int *end)
{
    for(int *elem = begin; elem != end; elem++)
    {
        cout << *elem << " ";
    }
    cout << '\n';
}


int main()
{
    cout << '\n';

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = (sizeof a) / (sizeof a[0]);
    iterative_print(a, size);
    recursive_print(a, size);
    
    cout << '\n';

    print(a, a + size);

    // Print a slice of the array
    print(a, a + 8);
    print(a + 3, a + 8);;
}
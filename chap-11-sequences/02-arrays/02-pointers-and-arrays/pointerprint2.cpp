#include <iostream>

using std::cout;

int main()
{
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *begin;
    int *end;
    int *cursor;

    begin = a; // begin points to the first element of the array
    end = a + 10; // end points to just after the last element

    // Print out the contents of the array
    // Solution 1: Using while loop
    // cursor = begin;
    // while (cursor != end)
    // {
    //     cout << *cursor << " "; // Print the element
    //     cursor++; // Increment cursor so it points to the next element
    // }

    // Solution 2: Using for loop
    for (cursor = begin; cursor != end; cursor++)
    {
        cout << *cursor << " ";
    }
}


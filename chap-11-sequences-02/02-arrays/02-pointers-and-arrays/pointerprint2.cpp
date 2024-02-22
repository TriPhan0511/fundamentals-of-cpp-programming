// The following program uses pointers in a different way to traverse an array

#include <iostream>

using std::cout;

int main()
{
    cout << '\n';

    int a[] = {2, 4, 6, 8, 10, 12};
    int *begin;
    int *end;
    int *cursor;

    // Compute the number of elements of the array
    int size = (sizeof a) / (sizeof a[0]); 

    begin = a; // begin points to the first element of the array
    end = begin + size; // end points to just after the last element

    // Print out the contents of the array
    // cursor = begin;
    // while (cursor != end)
    // {
    //     cout << *cursor << " "; // Print the element
    //     cursor++; // Increment cursor so it points to the next element
    // }
    // cout << '\n';

    // Print out the contents of the array
    for (cursor = begin; cursor != end; cursor++)
    {
        cout << *cursor << " ";
    }
    cout << '\n';
}

// int main()
// {
//     cout << '\n';

//     int a[] = {2, 4, 6, 8, 10, 12};
//     int size = (sizeof a) / (sizeof a[0]); 
//     int *cursor = a;
//     int *end = a + size;
    
//     // Print out the contents of the array
//     while (cursor != end)
//     {
//         cout << *cursor << " ";
//         cursor++;
//     }
//     cout << '\n';
// }
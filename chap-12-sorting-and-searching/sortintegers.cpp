/*
The selection sort algorithm is relatively easy to implement, and it performs acceptably for smaller
sequences. If A is a sequence, and i and j represent indices within the sequence, selection sort works as
follows:
    1. Set i = 0.
    2. Examine all the elements A[ j], where j > i. If any of these elements is less than A[i], then exchange
    A[i] with the smallest of these elements. (This ensures that all elements after position i are greater
    than or equal to A[i].)
    3. If i is less than the length of A, increase i by 1 and goto Step 2.
    If the condition in Step 3 is not met, the algorithm terminates with a sorted sequence. The command
    to “goto Step 2” in Step 3 represents a loop. We can begin to translate the above description into C++ as
    follows:
        // n is A's length
        for (int i = 0; i < n - 1; i++) {
        // Examine all the elements
        // A[j], where j > i.
        // If any of these A[j] is less than A[i],
        // then exchange A[i] with the smallest of these elements.
        }

The directive at Step 2 beginning with “Examine all the elements A[ j], where j > i” also requires a loop.
We continue refining our implementation with:
        // n is A's length
        for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
        // Examine all the elements
        // A[j], where j > i.
        }
        // If any A[j] is less than A[i],
        // then exchange A[i] with the smallest of these elements.
        }

In order to determine if any of the elements is less than A[i], we introduce a new variable named
small. The purpose of small is to keep track of the position of the smallest element found so far. We
will set small equal to i initially because we wish to locate any element less than the element found at
position i.
        // n is A's length
        for (int i = 0; i < n - 1; i++) {
        // small is the position of the smallest value we've seen
        // so far; we use it to find the smallest value less than A[i]
        int small = i;
        for (int j = i + 1; j < n; j++) {
        if (A[j] < A[small])
        small = j; // Found a smaller element, update small
        }
        // If small changed, we found an element smaller than A[i]
        if (small != i)
        // exchange A[small] and A[i]
        }
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

/**
 * swap(a, b)
 *  Interchange the values of memory
 *  referenced by its parameters a and b.
 *  It effecttively interchanges the values
 *  of variables in the caller's context.
*/
// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

/**
 * selection_sort
 *  Arranges the elements of a vector v into ascending order.
 *  v is a vector that contains integers.
*/
void selection_sort(vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        // Note: i, small and j represent positions within v
        // v[i], v[small] and v[j] represent the elements at
        // those positions.
        // small is the postion of the smallest value we've seen
        // so far; we use it to find the smallest value less 
        // than v[i]
        int small = i;
        // See if a smaller value can be found later in the vector
        for (int j = i + 1; j < size; j++)
        {
            if (v[j] < v[small])
            {
                small = j;
            }
            
        }
        // Swap v[i] and v[small], if a smaller value was found
        if (small != i)
        {
            std::swap(v[i], v[small]);
            // swap(v[i], v[small]);
        }
    }
}

/**
 * print
 *  Print the contents of a vector of integers.
 *  v is a vector to print.
 *  v is not modified
*/
void print(const vector<int>& v) {
    int size = v.size();
    cout << "{";
    if (size > 0)
    {
        cout << v[0]; // Print the first element
    }
    for (int i = 1; i < size; i++)
    {
        cout << ", " << v[i]; // Print the rest
    }
    cout << "}\n";
}

int main() {
    vector<int> v{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    cout << "Before: ";
    print(v);
    selection_sort(v);
    cout << "After: ";
    print(v);

}

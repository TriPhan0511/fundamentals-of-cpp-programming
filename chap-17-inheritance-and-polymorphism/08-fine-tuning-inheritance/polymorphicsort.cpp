#include <iostream>
#include <vector>
#include "comparer.h"

using std::cout;
using std::vector;

/**
 * selection_sort(v, comparer)
 *  Arranges the elements of vector v in an order determined
 *  by the comarer object.
 *  v is a vector of ints
 *  comparer is a object of Comparer class.
 *  The contents of v are physically rearranged.
*/
void selection_sort(vector<int>& v, Comparer& comparer)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int k = i + 1; k < size; k++)
        {
            if (comparer.compare(v[k], v[pos]))
            {
                pos = k;
            }
        }
        if (pos != i)
        {
            comparer.swap(v[pos], v[i]);
        }
    }
}

// Overload the operator<< function 
// to print a vector of ints
std::ostream& operator<<(std::ostream& os, const vector<int>& v)
{
    int size = v.size();
    os << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            os << v[i];
        }
        else
        {
            os << v[i] << ", ";
        }
    }
    os << " }\n";
    return os;
}

/**
 * less_than(a, b)
 *  Returns true if a < b; otherwise, returns false.
*/
bool less_than(int a, int b)
{
    return a < b;
}

/**
 * greater_than(a, b)
 *  Returns true if a > b; otherwise, returns false.
*/
bool greater_than(int a, int b)
{
    return a > b;
}

int main()
{
    // Make a vector of integers
    vector<int> original { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };

    // Make a working copy of the original vector
    vector<int> working = original;
    cout << "Before: " << working << '\n';

    // Create two objects of Comparer class
    Comparer lt(less_than);
    Comparer gt(greater_than);

    // Ascending order sorting
    selection_sort(working, lt);
    cout << "Ascending: " << working;
    cout << " (" << lt.comparisons() << " comparisons, "
        << lt.swaps() << " swaps)\n";
    cout << "----------------------------------------------------------\n";

    // Descending order sorting
    working = original;
    selection_sort(working, gt);
    cout << "Descending: " << working;
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
    cout << "----------------------------------------------------------\n";

    // Reset the gt comparer so we start couting at zero
    gt.reset();
    selection_sort(working, gt);
    cout << "Descending: " << working;
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";

    // -> Output:
    // Before: { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 }

    // Ascending: { -10, -3, -3, 0, 2, 4, 23, 23, 88, 100, 215 }
    // (55 comparisons, 7 swaps)
    // ----------------------------------------------------------
    // Descending: { 215, 100, 88, 23, 23, 4, 2, 0, -3, -3, -10 }
    // (55 comparisons, 5 swaps)
    // ----------------------------------------------------------
    // Descending: { 215, 100, 88, 23, 23, 4, 2, 0, -3, -3, -10 }
    // (55 comparisons, 0 swaps)
}
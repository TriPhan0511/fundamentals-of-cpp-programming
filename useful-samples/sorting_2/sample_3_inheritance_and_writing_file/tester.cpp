#include <iostream>
#include <vector>
#include "logcomparer.h"

using std::cout;
using std::vector;

// Overload the operator<< function
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
    os << " }" << '\n';
    return os;
}

bool less_than(int a, int b)
{
    return a < b;
}

bool greater_than(int a, int b)
{
    return a > b;
}

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

int main()
{    
    // Initialize a vector of integers
    // vector<int> original { 23, -3, 4, 215, 0, -3, 2 };

    // Create a vector of integers from an array
    int arr[] = { 23, -3, 4, 215, 0, -3, 2 };
    int len = (sizeof arr) / (sizeof arr[0]);
    vector<int> original(arr, arr + len);

    // Ascending sort
    vector<int> working = original;
    LogComparer lt(less_than, "ascendingsort.log");
    cout << "Before: " << working;
    selection_sort(working, lt);
    cout << "Ascending order: " << working;
    cout << "(" << lt.comparisons() << " comparisons, "
        << lt.swaps() << " swaps)" << '\n';

    // // Descending sort
    // working = original;
    // LogComparer gt(greater_than, "descendingsort.log");
    // cout << "Before: " << working;
    // selection_sort(working, gt);
    // cout << "Descending order: " << working;
    // cout << "(" << gt.comparisons() << " comparisons, "
    //     << gt.swaps() << " swaps)" << '\n';        
    
    // Descending sort
    working = original;
    // LogComparer *gt = new LogComparer(greater_than, "descendingsort.log");
    Comparer *gt = new LogComparer(greater_than, "descendingsort.log");
    cout << "Before: " << working;
    selection_sort(working, *gt);
    cout << "Descending order: " << working;
    cout << "(" << gt->comparisons() << " comparisons, "
        << gt->swaps() << " swaps)" << '\n';
    // Clean up memory
    delete gt;
}


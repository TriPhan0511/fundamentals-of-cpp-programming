#include <iostream>
#include <vector>
#include "comparer.h"

using std::cout;
using std::vector;

void print_vector(const vector<int>& v)
{
    cout << "{ ";
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << " }\n";
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
        for (int j = i + 1; j < size; j++)
        {
            if (comparer.compare(v[j], v[pos]))
            {
                pos = j;
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
    // Make a vector of integers from an array
    vector<int> original { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };

    // Make a working copy of the original vector
    vector<int> working = original;
    cout << "Before: ";
    print_vector(working);
    cout << '\n';

    Comparer lt(less_than);
    Comparer gt(greater_than);
    selection_sort(working, lt);
    cout << "Ascending: ";
    print_vector(working);
    cout << " (" << lt.comparisons() << " comparisons, "
        << lt.swaps() << " swaps)\n";
    cout << "-----------------------------------------\n";
    // Make another copy of the original vector
    working = original;
    cout << "Before: ";
    print_vector(working);
    selection_sort(working, gt);
    cout << "Descending: ";
    print_vector(working);
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
    cout << "-----------------------------------------\n";
    // Sort a sorted vector
    cout << "Before: ";
    print_vector(working);
    // Reset the gt comparer so we start counting at zero
    gt.reset();
    selection_sort(working, gt);
    cout << "Descending: ";
    print_vector(working);
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
}
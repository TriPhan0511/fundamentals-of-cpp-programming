#include <iostream>
#include <vector>
#include "comparer.h"

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
    os << " }\n";
    return os;
}

bool greater_than(int a, int b)
{
    return a > b;
}

bool less_than(int a, int b)
{
    return a < b;
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
    Comparer lt(less_than);
    Comparer gt(greater_than);
    vector<int> v { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
    vector<int> working = v;
    cout << "Initial:\n";
    cout << working;
    // Ascending order
    selection_sort(working, lt);
    cout << "Ascending order:\n";
    cout << working;
    cout << "( " << lt.comparisons() << " comparisons, "
        << lt.swaps() << " swaps)\n";
    cout << "-----------------------------\n";
    
    // Descending order
    working = v;
    cout << "Initial:\n";
    cout << working;
    selection_sort(working, gt);
    cout << "Descending order:\n";
    cout << working;
    cout << "( " << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
    cout << "-----------------------------\n";

    gt.reset();
    selection_sort(working, gt);
    cout << "Descending order:\n";
    cout << working;
    cout << "( " << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
    
    // -> Output:
    // Initial:
    // { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 }
    // Ascending order:
    // { -10, -3, -3, 0, 2, 4, 23, 23, 88, 100, 215 }
    // ( 55 comparisons, 7 swaps)
    // -----------------------------
    // Initial:
    // { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 }
    // Descending order:
    // { 215, 100, 88, 23, 23, 4, 2, 0, -3, -3, -10 }
    // ( 55 comparisons, 5 swaps)
    // -----------------------------
    // Descending order:
    // { 215, 100, 88, 23, 23, 4, 2, 0, -3, -3, -10 }
    // ( 55 comparisons, 0 swaps)
}
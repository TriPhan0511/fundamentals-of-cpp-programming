#include <iostream>
#include <vector>
#include <utility> // for std::swap

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
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    os << " }\n";
    return os;
}

// Selection sort
void selection_sort_1(vector<int>& v)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int k = i + 1; k < size; k++)
        {
            if (v[k] < v[pos])
            {
                pos = k;
            }
        }
        if (pos != i)
        {
            std::swap(v[pos], v[i]); // use std::swap
        }
    }
}

bool greater_than(int a, int b)
{
    return a > b;
}

bool less_than(int a, int b)
{
    return a < b;
}

void selection_sort(vector<int>& v, bool (*comp)(int, int))
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int k = i + 1; k < size; k++)
        {
            if (comp(v[k], v[pos]))
            {
                pos = k;
            }
        }
        if (pos != i)
        {
            std::swap(v[pos], v[i]); // use std::swap
        }
    }
}

int main()
{
    cout << '\n';
    
    vector<int> v{3, 1, 2, 5, 4};
    // Copy vector v
    vector<int> working = v;
    cout << "Initial:\n";
    cout << working;

    // Ascending order
    cout << "Ascending order:\n";
    selection_sort(working, less_than);
    cout << working;

    working = v;
    cout << "Initial:\n";
    cout << working;

    // Descending order
    cout << "Descending order:\n";
    selection_sort(working, greater_than);
    cout << working;

}
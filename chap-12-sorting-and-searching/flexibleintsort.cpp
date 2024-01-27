#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

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

/**
 * is_even(a)
 * Returns true if a is an even number; otherwise returns false.
*/
bool is_even(int a)
{
    return a % 2 == 0;
}

/**
 * selection_sort(v, compare)
 *  Arranges the elements of v in an order determined
 *  by the compare function.
 *  v is a vector of integers.
 *  compare is a function that compares the ordering of
 *  two integers.
*/
void selection_sort(vector<int>& v, bool (*compare)(int, int))
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (compare(v[j], v[pos]))
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            std::swap(v[pos], v[i]); // Use std::swap
        }
    }
}

// Sort
void sort(vector<int>& v, bool (*check_even)(int), bool (*compare)(int, int))
{
    vector<int> evens;
    vector<int> odds;
    for (auto e : v)
    {
        if (check_even(e))
        {
            evens.push_back(e);
        }
        else
        {
            odds.push_back(e);
        }
    }
    // Sort vectors
    selection_sort(evens, compare);
    selection_sort(odds, compare);
    // Push back into v
    v.clear();
    for (auto e : evens)
    {
        v.push_back(e);
    }
    for (auto e : odds)
    {
        v.push_back(e);
    }
}

/**
 * print
 *  Print the contents of a vector of integers.
 *  v is a vector to print.
 *  v is not modified
*/
void print(const vector<int>& v) 
{
    int size = v.size();
    cout << "{";
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
    cout << "}\n";
}

int main() 
{
    vector<int> numbers{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    cout << "Original: ";
    print(numbers);
    selection_sort(numbers, less_than);
    cout << "Ascending: ";
    print(numbers);
    selection_sort(numbers, greater_than);
    cout << "Descending: ";
    print(numbers);
}

// int main() 
// {
//     vector<int> numbers{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
//     cout << "Original: ";
//     print(numbers);
//     sort(numbers, is_even, less_than);
//     cout << "Ascending order and even numbers appear before odd numbers: ";
//     print(numbers);
//     sort(numbers, is_even, greater_than);
//     cout << "Descending order and even numbers appear before odd numbers: ";
//     print(numbers);
// }


#include <iostream>
#include <vector>
#include <string>
#include <utility> // for std::swap

using std::cout;
using std::string;
using std::vector;

template <typename T>
void swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T>
bool less_than(T x, T y)
{
    return x < y;
}

template <typename T>
bool greater_than(T x, T y)
{
    return x > y;
}

template <typename T>
void selection_sort(vector<T>& v, bool (*compare)(T, T))
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
            std::swap(v[pos], v[i]);
        }
    }
}

template <typename T>
void print(const vector<T>& v)
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
    // Integers
    vector<int> numbers{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    cout << "Original: ";
    print(numbers);
    selection_sort(numbers, less_than);
    cout << "Ascending: ";
    print(numbers);
    selection_sort(numbers, greater_than);
    cout << "Descending: ";
    print(numbers);

    // Doubles
    vector<double> numbers_2{23.5, -3.5, 4.5, 215.5, 0, -3.5, 2.5, 23.5, 100.5, 88.5, -10.5};
    cout << "Original: ";
    print(numbers_2);
    selection_sort(numbers_2, less_than);
    cout << "Ascending: ";
    print(numbers_2);
    selection_sort(numbers_2, greater_than);
    cout << "Descending: ";
    print(numbers_2);

    // Strings
    vector<string> names{"Peter Pan", "Harry Belly", "Alex Ferguson", "Chris Nolan"};
    cout << "Original: ";
    print(names);
    selection_sort(names, less_than);
    cout << "Ascending: ";
    print(names);
    selection_sort(names, greater_than);
    cout << "Descending: ";
    print(names);
}
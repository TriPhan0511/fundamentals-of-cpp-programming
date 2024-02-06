#include <iostream>
#include <vector>
// #include <utility>

using std::cout;
using std::vector;

void print_vector(const vector<int>& v)
{
    int size = v.size();
    cout << "{ ";
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

// Use reference variables
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Use pointers
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool less_than(int a, int b)
{
    return a < b;
}

bool greater_than(int a, int b)
{
    return a > b;
}

void bubble_sort(vector<int>& v, bool (*f)(int, int))
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (f(v[j], v[pos]))
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            std::swap(v[i], v[pos]); // use utility
            // swap(v[i], v[pos]); // use reference variables
            // swap2(&v[i], &v[pos]); // use pointers
        }
    }
    
}

int main()
{
    cout << '\n';
    vector<int> numbers{3, 5, 1, 2, 5, 7, 4, 6};
    print_vector(numbers);
    
    cout << "Ascending order:\n";
    bubble_sort(numbers, less_than);
    print_vector(numbers);
    
    cout << "Descending order:\n";
    bubble_sort(numbers, greater_than);
    print_vector(numbers);
}
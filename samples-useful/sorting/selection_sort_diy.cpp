#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

// Swap two elements in
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void print_vector(const vector<T>& v) {
    for (auto e : v)
    {
        cout << e <<  " ";
    }
    cout << '\n';
}

template <typename T>
bool is_less_than(T a, T b) {
    return a < b;
}

template <typename T>
bool is_greater_than(T a, T b) {
    return a > b;
}


template <typename T>
void selection_sort(vector<T>& v, bool (*comp)(T, T)) {
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < size; j++)
        {
            if (comp(v[j], v[small]))
            {
                small = j;
            }
        }
        if (small != i)
        {
            swap(v[small], v[i]);
        }
    }
}


int main() {
    vector<string> v{"Billy", "Cindy", "Alex", "Cell"};
    cout << "Initial:\n";
    print_vector(v);
    cout << "Ascending sorting:\n";
    selection_sort(v, is_less_than);
    print_vector(v);
    cout << "Descending sorting:\n";
    selection_sort(v, is_greater_than);
    print_vector(v);

    vector<int> v2{3, 2, 4, 5, 1}    ;
    cout << "Initial:\n";
    print_vector(v2);
    cout << "Ascending sorting:\n";
    selection_sort(v2, is_less_than);
    print_vector(v2);
    cout << "Descending sorting:\n";
    selection_sort(v2, is_greater_than);
    print_vector(v2);
}

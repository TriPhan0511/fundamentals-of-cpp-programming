// This program illustrates bubble sort algorithm ???
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print(const vector<int>& v) {
    cout << "v: ";
    for (auto elem : v)
    {
        cout << elem << " ";
    }
    cout << '\n';
}

void swap_int(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void sort_vector(vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (v[j] < v[smallest])
            {
                smallest = j;
            }
        }
        if (smallest != i)
        {
            swap_int(v[smallest], v[i]);
        }
        print(v);
    }
}

void sort_vector_0(vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (v[j] < v[smallest]) {
                smallest = j;
            }
        }
        if (smallest != i) {
            swap_int(v[smallest], v[i]);
        }
    }
}

void sort_vector_and_display_steps(vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size - 1; i++) {
        cout << "i = " << i << ":\n";
        int smallest = i;
        cout << "    smallest = " << smallest << '\n';
        cout << "    v[smallest] = " << v[smallest] << '\n';
        for (int j = i + 1; j < size; j++) {
            cout << "    j = " << j << ":\n";
            cout << "        v[j] = " << v[j] << ":\n";
            cout << "        smallest = " << smallest << ":\n";
            cout << "        v[smallest] = " << v[smallest] << ":\n";
            if (v[j] < v[smallest]) {
                smallest = j;
                cout << "        -> smallest = " << smallest << ":\n";
            }
        }
        if (smallest != i) {
            swap_int(v[smallest], v[i]);
        }
        cout << "    =>";
        print(v);
        cout << "\n";
    }
}

int main() {
    vector<int> v{1, 3, 5, 0, 7};
    cout << "Initial vector\n";
    print(v);
    cout << "\n";
    // Sort the vector
    sort_vector(v);
    // sort_vector_and_display_steps(v);
    // After sorting
    cout << "After sorting:\n";
    print(v);
}

// ----------------------------------------------------
// v: 0 3 5 1 7
// v: 0 1 5 3 7
// v: 0 1 3 5 7
// v: 0 1 3 5 7

// ----------------------------------------------------
// Initial vector
// v: 1 3 5 0 7 

// i = 0:
//     smallest = 0
//     v[smallest] = 1
//     j = 1:
//         v[j] = 3:
//         smallest = 0:
//         v[smallest] = 1:
//     j = 2:
//         v[j] = 5:
//         smallest = 0:
//         v[smallest] = 1:
//     j = 3:
//         v[j] = 0:
//         smallest = 0:
//         v[smallest] = 1:
//         -> smallest = 3:
//     j = 4:
//         v[j] = 7:
//         smallest = 3:
//         v[smallest] = 0:
//     =>v: 0 3 5 1 7

// i = 1:
//     smallest = 1
//     v[smallest] = 3
//     j = 2:
//         v[j] = 5:
//         smallest = 1:
//         v[smallest] = 3:
//     j = 3:
//         v[j] = 1:
//         smallest = 1:
//         v[smallest] = 3:
//         -> smallest = 3:
//     j = 4:
//         v[j] = 7:
//         smallest = 3:
//         v[smallest] = 1:
//     =>v: 0 1 5 3 7

// i = 2:
//     smallest = 2
//     v[smallest] = 5
//     j = 3:
//         v[j] = 3:
//         smallest = 2:
//         v[smallest] = 5:
//         -> smallest = 3:
//     j = 4:
//         v[j] = 7:
//         smallest = 3:
//         v[smallest] = 3:
//     =>v: 0 1 3 5 7

// i = 3:
//     smallest = 3
//     v[smallest] = 5
//     j = 4:
//         v[j] = 7:
//         smallest = 3:
//         v[smallest] = 5:
//     =>v: 0 1 3 5 7

// After sorting:
// v: 0 1 3 5 7

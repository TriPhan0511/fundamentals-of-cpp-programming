#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

// Using a pointer range
void print_2(int *begin, int *end)
{
    for (int *elem = begin; elem != end; elem++)
    {
        cout << *elem << " ";
    }
    cout << '\n';
}

int main()
{
    // Print an array
    int numbers[] = { 1, 2, 3, 4, 5};
    print(numbers, 5);
    
    // Use the function print_2(int *begin, int *end)
    print_2(numbers, numbers + 5);

    // Print a vector using the function print(const int a[], int n)
    // Note: "Unwrap" the array that the vector manages:
    // If vec is a vector, the expression &vec[0] is the address
    // of the first element within the vector.
    vector<int> vec {10, 20, 30, 40, 50, 60, 70, 80};
    print(&vec[0], vec.size());

    // Use the function print_2(int *begin, int *end)
    print_2(&vec[0], &vec[0] + vec.size());

    // Since the C++11 standard, the std::vector class has a 
    // method named data that returns a pointer to the 
    // first element of the array the vector manages. We can
    // rewrite the above statement as
    print_2(vec.data(), vec.data() + vec.size());

    // or better yet as
    auto p = vec.data();
    print_2(p, p + vec.size());

}
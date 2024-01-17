#include <iostream>

using std::cout;

void iterative_print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main()
{
    int numbers[] = {2, 4, 6, 8, 10};
    
    // Print out the contents of the array
    iterative_print(numbers, 5);
}
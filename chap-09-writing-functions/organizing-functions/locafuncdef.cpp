#include <iostream>

using std::cout;

// Global declarations available to all functions
// that follow the declaration
int two_times(int);
int three_times(int);

int main()
{
    cout << two_times(5) << '\n';
    cout << three_times(5) << '\n';
}

int three_times(int num)
{
    return two_times(num) + num;
}

int two_times(int num)
{
    return num * 2;
}
// Local declaration in main
#include <iostream>

using std::cout;

int main()
{
    int two_times(int);
    int three_times(int);
    cout << two_times(5) << '\n';
    cout << three_times(5) << '\n';
}

// The two_times function is not declared for three_times function
int three_times(int num)
{
    return two_times(num) + num; // Compile error
}

int two_times(int num)
{
    return num * 2;
}
#include <iostream>

using std::cout;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "a = " << a << '\n';
    cout << "*p = " << *p << '\n';
    cout << "p = " << p << '\n';
}
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double x = 0.9;
    x += 0.1;
    if (x == 1.0)
    {
        cout << "OK";
    }
    else
    {
        cout << "NOT OK";
    }
}

// -> OK
#include <iostream>

using std::cout;

class Assembly
{
public:
    int x;
};

int main()
{
    Assembly *ptr_a = new Assembly;

    cout << '\n';

    (*ptr_a).x = 5;
    cout << "x = " << (*ptr_a).x << '\n';
    cout << "x = " << ptr_a->x << '\n';

    ptr_a->x = 10;
    cout << "x = " << (*ptr_a).x << '\n';
    cout << "x = " << ptr_a->x << '\n';
}
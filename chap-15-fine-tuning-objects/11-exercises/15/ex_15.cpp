#include <iostream>

using std::cout;

class ValType
{
    int value;
public:
    ValType(int v): value(v) {}
    void set(int v)
    {
        value = v;
    }
    void show() const
    {
        cout << value << '\n';
    }
    friend int f(const ValType& x);
};

// a: Legal
// int f(const ValType& x)
// {
//     return 2 * x.value;
// }

// b: Illegal
// int g(const ValType& x)
// {
//     return 2 * x.value;
// }

// c: Legal
// int f(const ValType& x)
// {
//     x.show();
//     return 2 * x.value;
// }

// d: Legal
// int g(const ValType& x) 
// {
//     x.show();
//     return 0;
// }

// e: Illegal
// int f(const ValType& x, int n) 
// {
//     return n * x.value;
// }

int main()
{
    cout << "hello";
}
#include <iostream>

using std::cout;

class X
{
    int value1;
public:
    static int value2;
    int value3;
    X(): value1(5) {}
    void f()
    {
        value1 = 0;
    }
    static void g()
    {
        value2 = 0;
    }
};
int X::value2 = 3;

struct Y
{
    int quantity1;
    Y(): quantity1(5) {}
    void f()
    {
        quantity1 = 0;
    }
private:
    int quantity2;
};

int main()
{
    // cout << '\n';
    // cout << "hello";

    X x_obj;
    Y y_obj;

    // x_obj.value1 = 0;
    x_obj.value2 = 0; // legal
    x_obj.value3 = 0; // legal
    // X::value1 = 0;
    X::value2 = 0; // legal
    // X::value3 = 0;
    y_obj.quantity1 = 0; // legal
    // y_obj.quantity2 = 0;
    // Y::quantity1 = 0;
    // Y::quantity2 = 0;
    x_obj.f();// legal
    x_obj.g(); // legal
    // X::f();
    X::g(); // legal
}

/*
// (a) x_obj.value1 = 0;
(b) x_obj.value2 = 0; // legal
(c) x_obj.value3 = 0; // legal
// (d) X::value1 = 0;
(e) X::value2 = 0; // legal
// (f) X::value3 = 0;
(g) y_obj.quantity1 = 0; // legal
// (h) y_obj.quantity2 = 0;
// (i) Y::quantity1 = 0;
// (j) Y::quantity2 = 0;
(k) x_obj.f(); // legal
// (l) x_obj.g();
// (m) X::f();
(n) X::g(); // legal
*/
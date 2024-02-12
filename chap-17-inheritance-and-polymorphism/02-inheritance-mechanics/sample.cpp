#include <iostream>

using std::cout;

class B
{
public:
    void f();
};

void B::f()
{
    cout << "In function 'f'\n";
}

class D: B
// class D: public B
{
public:
    void g();
    void h(); // Note
};

void D::g()
{
    cout << "In function 'g'\n";
}

void D::h()
{
    f();
}



int main()
{
    B myB;
    D myD;
    myB.f();
    // myD.f();
    myD.g();
    myD.h();
}
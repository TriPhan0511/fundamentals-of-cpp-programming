// The following program demonstrates that rthe vtable pointer
// does occupy space within an object that contains a virtual method

#include <iostream>

// A class with no virtual methods
class NoVTable
{
    int data;
public:
    void set(int d) { data = d; }
    int get() { return data;}
};

// A class with virtual methods
class HasVTable
{
    int data;
public:
    virtual void set(int d) { data = d; }
    virtual int get() { return data; }
};

int main()
{
    NoVTable no_vtable;
    HasVTable has_vtable;
    no_vtable.set(10);
    has_vtable.set(10);
    std::cout << "no_vtable size = " << sizeof no_vtable << '\n';
    std::cout << "has_vtable size = " << sizeof has_vtable << '\n';
    // ->
    // no_vtable size = 4  
    // has_vtable size = 16
}
#include <iostream>

using std::cout;

class Base
{
public:
    virtual void display()
    {
        cout << "Base display()\n";
    }
};

class Derived: public Base
{
    void display() override
    {
        cout << "Derived display()\n";
    }
};

int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj; // Assigning address of derived class object to base class pointer
    ptr->display();
    
    // Output:
    // Derived display()
}

/*
    NOTE:
    In this example, ptr is a pointer of type Base* pointing to a Derived object. 
    When ptr->display() is called, it calls Derived::display() at runtime because 
    ptr is pointing to a Derived object. This behavior wouldn't be possible if 
    ptr were an object instead of a pointer.
*/
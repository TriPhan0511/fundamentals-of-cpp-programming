#include <iostream>

// Target interface
class Target
{
public:
    virtual void request() const = 0;
};

// Adaptee class
class Adaptee
{
public:
    void specific_request() const
    {
        std::cout << "Adaptee's specific_request() called." << '\n';
    }
};

// Object Adapter
class Adapter: public Target
{
    Adaptee *adaptee;
public:
    Adapter(Adaptee *a): adaptee(a) {}

    void request() const override
    {
        adaptee->specific_request();
    }
};

int main()
{
    Adaptee *adaptee = new Adaptee();
    Target *adapter = new Adapter(adaptee);
    adapter->request(); // -> Adaptee's specific_request() called.

    // Clean up memory
    delete adaptee;
    delete adapter;
}

// int main()
// {
//     Adaptee adaptee;
//     Adapter adapter(&adaptee);
//     adapter.request(); // -> Adaptee's specific_request() called.
// }
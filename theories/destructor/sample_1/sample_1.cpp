#include <iostream>

class MyClass
{
public:
    // Constructor
    MyClass()
    {
        std::cout << "Contructor called\n";
    }

    // Destructor
    ~MyClass()
    {
        std::cout << "Destructor called\n";
    }
};

int main()
{
    std::cout << '\n';
    std::cout << "Creating object..." << '\n';
    MyClass obj; // Constructor called

    std::cout << "Object is about to be destroyed..." << '\n';
    // Destructor called when obj goes out of scope at the end of main()

    // -> Output:
    // Creating object...
    // Contructor called
    // Object is about to be destroyed...
    // Destructor called
}
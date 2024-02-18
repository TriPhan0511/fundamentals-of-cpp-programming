#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // No user-defined destructor
    // The compiler will provide a default destructor

    // Other member functions...
};

int main() {
    std::cout << "Creating object..." << std::endl;
    MyClass obj; // Constructor called

    std::cout << "Object is about to be destroyed..." << std::endl;
    // Compiler-provided default destructor called when obj goes out of scope at the end of main()

    return 0;

    // -> Output:
    // Creating object...
    // Constructor called
    // Object is about to be destroyed...
}

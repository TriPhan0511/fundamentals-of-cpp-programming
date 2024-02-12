// The following code demonstrates the automatic execution of constructors and destructors
// when objects are created and destroyed, respectively.

#include <iostream>

using std::cout;

class Test
{
public:
    Test() 
    {
        cout << "\nConstructor executed\n";
    }

    // Destructor
    ~Test()
    {
        cout << "DESTRUCTOR executed\n";
    }
};

int main()
{
    Test t;
}
// ->
// Constructor executed
// DESTRUCTOR executed

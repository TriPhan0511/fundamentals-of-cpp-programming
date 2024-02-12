// The following code demonstrates the automatic excution of constructor
// and destructor when multiple objects are created

#include <iostream>

using std::cout;

class Test
{
public:
    Test()
    {
        cout << "Constructor executed.\n";
    }

    // Destructor
    ~Test()
    {
        cout << "Destructor executed.\n";
    }
};

int main()
{
    Test t1, t2, t3;
}
// ->
// Constructor executed.
// Constructor executed.
// Constructor executed.
// Destructor executed. 
// Destructor executed. 
// Destructor executed.
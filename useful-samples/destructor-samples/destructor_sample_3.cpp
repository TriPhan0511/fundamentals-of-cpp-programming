/*
    NOTE:
    Objects are destroyed in the reverse order of their creaation.
    In this case, t3 is the firts to be destroyed, while t1 is the last.
*/

#include <iostream>

class Test
{
    static int count;
    int i;
public:
    Test()
    {
        count++;
        i = count;
        std::cout << "Object " << i << " constructor executed.\n";
    }

    ~Test()
    {
        std::cout  << "Object " << i << " DESTRUCTOR executed.\n";
    }
};

int Test::count = 0;

int main()
{
    std::cout << '\n';
    Test t1, t2, t3;
}
// ->
// Object 1 constructor executed.
// Object 2 constructor executed.
// Object 3 constructor executed.
// Object 3 DESTRUCTOR executed.
// Object 2 DESTRUCTOR executed.
// Object 1 DESTRUCTOR executed.

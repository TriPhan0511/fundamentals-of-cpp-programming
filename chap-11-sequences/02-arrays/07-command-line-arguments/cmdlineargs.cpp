// Note: Compile and run the program:
// g++ -o cmdlineargs cmdlineargs.cpp
// ./cmdlineargs -h 45 extra

#include <iostream>

using std::cout;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << '[' << argv[i] << "]\n";
    }
}
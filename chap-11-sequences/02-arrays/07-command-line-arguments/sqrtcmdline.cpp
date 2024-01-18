// Note: Compile and run the program:
// g++ -o sqrtcmdline sqrtcmdline.cpp
// ./sqrtcmdline
// -> Supply range of values

// ./sqrtcmdline 2
// -> Supply range of values

// ./sqrtcmdline 2 10
// ->
// 2 1.41421
// 3 1.73205
// 4 2
// 5 2.23607
// 6 2.44949
// 7 2.64575
// 8 2.82843
// 9 3
// 10 3.16228

#include <iostream>
#include <sstream>
#include <cmath>

using std::cout;
using std::stringstream;

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "Supply range of values\n";
    }
    else
    {
        // Since the command-line arguments are strings, not integers, 
        // the program must convert the string parameters into their 
        // integer equivalents.
        int start;
        int stop;
        stringstream st(argv[1]);
        stringstream sp(argv[2]);
        st >> start;
        sp >> stop;
        for (int i = start; i <= stop; i++)
        {
            cout << i << " " << sqrt(i) << '\n';
        }
    }
}
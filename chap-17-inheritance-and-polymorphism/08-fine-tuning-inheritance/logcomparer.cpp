#include <cstdlib>
#include <iostream>
#include "logcomparer.h"

// Method that actually performs the comparison
bool LogComparer::compare_impl(int a, int b)
{
    fout << "Comparing " << a << " to " << b << '\n';
    // Base class method does the comparison
    return Comparer::compare_impl(a, b);
}

// Method that actually perform swap
void LogComparer::swap_impl(int& a, int& b)
{
    fout << "Swapping " << a << " and " << b << '\n';
    int temp = a;
    a = b;
    b = temp;
}

// The client must initialize a LogComparer object with a
// suitable comparison function and the file name of a text
// file to which the object will direct logging messages
LogComparer::LogComparer(bool (*f)(int, int), const std::string& filename):
    Comparer::Comparer(f)
{
    fout.open(filename);
    if (!fout.good())
    {
        std::cout << "Could not open log file " << filename 
            << " for writing\n";
        exit(1); // Terminate the program
    }
    // fout is an instance variable, not a local variable,
    // so the file stays open when the constructor finishes
}

// The destructor must close the log file
LogComparer::~LogComparer()
{
    fout.close();
}
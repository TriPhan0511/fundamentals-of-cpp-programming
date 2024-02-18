#include <iostream>
#include "logcomparer.h"

bool LogComparer::compare_impl(int a, int b)
{
    fout << "Comparing " << a << " to " << b << '\n';
    return Comparer::compare_impl(a, b);
}

void LogComparer::swap_impl(int& a, int& b)
{
    fout << "Swapping " << a << " and " << b << '\n';
    int temp = a;
    a = b;
    b = temp;
}

LogComparer::LogComparer(bool (*f)(int, int),
                         const std::string& file_name):
    Comparer(f)
{
    fout.open(file_name);
    if (!fout.is_open())
    {
        std::cerr << "Error: Unable to open file " << file_name << '\n';
        exit(1); // Terminate the program
    }
    // fout is an instance variable, not a local variable,
    // so the file stays open when the constructor finishes
}

LogComparer::~LogComparer()
{
    if (fout.is_open())
    {
        fout.close();
        std::cout << "File closed successfully." << '\n';
    }
}
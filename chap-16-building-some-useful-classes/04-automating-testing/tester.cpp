#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "tester.h"

using std::cout;
using std::vector;
using std::string;

Tester::Tester(): error_count(0), total_count(0)
{
    cout << "+---------------------------------------\n";
    cout << "| Testing \n";
    cout << "+---------------------------------------\n";
}

// d1 and d2 are "equal" if their difference is less than
// a specified tolerance
bool Tester::equals(double d1, double d2, double tolerance) const
{
    return d1 == d2 || fabs(d1 - d2) < tolerance;
}

// Prints the contents of a vector of integers
void Tester::print_vector(const vector<int>& v)
{
    cout << "{";
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else 
        {
            cout << v[i] << ", ";
        }
    }
    cout << "}\n";
}

// Compare integer outcomes
void Tester::check_equals(const string& msg,
    int expected, int actual)
{
    total_count++; // Count this test
    cout << "[" << msg << "] ";
    if (expected == actual)
    {
        cout << "OK\n";
    }
    else
    {
        error_count++; // Count this failed test
        cout << "*** Failed! Expected: " << expected
            << ", actual: " << actual << '\n';
    }
}

// Compare double-precision floating-point outcomes
void Tester::check_equals(const string& msg, double expected,
        double actual, double tolerance)
{
    total_count++; // Count this test
    cout << "[" << msg << "] ";
    if (equals(expected, actual, tolerance))
    {
        cout << "OK\n";
    }
    else
    {
        error_count++; // Count this failed test
        cout << "*** Failed! Expected: " << expected
            << ", actual: " << actual << '\n';
    }
}

// Compare vector outcomes
void Tester::check_equals(const string& msg, 
    const vector<int>& expected,
    const vector<int>& actual) 
{    
    total_count++; // Count this test
    cout << "[" << msg << "] ";
    if (expected == actual)
    {
        cout << "OK\n";
    }
    else
    {
        error_count++; // Count this failed test
        cout << "*** Failed! Expected: ";
        print_vector(expected);
        cout << " Actual: ";
        print_vector(actual);
    }
}

// Display final test statistics
void Tester::report_results() const
{
    std::cout << "+--------------------------------------\n";
    std::cout << "| " << total_count << " tests run, "
    << total_count - error_count << " passed, "
    << error_count << " failed\n";
    std::cout << "+--------------------------------------\n";
}
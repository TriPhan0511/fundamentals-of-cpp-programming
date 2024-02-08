#include <iostream>
#include <vector>
#include <string>
#include <cmath> // for fabs()
#include "tester.h"

using std::cout;
using std::vector;
using std::string;

Tester::Tester(): error_count(0), total_count(0) {}

bool Tester::equals(double a, double b, double tolerance)
{
    return (a == b) || fabs(a - b) < tolerance;
}

void Tester::print_vector(const vector<int>& v)
    {
        cout << "{ ";
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
        cout << " }\n";
    }

void Tester::report() const
{
    cout << "Error count: " << error_count << '\n';
    cout << "Total count: " << total_count << '\n';
}

void Tester::check_equals(const string& msg, int expected, int actual)
// void Tester::check_equals(string msg, int expected, int actual)
{
    cout << msg;
    if (expected == actual)
    {
        cout << "Passed.\n";
    }
    else
    {
        cout << "*** Failed. Expected: " << expected
            << ", but actual: " << actual << '\n';
    }
}

void Tester::check_equals(const string& msg, double expected, 
        double actual, double tolerance)
{
    cout << msg;
    if (expected == actual)
    {
        cout << "Passed.\n";
    }
    else
    {
        cout << "*** Failed. Expected: " << expected
            << ", but actual: " << actual << '\n';
    }
}

void Tester::check_equals(const string& msg, 
        const vector<int>& expected, 
        const vector<int>& actual)
{
    cout << msg;
    if (expected == actual)
    {
        cout << "Passed.\n";
    }
    else
    {
        cout << "*** Failed. Expected: ";
        print_vector(expected);
        cout << ", but actual: ";
        print_vector(actual);
    }
}
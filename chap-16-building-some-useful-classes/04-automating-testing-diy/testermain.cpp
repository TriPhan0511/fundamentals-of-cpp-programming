#include <iostream>
#include <vector>
#include <string>
#include "tester.h"

using std::cout;
using std::vector;

// Bug: not implement yet
void sort(vector<int>& v)
{
    // Not implement yet.
}

// Bug: Start from the second element
int sum(const vector<int>& v)
{
    int result = 0;
    int size = v.size();
    for (int i = 1; i < size; i++)
    {
        result += v[i];
    }
    return result;
}

int main()
{
    Tester t;
    vector<int> v {1, 3, 2};
    sort(v);
    t.check_equals("Sort Testing #1: ", {1, 3, 2}, v);
    t.check_equals("Sort Testing #2: ", {1, 2, 3}, v);
    t.check_equals("Sum Testing #1: ", 5, sum({0, 2, 3}));
    t.check_equals("Sum Testing #2: ", 7, sum({2, 2, 3}));
    t.check_equals("Double-precision floating-point number testing #1: ",
        1.01, 1.0133, 0.0001);
    t.check_equals("Double-precision floating-point number testing #2: ",
        1.01, 1.01, 0.0001);
}
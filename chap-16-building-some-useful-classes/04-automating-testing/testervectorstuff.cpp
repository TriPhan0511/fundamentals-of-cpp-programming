#include <iostream>
#include <vector>
#include "tester.h"

using std::cout;
using std::vector;

// sort has a bug (it does not do anything)
void sort(vector<int> v)
{
    // Not yet implemented
}

// sum has a bug (misses first element)
int sum(const vector<int>& v)
{
    int total = 0;
    int size = v.size();
    for (int i = 1; i < size; i++)
    {
        total += v[i];
    }
    return total;
}

int main()
{
    Tester t; // Declare a test object
    // Some test cases to test sort
    vector<int> v {4, 2, 3};
    sort(v);
    t.check_equals("Sort test #1", {2, 3, 4}, v);
    v = {2, 3, 4};
    sort(v);
    t.check_equals("Sort test #2", {2, 3, 4}, v);
    // Some test cases to test sum
    t.check_equals("Sum test #1", sum({0, 3, 4}), 7);
    t.check_equals("Sum test #1", sum({-3, 0, 5}), 2);
    t.report_results();
    // ->
    // +---------------------------------------
    // | Testing
    // +---------------------------------------
    // [Sort test #1] *** Failed! Expected: {2, 3, 4}
    // Actual: {4, 2, 3}
    // [Sort test #2] OK
    // [Sum test #1] OK
    // [Sum test #1] *** Failed! Expected: 5, actual: 2
    // +--------------------------------------
    // | 4 tests run, 2 passed, 2 failed
    // +--------------------------------------
}
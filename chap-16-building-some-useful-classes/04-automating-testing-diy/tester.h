#ifndef TESTER_H_
#define TESTER_H_

#include <string>
#include <vector>

using std::vector;
using std::string;

class Tester
{
    int error_count;
    int total_count;
    bool equals(double a, double b, double tolerance);
    void print_vector(const vector<int>& v);
    
public:
    Tester();
    void report() const;
    void check_equals(const string& msg, int expected, int actual);
    void check_equals(const string& msg, double expected, 
        double actual, double tolerance);
    void check_equals(const string& msg, 
        const vector<int>& expected, 
        const vector<int>& actual);
};

#endif
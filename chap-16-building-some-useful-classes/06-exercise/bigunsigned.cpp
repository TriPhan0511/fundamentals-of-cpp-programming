#include <iostream>
#include <vector>
#include <string>
#include "bigunsigned.h"

using std::cout;
using std::vector;

BigUnsigned::BigUnsigned(): v({0}) {};

BigUnsigned::BigUnsigned(unsigned int number): v(parse_unsigned_int(number)) {}

BigUnsigned::BigUnsigned(const BigUnsigned& big): v(big.v) {}

BigUnsigned::BigUnsigned(std::string str) 
{
    unsigned int num = 0;
    try
    {
        num = std::stoi(str);
    }
    catch (const std::invalid_argument& e)
    {
        // std::cerr << "Invalid argument: " << e.what() << '\n';
    }
    catch (const std::out_of_range& e)
    {
        // std::cerr << "Out of range: " << e.what() << '\n';
    }
    this->v = {num};
}

vector<unsigned int> BigUnsigned::parse_unsigned_int(unsigned int number)
{
    vector<unsigned int> v;
    vector<unsigned int> result;
    unsigned int remainder = 0;
    while (number != 0)
    {
        remainder = number % 10;
        v.push_back(remainder);
        number = number / 10;
    }

    int size = v.size();
    for (int i = size - 1; i >= 0; i--)
    {
        result.push_back(v[i]);
    }
    
    return result;
}

unsigned int BigUnsigned::parse_vector()
{
    unsigned int result = 0;
    unsigned int c = 1;
    int size = this->v.size();
    for (int i = size - 1; i >= 0; i--)
    {
        result += this->v[i] * c;
        c *= 10;
    }
    return result;
}




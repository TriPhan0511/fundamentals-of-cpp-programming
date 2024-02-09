#ifndef BIGUNSIGNED_H_
#define BIGUNSIGNED_H_

#include <vector>
#include <string>

using std::vector;

class BigUnsigned
{
    vector<unsigned int> v;
    vector<unsigned int> parse_unsigned_int(unsigned int number);
    unsigned int parse_vector();
public:
    BigUnsigned();
    BigUnsigned(unsigned int number);
    BigUnsigned(const BigUnsigned& big);
    BigUnsigned(std::string str);
    friend int operator+(BigUnsigned big1, BigUnsigned big2);
    friend std::ostream& operator<<(std::ostream& os, const BigUnsigned& bigunsigned);
};

#endif
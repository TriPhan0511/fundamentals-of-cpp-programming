#include "bigunsigned.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Print a BigUnsigned object
std::ostream& operator<<(std::ostream& os, const BigUnsigned& big)
{
    
    for (auto elem : big.v)
    {
        os << elem;
    }
    os << '\n';
    return os;
}

int operator+(BigUnsigned big1, BigUnsigned big2)
{
    return big1.parse_vector() + big2.parse_vector();
}

int main()
{
    // BigUnsigned big;
    BigUnsigned big(49114305);
    // cout << big;
    // BigUnsigned big2(10);
    // cout << (big + big2);

    // BigUnsigned big3(big);
    // cout << big3;

    // BigUnsigned big4("hello");
    // BigUnsigned big4("123 hello");
    BigUnsigned big4("456");
    cout << big4;
}
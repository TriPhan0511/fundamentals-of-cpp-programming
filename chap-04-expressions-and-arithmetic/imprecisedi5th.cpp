#include <iostream>

int main()
{
    double one = 1.0;
    double one_fifth = 1.0 / 5.0;
    double zero = one - one_fifth - one_fifth 
            - one_fifth - one_fifth - one_fifth; 

    std::cout << "one = " << one 
        << ", one_fifth = " << one_fifth 
        << ", zero = " << zero;
    // -> one = 1, one_fifth = 0.2, zero = 5.55112e-17
}
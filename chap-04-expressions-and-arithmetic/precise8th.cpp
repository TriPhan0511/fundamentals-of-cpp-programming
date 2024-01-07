#include <iostream>

int main()
{
    double one = 1.0;
    double one_eighth = 1.0 / 8.0;
    double zero = one - one_eighth - one_eighth 
            - one_eighth - one_eighth - one_eighth 
            - one_eighth - one_eighth - one_eighth;

    std::cout << "one = " << one 
        << ", one_eight = " << one_eighth 
        << ", zero = " << zero;
    // -> one = 1, one_eight = 0.125, zero = 0
}
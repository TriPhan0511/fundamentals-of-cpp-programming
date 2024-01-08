#include <iostream>
#include <iomanip>

// Print the powers of 10 from 1 to 1,000,000,000
int main()
{
    int power = 1;
    while (power <= 1000000000)
    {
        // Right justify each number in a field 10 wide
        std::cout << std::setw(10) << power << '\n';
        power *= 10;
    }
    // ->
    //         1
    //         10
    //        100
    //       1000
    //      10000
    //     100000
    //    1000000
    //   10000000
    //  100000000
    // 1000000000

    // std::cout << std::setw(3) << 1 << '\n';
    // std::cout << std::setw(3) << 21 << '\n';
    // std::cout << std::setw(3) << 321 << '\n';
 
}

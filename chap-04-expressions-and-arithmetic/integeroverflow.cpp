#include <iostream>

int main()
{
    // Note: Adding one to the largest representable value 
    // produces the smallest negative value.
    int x = 2147483645; // Almost the largest possible int value
    std::cout << x << " + 1 = " << x + 1 << '\n';
    std::cout << x << " + 2 = " << x + 2 << '\n';
    std::cout << x << " + 3 = " << x + 3 << '\n';
    // ->
    // 2147483645 + 1 = 2147483646 
    // 2147483645 + 2 = 2147483647 
    // 2147483645 + 3 = -2147483648
}
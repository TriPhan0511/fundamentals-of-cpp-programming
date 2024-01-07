#include <iostream>

int main(){
    unsigned x = 4294967293; // Almost the largest possible unsigned value
    std::cout << x << " + 1 = " << x + 1 << '\n';
    std::cout << x << " + 2 = " << x + 2 << '\n';
    std::cout << x << " + 3 = " << x + 3 << '\n';
    // ->
    // 4294967293 + 1 = 4294967294
    // 4294967293 + 2 = 4294967295
    // 4294967293 + 3 = 0
}
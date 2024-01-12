// Function definition precedes main where the function is called
#include <iostream>

int twice(int num)
{
    return num * 2;
}

int main()
{
    std::cout << twice(5);
}
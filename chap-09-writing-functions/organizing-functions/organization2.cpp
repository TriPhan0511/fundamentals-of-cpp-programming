// Function declaration precedes main; function definition follows main
#include <iostream>

int twice(int); // Declare function named twice

int main()
{
    std::cout << twice(5);
}

int twice(int num)
{
    return num * 2;
}


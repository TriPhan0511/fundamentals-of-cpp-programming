// Function declaration local to main; function definition follows main
#include <iostream>


int main()
{
    int twice(int); // twice function available anywhere in main
    std::cout << twice(5);
}

int twice(int num)
{
    return num * 2;
}


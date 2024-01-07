#include <iostream>

int main()
{
    int dividend;
    int divisor;
    std::cout << "Enter two integers to divide: ";
    std::cin >> dividend >> divisor;
    if (divisor != 0)
    {
        std::cout << dividend << " / " << divisor << " = " 
            << dividend / divisor;
    }
    
}
#include <iostream>

int main()
{
    int value;
    std::cout << "Please enter an integer value in the range 0..10: ";
    std::cin >> value;
    if (value >= 0)
    {
        if (value <= 10)
        {
            std::cout << "is acceptable";
        }
        else
        {
            std::cout << "is too large";
        }
    }
    else
    {
        std::cout << "is too small";
    }
    
}
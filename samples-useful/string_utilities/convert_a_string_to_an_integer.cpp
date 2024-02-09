/*
    NOTE:
    If the string contains non-numeric characters or if the value of 
    the string is out of the range representable by an integer, 
    std::stoi will throw a std::invalid_argument or std::out_of_range exception. 
    You can handle these exceptions using try-catch blocks if necessary.
*/

#include <iostream>
#include <string>
#include <stdexcept> // For std::invalid_argument and std::out_of_range

int main() 
{
    // std::string str = "123";
    // std::string str = "q1w234abc";
    std::string str = "1111111111111111111";

    try
    {
        int num = std::stoi(str);
        std::cout << "The integer value is: " << num << '\n';
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << "Invalid argument: " << e.what() << '\n';
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << "Out of range: " << e.what() << '\n';
    }

    return 0;
}

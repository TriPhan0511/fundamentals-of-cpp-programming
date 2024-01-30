#include <iostream>
#include <string>

using std::string;

class Account
{
    string name;
    int id;
    double balance;
public:
    void deposit(double amt)
    {
        balance += amt;
    }

    bool withdraw(double amt)
    {
        bool result = false; // Unsuccessful by default
        if (balance - amt >= 0)
        {
            balance -= amt;
            result = true; // Success
        }
        return result;
    }
};

int main()
{
    std::cout << "hello";    
}
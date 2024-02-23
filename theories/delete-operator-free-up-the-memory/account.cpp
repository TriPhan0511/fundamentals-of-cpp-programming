#include "account.h"

Account::Account(std::string n, int number, double amt):
    name(n), id(number), balance(amt) {}

void Account::display() const
{
    std::cout << "{ " << name << ", " << id 
        << ", " << balance  << " }";
}
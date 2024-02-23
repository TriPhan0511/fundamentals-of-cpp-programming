#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
private:
    std::string name;
    int id;
    double balance;
public:
    Account(std::string n, int number, double amt);
    void display() const;
};

#endif
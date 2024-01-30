#include <iostream>
#include <string>

using std::cout;
using std::string;

class Account
{
    string name;
    int id;
    double balance;
public:
    // Initialize a bank account object
    Account(const string& customer_name, 
        int account_number, 
        double amount): 
        name(customer_name),
        id(account_number),
        balance(amount)
    {
        if (amount < 0)
        {
            cout << "Warning: negative account balance\n";
            balance = 0.0;
        }
    }

    // Display
    void display()
    {
        cout << "Name: " << name
            << ", ID: " << id
            << ", Balance: " << balance << '\n';
    }

    // Deposit
    void deposit(double amt)
    {
        if (amt > 0)
        {
            balance += amt;
        }
    }

    // Withdraw
    bool withdraw(double amt)
    {
        bool result = false;
        if (balance - amt >= 0)
        {
            balance -= amt;
            result = true;
        }
        return result;
    }
};

int main()
{
    // Account acct1("Joe", 2312, 1000.0);
    // Account acct2("Moe", 2313, 500.29);
    Account acct1{"Joe", 2312, 1000.0};
    Account acct2{"Moe", 2313, 500.29};
    acct1.display();
    acct2.display();
    Account acct3("Alex", 2314, -10);
    acct3.display();
    cout << "--------------------------------\n";
    acct1.withdraw(800.00);
    acct2.deposit(22.00);
    acct1.display();
    acct2.display();
}
// int main()
// {
//     Account acct1("Joe", 2312, 1000.0);
//     Account acct2("Moe", 2313, 500.29);
//     acct1.display();
//     acct2.display();
//     cout << "--------------------------------\n";
//     acct1.withdraw(800.00);
//     acct2.deposit(22.00);
//     acct1.display();
//     acct2.display();
// }
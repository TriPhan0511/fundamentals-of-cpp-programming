#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class BankAccount 
{
    public:
        int id;
        string name;
        double balance;
};

void print_accounts(const vector<BankAccount>& accounts)
{
    for (auto acc : accounts)
    {
        cout << acc.name 
            << "," << acc.id 
            << "," << acc.balance << '\n';
    }
}

void add_balance(vector<BankAccount>& accounts, 
    int id, string name, double balance)
{
    BankAccount acc;
    acc.id = id;
    acc.name = name;
    acc.balance = balance;
    accounts.push_back(acc);
}

void menu()
{
    bool done = false;
    char command;
    while (!done)
    {
        cout << "[A]dd [N]ame [I]D [B]alance [Q]uit==> ";
        cin >> command;
        switch (command)
        {
        case 'A':
        case 'a':
            cout << command << '\n';
            break;
        case 'N':
        case 'n':
            cout << command << '\n';
            break;
        case 'I':
        case 'i':
            cout << command << '\n';
            break;
        case 'B':
        case 'b':
            cout << command << '\n';
            break;
        case 'Q':
        case 'q':
            cout << command << '\n';
            done = true;
            break;
        default:
            cout << "Wrong input. Please try again.\n";
            break;
        }
    }
    
}

int main()
{
    // menu();

    BankAccount acc1;
    acc1.name = "Garry";
    acc1.id = 11;
    acc1.balance = 55.05;
    BankAccount acc2;
    acc2.name = "Marry";
    acc2.id = 10;
    acc2.balance = 1323;
    BankAccount acc3;
    acc3.name = "Sheri";
    acc3.id = 34;
    acc3.balance = 100.34;
    BankAccount acc4;
    acc4.name = "Terry";
    acc4.id = 33;
    acc4.balance = 423.5;
    vector<BankAccount> accounts { acc1, acc2, acc3, acc4 };
    print_accounts(accounts);
}
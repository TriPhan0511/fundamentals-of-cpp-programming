#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Account {
public:
    // String representing the name of the account's owner   
    string name;
    // The account number
    int id;
    // The current account balance
    double balance;
};

// Allow the user to enter via the keyboard information
// about an account and add that account to the database
void add_acount(vector<Account>& accounts) {
    Account account;
    string name;
    int id;
    double amount;
    cout << "Enter name, account number, and account balance: ";
    cin >> name >> id >> amount;
    account.name = name;
    account.id = id;
    account.balance = amount;
    accounts.push_back(account);
}

// Print all the accounts in the database
void print_accounts(const vector<Account>& accounts) {
    for (auto account : accounts)
    {
        cout << account.name 
             << ", " << account.id 
             << ", " << account.balance << '\n';
    }
}

void swap(Account& acc1, Account& acc2) {
    Account temp = acc1;
    acc1 = acc2;
    acc2 = temp;
}

bool less_than_by_name(const Account& acc1, const Account& acc2) {
    return acc1.name < acc2.name;
}

bool less_than_by_id(const Account& acc1, const Account& acc2) {
    return acc1.id < acc2.id;
}

bool less_than_by_balance(const Account& acc1, const Account& acc2) {
    return acc1.balance < acc2.balance;
}

// Sorts a bank account database into ascending order
// The comp parameter determines the ordering
void sort(vector<Account>& accounts,
          bool (*comp)(const Account&, const Account&)) {
    int size = accounts.size();
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int  j = i + 1; j < size; j++) {
            if (comp(accounts[j], accounts[smallest])) {
                smallest = j;
            }
        }
        if (smallest != i) {
            swap(accounts[i], accounts[smallest]);
        }
    }
}

int main() {
    vector<Account> customers;
    char command;
    bool done = false;
    do
    {
        cout << "[A]dd [N]ame [I]D [B]alance [Q]uit: ";
        cin >> command;
        switch (command) {
            case 'A':
            case 'a':
                // Add an account
                add_acount(customers);
                break;
            case 'P':
            case 'p':
                // Print customer database
                print_accounts(customers);
                break;
            case 'N':
            case 'n':
                // Sort database by name
                sort(customers, less_than_by_name);
                print_accounts(customers);
                break;
            case 'I':
            case 'i':
                // Sort database by id (account number)
                sort(customers, less_than_by_id);
                print_accounts(customers);
                break;
            case 'B':
            case 'b':
                // Sort database by balance
                sort(customers, less_than_by_balance);
                print_accounts(customers);
                break;
            case 'Q':
            case 'q':
                done = true;
                break;
            default:
                cout << "Wrong input. Please try again!\n";
                break;
        }
    } while (!done);
    
}
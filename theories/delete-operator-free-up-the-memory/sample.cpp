#include <iostream>
#include <vector>
#include <string>
#include "account.h"

using std::cout;
using std::cin;
using std::vector;

void print_array(int a[], int size)
{
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << a[i];
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
    cout << " }\n";
}

// 1. Free up the dynamic memory allocated for an array
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int size = (sizeof a) / (sizeof a[0]);
//     int *p = new int[size];
//     // Copy from a to p
//     for (int i = 0; i < size; i++)
//     {
//         p[i] = a[i];
//     }
    
//     print_array(a, size);
//     print_array(p, size);

//     // Free up the memory
//     delete [] p;
// }
// -------------------------------------------------------------------

// 2. Free up the single dynamically allocated object
// int main()
// {
//     Account *p = new Account("Joe", 400, 1300.0);
//     p->display();
//     delete p; // Free up the memory
// }
// -------------------------------------------------------------------

// 3. Free up the dynamic memory held by each objects in a vector
int main()
{
    std::string name;
    int id;
    double balance;    
    vector<Account *> accts(2);
    int size = accts.size();
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name, id, balance: ";
        cin >> name >> id >> balance;
        accts[i] = new Account(name, id, balance);
    }

    // Print the contents of the vector accts
    for (const auto p: accts)
    {
        p->display();
        cout << '\n';
    }
    
    // Free up the memory
    for (auto e : accts)
    {
        delete e;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     delete accts[i];
    // }
    
}

// NOTE: 
// An alternative approach that avoids pointers uses the vector push_back method 
// to add objects one at a time, as shown here:

// int main()
// {
//     std::string name;
//     int id;
//     double balance;    
//     vector<Account> accts;
//     for (int i = 0; i < 2; i++)
//     {
//         cout << "Enter name, id, balance: ";
//         cin >> name >> id >> balance;
//         accts.push_back(Account(name, id, balance));
//     }

//     // Print the contents of the vector accts
//     for (const auto e : accts)
//     {
//         e.display();
//         cout << '\n';
//     }
// }
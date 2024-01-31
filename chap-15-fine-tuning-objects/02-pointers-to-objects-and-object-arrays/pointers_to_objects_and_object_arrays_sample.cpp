#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Point
{
public:
    double x;
    double y;
};

class Account 
{
    string name;
    int id;
    double balance;
public:
    Account(string n, int num, double amt): name(n), id(num), balance(amt) {}

    void deposit(double amt)
    {
        balance += amt;
    }

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

    void display()
    {
        cout << name << "," << id << "," << balance;
    }

    void set_name(string value)
    {
        name = value;
    }
};

// The following function has a logic error because 
// it fails to free up memory allocated with new:
void faulty_func()
{
    Account *acct_ptr = new Account("Joe", 400, 1300.0);
    if (acct_ptr->withdraw(10.0))
    {
        cout << "Withdraw successful\n";
    }
    else
    {
        cout << "Insufficient funds\n";
    }
    acct_ptr->display();
}

/*
Here, acct_ptr is a local variable, so it occupies space on the stack. 
It represents a simple address, essentially a number. The space for the acct_ptr variable 
is automatically deallocated when faulty_func completes. The problem is acct_ptr points to 
memory that was allocated with new, and this memory is not freed up within the function. 
The pointer acct_ptr is the only way to get to that memory, so when the function is finished, 
that memory is lost for the life of the program. The condition is known as a memory leak. 
If the program runs to completion quickly, the leak may go undetected. In a longer 
running program such as a web server, memory leaks can cause the program to crash after 
a period of time. The problem arises when code that leaks memory is executed repeatedly 
and eventually all of available memory becomes used up.
*/

// The corrected function would be written
void corrected_func()
{
    Account *acct_ptr = new Account("Joe", 400, 1300.0);
    if (acct_ptr->withdraw(10.0))
    {
        cout << "Withdraw successful\n";
    }
    else
    {
        cout << "Insufficient funds.\n";
    }
    acct_ptr->display();
    delete acct_ptr;
}

/*
If we step back and take an honest look at this corrected_func function, 
we will see that there really is no reason for using pointers and 
dynamic memory at all. This corrected_func offers no advantage over 
the following function:
*/
void even_better_func()
{
    // Account acc{"Joe", 400, 1300};
    Account acc("Joe", 400, 1300);
    if (acc.withdraw(10.0))
    {
        cout << "Withdraw successful\n";
    }
    else
    {
        cout << "Insufficient funds.\n";
    }
    acc.display();
}

int main()
{
    // The Point class defines no constructor, so the following code is valid:
    vector<Point> pts(100); // Okay

    // What if a class defines a constructor that accepts arguments and
    // does not supply also a contructor that requires no arguments?
    // vector<Account> accts(100); // Illegal, the Account class has no default contructor

    /*
    One solution uses a vector of pointers, as in
    Note that this does not create any Account objects.
    The programmer subsequently must iterate through the 
    vector and use new to create individually each account
    element. An example of this would be
    */
    vector<Account *> accts(100); // A vector of account pointers
    int size = accts.size();
    string name;
    int id;
    double amt;
    for (int i = 0; i < size; i++)
    {
        // Get information from the user
        cout << "Enter name, id, amount: ";
        cin >> name >> id >> amt;
        // Create the new account object
        accts[i] = new Account{name, id, amt};
    }

    /*
    In this case, when the program no longer needs 
    the accts vector, it must execute the following code
    to reclaim the dynamic memory held by each of 
    the Account objects.
    */
    for (int i = 0; i < size; i++)
    {
        delete accts[i];
    }
    
    /*
    An alternative approach that avoids pointers uses 
    the vector push_back method to add objects one at
    a time.
    In this case there is no to use delete later.
    */
   vector<Account> accts_2; // Vector initially empty
    string account_name;
    int i;
    double account_balance;
   for (int account__id = 0; account__id < 100; account__id++)
   {
        // Get the information
        cout << "Enter name, id, balance: ";
        cin >> account_name >> account__id >> account_balance;
        // Create the new account object
        accts_2.push_back({account_name, account__id, account_balance});
   }
   
}

// int main()
// {
//     // faulty_func();
//     // corrected_func();
//     even_better_func();
// }

// int main()
// {
//     Point pt;
//     // Declare a pointer to a object (in this case the Point object)
//     Point *p_pt; 
//     // Before we use the pointer we must initialize it to point to
//     // a valid object
//     // Assign the the pointer to refer to an existing object
//     // p_pt = &pt; 
//     // Or use the new operator to dynamically allocate an object from the heap:
//     p_pt = new Point;
//     // ----------------------------------------------------------------

//     // If the class has a constructor that accepts parameters,
//     // we need to provide the appropriate arguments when using new operator.
//     Account acc{"Joe", 3143, 90.00};
//     Account *p_acc_1;
//     p_acc_1 = &acc;
//     p_acc_1->display(); // Joe,3143,90
//     cout << '\n';

//     // Or use the new operator to dynamically allocate an object from the heap:
//     p_acc_1 = new Account("Moe", 400, 1300.00);
//     p_acc_1->display(); // Moe,400,1300

//     // As with any dynamically allocated entity, a programmer must be careful
//     // to use the delete operator to deallocate any objects created via new.

//     // An executing program will not automatically deallocate the memory allocated via new; 
//     // It is the programmer’s responsibility to manually deallocate the memory when 
//     // the object is no longer needed. 
//     // The delete operator with no [] decoration frees up a single dynamically allocated object:
//     delete p_acc_1;
//     // ----------------------------------------------------------------

//     // The dot operator syntax to access a field of a object 
//     // through a pointer is a bit awkward:
//     // Point *p = new Point;
//     // (*p).x = 253.7;
//     // (*p).y = -0.5;
//     // // Print x, y
//     // cout << '\n';
//     // cout << "x = " << (*p).x << '\n';
//     // cout << "y = " << (*p).y << '\n';

//     // C++ provides a simpler syntax to access fields of an object through a pointer
//     // The pointer operator eliminates the need for parentheses:
//     Point *p = new Point;
//     p->x = 253.7;
//     p->y = -0.5;
//     // Print
//     cout << '\n';
//     cout << "x = " << p->x << '\n';
//     cout << "y = " << p->y << '\n';
// }
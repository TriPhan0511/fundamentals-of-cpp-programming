#include <iostream>

using std::cout;

// struct Node
// {
//     int data;
//     // Node next; // Error, illegal self reference
// };

struct Node
{
    int data;
    Node *next; // Self reference via pointer is legal
};


int main()
{
    cout << '\n';
    cout << "hello\n";
    
}
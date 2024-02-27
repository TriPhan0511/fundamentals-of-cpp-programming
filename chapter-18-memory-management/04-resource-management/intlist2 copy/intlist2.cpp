#include <iostream>
#include "intlist2.h"

// Private IntList2 operations

// Node constructor
IntList3::Node::Node(int n): data(n), next(nullptr) {};

// The constructor makes an initially empty list
// The list is empty when head and tail are null.
// The list's length initially is zero.
IntList3::IntList3(): head(nullptr), tail(nullptr), len(0) {}

// The destructor deallocates the memory held by the list
IntList3::~IntList3()
{
    // std::cout << "The destructor is called"; // For testing
    clear(); // Free up the space held by the nodes in the list
}

// Inserts n onto the back of the list.
// n is the element to insert.
void IntList3::insert(int n)
{
    // Make a node for the new element n
    Node *new_node = new Node(n);
    if (tail) // Is tail non-null?
    {
        tail->next = new_node; // Link the new node onto the back
        tail = new_node; // The new node is the new tail of the list
    }
    else // List is empty, so make head and tail point to new node
    {
        head = tail = new_node;
    }
    len++; // List now has one more element
}

// Prints the contents of the linked list of integers.
void IntList3::print() const
{
    for (auto cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << " ";
    }
    std::cout << '\n';
}

// Returns the length of the linked list
int IntList3::length() const 
{
    return len;
}

// Removes all the elements in the linked list.
void IntList3::clear()
{
    auto cursor = head;
    while (cursor)
    {
        auto temp = cursor;
        cursor = cursor->next;
        delete temp;
    }
    head = tail = nullptr; // Null head signifies list is empty
    len = 0;
}

/*
NOTE:
The destructor implementation:

    IntList2::~IntList2()
    {
        clear(); // Free up the space held by the nodes in the list
    }

simply invokes the services of the clear method to deallocate the space held by the list.    

When do constructors and destructors execute? A local or global object definition calls the class constructor
to properly initialize the object; for example,

    IntList2 seq;

defines the object seq. This definition invokes the IntList2 constructor to set both seq.head and
seq.tail to nullptr. If seq is a local variable, its destructor executes at the end of the function’s
execution. If seq is global, its destructor executes when the program finishes.

A pointer is not an object; it points to an object. This means the definition

    IntList2 *p;

does not invoke IntList2’s constructor. Given this definition of p, the statement

    p = new IntList2;

actually creates an IntList2 object and therefore calls the IntList2 constructor for the newly created
object. The object to which p points is not destroyed until the programmer uses delete, as in

    delete p;

It is at this point IntList2’s destructor executes for p’s object.
*/
#include <iostream>
#include "intlist3.h"

// Private IntList3 operations

// Node constructor
IntList3::Node::Node(int n): data(n), next(nullptr) 
{
    // Printing its data field and the address of 
    // where it resides in memory.
    std::cout << "Creating node " << data 
        << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
}

// Node destructor
IntList3::Node::~Node()
{
    // Printing its data field and the address of 
    // where it resides in memory.
    std::cout << "Destroying node " << data 
        << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
}

// Public IntList3 operations

// The constructor makes an initially empty list
// The list is empty when head and tail are null.
// The list's length initially is zero.
IntList3::IntList3(): head(nullptr), tail(nullptr), len(0) {}

// The destructor deallocates the memory held by the list
IntList3::~IntList3()
{
    // std::cout << "The destructor is called"; // Testing
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
Here we have the Node constructor identify which element it is creating by printing its data field
and the address of where it resides in memory. C++ is very strict about conversions between pointer and
non-pointer types—it is easy to do by mistake and almost never intended—so a simple static_cast
will not work here. The reinterpret_cast removes the safeguard and treats the bits that make up the
pointer as a uintptr_t, an integer type guaranteed to represent the same range of values as a pointer.
The destructor indicates when a Node object is destroyed.
*/
#include <iostream>
#include <utility> // For std::swap
#include "intlist4.h"

// Node constructor
IntList4::Node::Node(int n): data(n), next(nullptr) 
{
    // Printing its data field and the address of 
    // where it resides in memory.
    std::cout << "Creating node " << data 
        << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
}

// Node destructor
IntList4::Node::~Node()
{
    // Printing its data field and the address of 
    // where it resides in memory.
    std::cout << "Destroying node " << data 
        << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
}

// The constructor makes an initially empty list
// The list is empty when head and tail are null.
// The list's length initially is zero.
IntList4::IntList4(): head(nullptr), tail(nullptr), len(0) {}

// Copy constructor makes a copy of the other object's list
IntList4::IntList4(const IntList4& other): IntList4()
{
    // Walk through other's list inserting each of its elements
    // into this list
    for (auto cursor = other.head; cursor; cursor = cursor->next)
    {
        insert(cursor->data);
    }
}

// The destructor deallocates the memory held by the list
IntList4::~IntList4()
{
    // std::cout << "The destructor is called\n"; // Testing
    clear(); // Free up the space held by the nodes in the list
}

// Assigment operator
IntList4& IntList4::operator=(const IntList4& other)
{
    // Make a local, temporary copy of other
    IntList4 temp{other};
    // Exchange the head and tail pointers and len from this list
    // with those the new, temporary list
    std::swap(head, temp.head);
    std::swap(tail, temp.tail);
    std::swap(len, temp.len);
    // The temporary list now points to this list's original contents,
    // and this list now points to the copy of other's list
    // The temporary list will be destroyed when this constructor returns
    return *this;
}

// Inserts n onto the back of the list.
// n is the element to insert.
void IntList4::insert(int n)
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
void IntList4::print() const
{
    for (auto cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << " ";
    }
    std::cout << '\n';
}

// Returns the length of the linked list
int IntList4::length() const 
{
    return len;
}

// Removes all the elements in the linked list.
void IntList4::clear()
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
NOTE
The copy constructor, assignment operator, and destructor have a special relationship in C++. These
three methods are involved in the Rule of Three. The Rule of Three is this: If a class designer feels the need
to add a copy constructor, assignment operator, and/or destructor to a class, the class should have all three
methods. Said another way, it almost always is a mistake to have just one or two of these special methods
defined for a class without including all three.

The Rule of Three is a design guideline; it is not requirement of the C++ language that the compiler
enforces. Consider why the rule exists. If an object must be guaranteed to perform some action at the end
of its existence and failure to do so would result in undesirable consequences as the program continues
to execute, the object’s class must contain a destructor. This essential action usually involves releasing
some resource it owns. If the destructor is responsible for releasing a resource, the copy constructor must
somehow acquire a resource that is in some way related to the resource of an existing object. The assignment
operator must both release an owned resource and acquire a resource related to the resource of an existing
object. What if you leave out one of the three?

    * If you omit the destructor, the default destructor does no resource clean up. Objects can acquire
        resources through copy construction and assignment but cannot release them. Most resources (like
        memory) are finite, so lack of an appropriate destructor will limit the number objects available to the
        executing application.

    * If you omit the copy constructor, the default copy constructor will copy the bits of the existing object
        into the new object. This means the copy-constructed object will have the exact resources managed
        by another object. The destruction of exactly one of the objects will release the resources held by the
        other object. The non-destroyed object then will not have access to the resources it needs to function.

    * If you omit the assignment operator, the default assignment will copy the bits of one existing object
        into another existing object. This means the assigned-to object will have the exact resources managed
        by another object. It also means that the resources the assigned-to object originally held are not
        reclaimed. The destruction of exactly one of the objects will release the resources held by the other
        object. The non-destroyed object then will not have access to the resources it needs to function.

In sum, you should have a very good reason for designing a class that violates the Rule of Three.
*/
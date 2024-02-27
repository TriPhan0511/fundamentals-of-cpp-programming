#include "intlist1.h"
#include <iostream>

// Private IntList1 operations

/**
 * Node construtor
*/
IntList1::Node::Node(int d): data(d), next(nullptr) {}

/**
 *  Returns the length of the linked list pointed to by p
*/
int IntList1::length(Node *p) const
{
    if (p)
    {
        return 1 + length(p->next); // 1 + length of rest of list
    }
    else
    {
        return 0;
    }    
}

/**
 * dispose(p)
 *  Deallocate the memory held by the llist pointed to by p.
 */
void IntList1::dispose(Node *p)
{
    if (p)
    {
        dispose(p->next); // Free up the rest of the list
        delete p; // Deallocate this node
    }
}

// Public IntList1 operations

/**
 * The constructor makes an initially empty list
 * The list is empty when head and tail are null.
*/
IntList1:: IntList1(): head(nullptr), tail(nullptr) {}


/**
* insert(n)
*   Inserts n onto the back of the list.
*   n is the element to insert
*/
void IntList1::insert(int n)
{
    // Make a node for the new element n
    IntList1::Node *new_node = new Node(n);
    if (tail) // Is tail non-null?
    {
        tail->next = new_node; // Link the new node onto the back
        tail = new_node; // The new node is the new tail of the list
    }
    else // List is empty, so make head and tail point to new node
    {
        head = tail = new_node;
    }
}

/**
 * print()
 *  Prints the contents of the linked list of integers.
 */
void IntList1::print() const
{
    for (Node *cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << " ";
    }
    std::cout << '\n';
}

/**
 * int length()
 *  Returns the length of the linked list.
*/
// Recursive version
// int IntList1::length() const
// {
//     return length(head); // Delegate work to private helper method
// }

// Iterative version
int IntList1::length() const
{
    int result = 0;
    for (auto cursor = head; cursor; cursor = cursor->next)    
    {
        result++;
    }
    return result;
}

/**
 * clear()
 *  Removes all the elements in the linked list.
*/
// Recursive version
// void IntList1::clear()
// {
//     dispose(head); // Deallocated space for all the nodes
//     head = tail = nullptr; // Null head signifies list is empty
// }

// Iterative version
void IntList1::clear()
{
    auto cursor = head;
    while (cursor)
    {
        auto temp = cursor;
        cursor = cursor->next;
        delete temp;
    }
    head = tail = nullptr; // Null head signifies list is empty    
}

/*
NOTE:
As mentioned in Section 10.5, given the same basic algorithm implemented recursively or iteratively, the
iterative version will be more efficient. This is because each recursive call requires additional space on the
stack to store fresh local variables (if any) and parameters. Not only does a recursive method or function
require more memory, it takes more time to complete because the executing program must perform extra
work to set up the new space needed by a recursive invocation and restore the context when a recursive
invocation returns. If we build a very large linked list, a call to our recursive length or clear method
could consume considerable space on the stack and impose a significant performance overhead. For future
versions of our linked list code we will use the iterative version of the clear method.

To optimize the length method, we will choose a different route. If you have an application that manages
rather large lists and makes frequent calls to the length method, even iteration can take considerable
time. We can add an integer instance variable to the IntList1 class that keeps track of the number of
elements in the list. This new instance instance variable affects the rest of the class members as follows:

    * The constructor would initialize this variable to zero.

    * The insert method would increment this variable by one each time the client adds an element to
      the list.

    * The clear method would reset this variable to zero.

    * The length method would avoid the loop completely and simply return the value of this variable.

The time spent looping over all the elements in a list counting them can be considerable for large lists,
so the additional space required by a single extra integer is a good trade off for speeding up the length
method.
*/
#ifndef INTLIST4_H_
#define INTLIST4_H_

class IntList4
{
    struct Node
    {
        int data; // A data element of the list
        Node *next; // The node that follows this one in the list
        Node(int n); // Constructor
        ~Node(); // Destructor
    };
    Node *head; // Points to the first element in the list
    Node *tail; // Points to the last element in the list
    int len; // The number of elements in the list
public:
    // The constructor makes an initially empty list.
    IntList4();
    // Copy constructor
    IntList4(const IntList4& other);
    // The destructor that reclaims the list's memory.
    ~IntList4();
    // Assigment operator
    IntList4& operator=(const IntList4& other);
    // Inserts n onto the back of the list.
    void insert(int n);
    // Prints the contents of the linked list of integers.
    void print() const;
    // Returns the length of the linked list.
    int length() const;
    // Removes all the elements in the linked list.
    void clear();
};

#endif

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
#ifndef INTLIST2_H_
#define INTLIST2_H_

class IntList3
{
    struct Node
    {
        int data; // A data element of the list
        Node *next; // The node that follows this one in the list
        Node(int n); // Constructor
    };
    Node *head; // Points to the first element in the list
    Node *tail; // Points to the last element in the list
    int len; // The number of elements in the list
    // int size; // The number of elements in the list
public:
    // The constructor makes an initially empty list.
    IntList3();
    // The destructor that reclaims the list's memory.
    ~IntList3();
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
#ifndef INTLIST1_H_
#define INTLIST1_H_

class IntList1
{
private:
    struct Node
    {
        int data;
        Node *next;
        Node(int data);
    };
    Node *head;
    Node *tail;
public:
    IntList1();
    void print() const;
    int length() const;
    void insert(int item);
    void clear();
};



#endif
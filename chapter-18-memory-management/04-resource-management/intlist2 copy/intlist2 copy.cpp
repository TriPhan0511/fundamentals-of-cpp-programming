#include <iostream>
#include "intlist2.h"

IntList2::IntList2(): head(nullptr), tail(nullptr), len(0) {}

IntList2::~IntList2()
{
    clear();
}

void IntList2::print() const
{
    Node *cursor = head;
    while (cursor)
    {
        std::cout << cursor->data << " ";
        cursor = cursor->next;
    }
    std::cout << '\n';
}

int IntList2::length() const 
{
    return len;
}

void IntList2::insert(int item)
{
    Node *new_node = new Node(item);
    if (tail)
    {
        tail->next = new_node;
        tail = new_node;
    }
    else
    {
        head = tail = new_node;
    }
    
}

void IntList2::clear()
{
    Node *cursor = head;
    while (cursor)
    {
        Node *temp = cursor;
        cursor = cursor->next;
        delete temp;
    }
    head = tail = nullptr;
}
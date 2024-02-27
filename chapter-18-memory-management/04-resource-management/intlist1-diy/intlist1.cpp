#include <iostream>
#include "intlist1.h"

IntList1::Node::Node(int data): data(data), next(nullptr) {}

IntList1::IntList1(): head(nullptr), tail(nullptr) {}

void IntList1::print() const
{
    for (Node *cursor = head; cursor; cursor = cursor->next)
    {
        std::cout << cursor->data << " ";
    }
    std::cout << '\n';
}

int IntList1::length() const
{
    int result = 0;
    for (Node *cursor = head; cursor; cursor = cursor->next)
    {
        result++;
    }
    return result;
}

void IntList1::insert(int item)
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

void IntList1::clear()
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
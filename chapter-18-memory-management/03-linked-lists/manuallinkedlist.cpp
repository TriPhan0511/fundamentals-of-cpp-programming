#include <iostream>

using std::cout;

struct Node
{
    int data;
    Node *next; // Link to successor node in the link
    // Constructor
    Node(int data, Node *next): data(data), next(next) {}
};

int main()
{
    cout << '\n';
    
    // Node objects
    Node n4(3, nullptr); // Make the last node
    Node n3(0, &n4); // Make the next to last node and link to last node
    Node n2(10, &n3); // Make the second node and link to third node
    Node n1(23, &n2); // Make the first node and link to second node

    // Print the linked list built from the Node objects
    for (Node *cursor = &n1; cursor != nullptr; cursor = cursor->next)
    {
        cout << cursor->data << " ";
    }
    cout << '\n';

    /*
    NOTE:
    The value nullptr in a Boolean context is considered false, so we can 
    simplify the Boolean expression cursor != nullptr to just cursor; this 
    allows us to simplify the loop somewhat, as:
    */
    for (Node *cursor = &n1; cursor; cursor = cursor->next)
    {
        cout << cursor->data << " ";
    }
    cout << '\n';
    // -> 23 10 0 3
}

#include <iostream>
#include <string>
#include "intlist1.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    bool done = false;
    char command;
    int value;
    IntList1 list;
    string msg = "I)nsert <item> P)rint L)ength E)rase Q)uit >>";
    while (!done)
    {
        cout << msg;
        cin >> command;
        switch (command)
        {
        case 'i': // Insert a new element into the list
        case 'I':
            if (cin >> value)
            {
                list.insert(value);
            }
            else
            {
                done = true;
            }
            break;
        case 'p': // Print the contents of the list
        case 'P':
            list.print();
            break;
        case 'l': // Print the list;s length
        case 'L':
            cout << "Number of elements: " << list.length() << '\n';
            break;
        case 'e': // Erase the list
        case 'E':
            list.clear();
            break;
        case 'q': // Exit the loop (and the program)
        case 'Q':
            done = true;
            break;
        
        default:
            cout << "Wrong input. Please try again.\n";
        }
    }
    list.clear(); // Free up the space held by the linked list
}

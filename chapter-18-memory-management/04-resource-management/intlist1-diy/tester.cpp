#include <iostream>
#include "intlist1.h"

int main()
{
    IntList1 list;
    bool done = false;
    char command{};
    int value{};
    while (!done)
    {
        std::cout << "I)nsert <item> P)rint L)ength C)lear Q)uit: ";
        std::cin >> command;
        switch (command)
        {
        case 'i':
        case 'I':
            if (std::cin >> value)
            {
                list.insert(value);
            }
            else
            {
                done = true;
            }
            break;
        case 'p':
        case 'P':
            list.print();
            break;
        case 'l':
        case 'L':
            std::cout << "Length of the list: " << list.length() << '\n';
            break;
        case 'q':
        case 'Q':
            done = true;
            break;
        case 'c':
        case 'C':
            list.clear();
            break;
        default:
            std::cout << "Wrong input. Please try again.\n";
            break;
        }
    }
    
}
#include <iostream>
#include "intlist2.h"

using std::cout;

void f()
{
    IntList3 my_list;
    my_list.insert(22);
    my_list.insert(5);
    my_list.insert(-44);
    my_list.print();
    // my_list goes out of scope; destructor automatically frees its memory
}

// Use pointer
void f2()
{
    IntList3 *my_list = new IntList3;
    my_list->insert(22);
    my_list->insert(5);
    my_list->insert(-44);
    my_list->print();
    delete my_list;
}


int main()
{
    f();
}
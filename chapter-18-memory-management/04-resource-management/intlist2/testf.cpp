#include <iostream>
#include "intlist2.h"

using std::cout;

void f()
{
    IntList4 my_list;
    my_list.insert(22);
    my_list.insert(5);
    my_list.insert(-44);
    my_list.print();
    // my_list goes out of scope; destructor automatically frees its memory
}

// Use pointer
void f2()
{
    IntList4 *my_list = new IntList4;
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
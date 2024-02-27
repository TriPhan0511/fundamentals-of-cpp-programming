#include <iostream>
#include "intlist3.h"

using std::cout;

void f()
{
    IntList3 my_list; // Contructor called here
    my_list.insert(22);
    my_list.insert(5);
    my_list.insert(-44);
    my_list.print();
    // my_list goes out of scope; destructor automatically frees its memory
}
// ->
// Creating node 22 (1880822993552)
// Creating node 5 (1880822994384)
// Creating node -44 (1880822993584)
// 22 5 -44
// Destroying node 22 (1880822993552)
// Destroying node 5 (1880822994384)
// Destroying node -44 (1880822993584)

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
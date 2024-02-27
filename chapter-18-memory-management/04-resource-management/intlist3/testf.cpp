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
    // NOTE: my_list goes out of scope; destructor AUTOMATICALLY frees its memory
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
// Dynamically allocating the linked list itself, not just its nodes:
void f2()
{
    IntList3 *lptr; // Pointer, constructor NOT called yet
    lptr = new IntList3; // Contructor called here
    lptr->insert(22);
    lptr->insert(5);
    lptr->insert(-44);
    lptr->print();
    delete lptr; // NOTE: Destructor called here
}

int main()
{
    // f();
    f2();
}

/*
NOTE:
In this f2 function lptr is not an object; it is a pointer to an object. Declaring lptr does not create an
object, and, therefore, the IntList3 constructor does not execute. The statement

    lptr = new IntList3; // Contructor called here

does create an object, and so the IntList3 constructor executes on behalf of the object to which lptr
points. When lptr goes out of scope at the end of function f2’s execution, the stack variable lptr goes
away, but since it is a pointer, not an object, no destructor code executes. The client must explicitly free up
memory with delete:

    delete lptr; // NOTE: Destructor called here

unless the programmer intends for the function to return the pointer to the client (in which case the client is
responsible for calling delete when finished with the object).

As you can see, dynamically allocating the list itself (apart from the nodes that store its elements) brings
us back to the situation we were in before: We must remember to do something when we are finished with
the object. In this case we must remember to delete the list itself. A destructor cannot help us here. This
is a good example that demonstrates that while dynamic memory enables us to do many interesting things,
it is best to avoid it unless absolutely necessary to achieve the behavior we need.

A destructor performs the reverse role of a constructor: A constructor ensures that a new object begins its
life in a well-defined state, while a destructor is responsible for performing actions required when an object’s
life is over. A destructor is unnecessary for most classes. For a linked list object, however, a destructor is
essential because the nodes that comprise the linked list are dynamically allocated with the new operator.
Any memory allocated with new needs a corresponding call to delete when the memory no longer
will be used. The clear method will take care of the memory deallocation, but, without a destructor,
a programmer must remember to intentionally call clear when finished with a linked list object. The
destructor relieves the programmer of this responsibility and removes the possibility of a memory leak. The
destructor simply calls clear to clean up the resources held by the list.
*/


#include "intlist3.h"
#include <iostream>

void f()
{
    // Create two empty integer linked list
    IntList3 seq1, seq2;     
    // Build the list [10]-->[-2]-->[8]
    seq1.insert(10); 
    seq1.insert(-2); 
    seq1.insert(8); 
    seq1.print();
    // Build the list [5]-->[4]
    seq2.insert(5);
    seq2.insert(4);
    seq2.print();

    std::cout << "-------------------\n";

    seq1 = seq2; // What does this do?

    seq1.print(); 
}

int main()
{
    f();
    std::cout << "All done\n";
}

/*
NOTE:
Listing 18.13 (listassign.cpp) builds two separate linked lists and then assigns one list to the other. On one
system the program prints

    Creating node 10 (2707141098144)
    Creating node -2 (2707141098272)
    Creating node 8 (2707141097760)
    10 -2 8
    Creating node 5 (2707141097888)
    Creating node 4 (2707141098208)
    5 4
    -------------------
    5 4
    Destroying node 5 (2707141097888)
    Destroying node 4 (2707141098208)
    Destroying node 5 (2707141097888)

During this particular run the program ran to completion; however, sometimes the program will crash before
printing All done. On some systems the program crashes before printing the last three lines of output.    

During this run of Listing 18.13 (listassign.cpp) the output shows that the program never destroys the
nodes containing 10, −2, and 8. Further, the program attempts to destroy the nodes containing 4 and 5
twice! We can see the program deletes the same memory twice by comparing the memory addresses in
parentheses. This undefined behavior of double deletion is what causes the program to crash at times.

The problem is in this statement:

    seq1 = seq2; // What does this do?

What exactly does this statement do?

With no additional guidance from the programmer, the assignment operator for a programmer-defined
type simply copies the bits in memory that make up the object to right of the assignment operator into the
memory reserved for the object on the left side of the assignment operator. Under Visual C++producing
a 32-bit executable, for example, an IntList3 object occupies 12 bytes of memory—four bytes for its
head pointer plus four bytes for its tail pointer plus four bytes for len. The actual size of an IntList3
object will vary from system to system and will be larger on 64-bit computers. You can verify the actual size
of an IntList3 object on your system by adding the following statement to Listing 18.13 (listassign.cpp):

    std::cout << sizeof seq1 << '\n'; // Prints 12 or 24 under Visual C++

The assignment

    seq1 = seq2;

simply copies seq2.head to seq1.head and copies seq2.tail to seq1.tail and copies seq2.len
to seq1.len. This produces three undesirable results:

    * After the assignment, the objects seq1 and seq2 refer to the same list of nodes.
        This means any actions to modify the list managed by seq1 will modify seq2 identically. The
        assignment operator does not make a copy of the contents of seq2. This means that our linked list
        objects behave differently than std::vector objects with respect to assignment; assigning one
        vector to another makes a copy of the contained elements. Clients will expect our linked list objects
        to behave similarly. This aliasing problem, however undesirable, leads to two serious flaws in our
        current implementation of IntList3

    * Memory leak. Simply redirecting seq1’s head and tail pointers to seq2’s list renders the nodes
        in seq1’s original list unreachable from any variables within the program. The program has no way
        to delete the nodes in seq1’s original list. This constitutes a memory leak.

    * Memory corruption. Both seq1 and seq2 are objects local to the main function. Based on their
        declaration order, seq1’s constructor executes before seq2’s constructor. This means when main
        is finished executing, seq2’s destructor will execute before seq1’s destructor, as object destruction
        occurs in the reverse order of object construction for local objects. The destructor for seq2 will
        free up all the nodes in seq2’s list. Next, seq1’s destructor will attempt to delete the memory
        occupied by its list. Unfortunately this involves referencing and deleting dynamic memory previously
        deleted by seq2. Any attempts to delete already deleted memory results in undefined behavior
        that usually results in memory corruption. That is why Listing 18.13 (listassign.cpp) crashes during
        some runs.
*/
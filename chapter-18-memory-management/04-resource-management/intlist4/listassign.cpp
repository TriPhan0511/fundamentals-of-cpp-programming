#include "intlist4.h"
#include <iostream>

void f()
{
    // Create two empty integer linked list
    IntList4 seq1, seq2;     
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
// CREATING seq1's original list
// Creating node 10 (2279202552336)
// Creating node -2 (2279202552368)
// Creating node 8 (2279202552656) 
// 10 -2 8
// CREATING seq2's list
// Creating node 5 (2279202552560)
// Creating node 4 (2279202551824)
// 5 4
// -------------------
// CREATING a copy of seq2's list for seq1
// Creating node 5 (2279202552240)
// Creating node 4 (2279202552688)
// DESTROYING seq1's original list
// Destroying node 10 (2279202552336)
// Destroying node -2 (2279202552368)
// Destroying node 8 (2279202552656)
// 5 4
// DESTROYING seq2's list
// Destroying node 5 (2279202552560)
// Destroying node 4 (2279202551824)
// DESTROYING seq1's list (the copy of seq2's list)
// Destroying node 5 (2279202552240)
// Destroying node 4 (2279202552688)
// All done
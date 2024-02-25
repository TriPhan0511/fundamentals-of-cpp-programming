#include <iostream>

using std::cout;

struct Widget
{
    int value;
    Widget(int value): value(value)
    {
        cout << "Creating widget " << value << '\n';
    }
    ~Widget()
    {
        cout << "Destroying widget " << value << '\n';
    }
};

Widget global_w(5);

Widget *get_widget1()
{
    // Caller must deallocate the returned object
    Widget *w = new Widget(10);
    return w;
}

Widget *get_widget2()
{
    // Caller must not deallocate the returned object
    // as it points to a global variable not dynamically allocated.
    return &global_w; // No allocation
}

void process()
{
    Widget *p1 = get_widget1();
    cout << p1->value << '\n';
    Widget *p2 = get_widget2();
    cout << p2->value << '\n';
    delete p1; // Must delete p1
    delete p2; // But do not delete p2?
}

int main()
{
    cout << "Entering main\n";
    process();
    cout << "Leaving main\n";
}
// ->
// Creating widget 5
// Entering main
// Creating widget 10  
// 10
// 5
// Destroying widget 10
// Destroying widget 5 

/*
NOTE:
Observe that on this particular system the program does not run to completion, as it does not print Leaving
main. The program crashes after attempting to free up the global memory that was not dynamically allocated
on the heap. One some systems during some executions the program will run to completion with no apparent
problem, but this is because this program is very simple and does very little after the erroneous deletion.
Regardless of how the program behaves, it involves code identified as undefined behavior and, therefore,
contains a bug that must be addressed.

While we can see the implementations of get_widget1 and get_widget2 in the source code
for the above program (howtodelete.cpp), the problem would be more challenging if these functions were part
of a precompiled library for which we do not have the source code. It is important to read the library
documentation for functions that return pointers to know how callers are expected to manage the memory
to which those pointers refer.
*/
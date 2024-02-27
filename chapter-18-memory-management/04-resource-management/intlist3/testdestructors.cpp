/*
The following program demonstrates that an executing program 
destroyes local and global objects in the reverse order of
their creation.
For objects allocated via the new operator, as in the 
function test_widget_pointers, destructor execute only when
applying delete to the associated pointers.
*/

#include <iostream>

using std::cout;

class Widget
{
    int data;
public:
    Widget(int n): data(n) 
    {
        std::cout << "Creating widget " << data 
            << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
    }
    ~Widget()
    {
        std::cout << "Destroying widget " << data 
            << " (" << reinterpret_cast<uintptr_t>(this) << ")\n";
    }
};

// Global widgets
Widget global1(100);
Widget global2(200);

void test_widget_objects()
{
    std::cout << "Entering test_widget_objects\n";
    Widget w1(1);
    Widget w2(2);
    Widget w3(3);
    Widget w4(4);
    std::cout << "Leaving test_widget_objects\n";
}

void test_widget_pointers()
{
    std::cout << "Entering test_widget_pointers\n";
    Widget *p1 = new Widget(10);
    Widget *p2 = new Widget(20);
    Widget *p3 = new Widget(30);
    Widget *p4 = new Widget(40);
    delete p2;
    delete p1;
    delete p4;
    // Not deleting p3, introducing a memory leak
    std::cout << "Leaving test_widget_pointers\n";
}

int main()
{
    cout << "Entering main\n";
    test_widget_objects();
    test_widget_pointers();
    cout << "Leaving main\n";
}
// ->
// Creating widget 100 (140701380669488)
// Creating widget 200 (140701380669492)
// Entering main
// Entering test_widget_objects
// Creating widget 1 (6291036)
// Creating widget 2 (6291032)
// Creating widget 3 (6291028)
// Creating widget 4 (6291024)
// Leaving test_widget_objects
// Destroying widget 4 (6291024)
// Destroying widget 3 (6291028)
// Destroying widget 2 (6291032)
// Destroying widget 1 (6291036)
// Entering test_widget_pointers
// Creating widget 10 (8260080)
// Creating widget 20 (8232080)
// Creating widget 30 (8256800)
// Creating widget 40 (8227200)
// Destroying widget 20 (8232080)
// Destroying widget 10 (8260080)
// Destroying widget 40 (8227200)
// Leaving test_widget_pointers
// Leaving main
// Destroying widget 200 (140701380669492)
// Destroying widget 100 (140701380669488)
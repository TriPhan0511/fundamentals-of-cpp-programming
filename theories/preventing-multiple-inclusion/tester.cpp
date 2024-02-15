#include <iostream>
#include "widget.h"
#include "gadget.h"

int main()
{
    Widget w(Count(1));
    Gadget g(Count(100));

    Count c1 = w.get();
    std::cout << c1.get_count() << '\n';
    c1.inc();
    std::cout << c1.get_count() << '\n';

    Count c2 = g.get();
    std::cout << c2.get_count() << '\n';
    c2.inc();
    std::cout << c2.get_count() << '\n';
}
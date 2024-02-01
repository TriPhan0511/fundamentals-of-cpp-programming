// #include "pointinline.h"
#include "pointsplit.h"
#include <iostream>

using std::cout;

int main()
{
    Point p(10, 22);
    cout << "x = " << p.get_x() << '\n';
    cout << "y = " << p.get_y() << '\n';
}
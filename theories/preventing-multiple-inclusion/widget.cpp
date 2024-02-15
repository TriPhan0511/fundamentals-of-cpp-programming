#include "widget.h"

Widget::Widget(Count c): count(c) {}
Count Widget::get() const
{
    return count;
}
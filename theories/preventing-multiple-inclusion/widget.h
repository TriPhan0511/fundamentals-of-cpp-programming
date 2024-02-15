#ifndef WIDGET_H_
#define WIDGET_H_

#include "count.h"

class Widget
{
    Count count;
public:
    Widget(Count c);
    Count get() const;
};

#endif
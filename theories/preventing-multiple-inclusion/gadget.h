#ifndef GADGET_H_
#define GADGET_H_

#include "count.h"

class Gadget
{
    Count count;
public:
    Gadget(Count c);
    Count get() const;
};

#endif
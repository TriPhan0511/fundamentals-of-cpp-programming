#include "gadget.h"

Gadget::Gadget(Count c): count(c) {}
Count Gadget::get() const
{
    return count;
}
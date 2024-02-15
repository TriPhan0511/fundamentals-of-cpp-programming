#include "count.h"

Count::Count(int v): value(v) {}

int Count::get_count() const
{
    return value;
}

void Count::inc()
{
    value++;
}
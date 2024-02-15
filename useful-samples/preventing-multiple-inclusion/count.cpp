#include "count.h"

// Allow clients to reset the counter to be zero
void Counter::reset()
{
    this->count = 0;
}
// Allow clients to increment the counter
void Counter::inc()
{
    this->count++;
}
// Return a copy of the counter's current value
int Counter::get() const
{
    return this->count;
}
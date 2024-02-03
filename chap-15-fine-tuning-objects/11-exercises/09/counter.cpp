#include "counter.h"

Counter::Counter(): value(0) {}
void Counter::increment() { this->value++; }
void Counter::decrement() { this->value--; }
int Counter::get() const { return this->value; }
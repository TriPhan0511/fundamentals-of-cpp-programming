#include <algorithm> // For max function
#include "rectangle.h"

// Generally for rectangle length >= width, but the
// constructor does not enforce this.
Rectangle::Rectangle(double len, double wid):
    width(wid), length(len) {}

// Length of the loger side--determine which is longer
double Rectangle::span() const
{
    return std::max(length, width);
}

double Rectangle::area() const
{
    return length * width;
}
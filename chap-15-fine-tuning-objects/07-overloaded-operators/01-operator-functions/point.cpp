#include "point.h"

// Constructor
Point::Point(double x, double y): x(x), y(y) {}

// Get x's value
double Point::get_x() const
{
    return this->x;
}

// Get y's value
double Point::get_y() const
{
    return this->y;
}
#include "pointsplit.h"

// Point constructor
Point::Point(double x, double y): x(x), y(y) {}

// Get the x value
double Point::get_x() const { return x; }

// Get the y value
double Point::get_y() const { return y; }

// Set the x value
void Point::set_x(double x) { this->x = x; }

// Set the y value
void Point::set_y(double y) { this->y = y; }
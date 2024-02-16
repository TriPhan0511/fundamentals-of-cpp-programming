#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "ellipse.h"

// A circle is a special case of an ellipse
class Circle: public Ellipse
{
public:
    // In a circle the major and minor radius are the same, so
    // we need specify only one value when creating a circle.
    Circle(double radius);
    // Inherited methods work as it is, no need to change their 
    // behavior
};

#endif
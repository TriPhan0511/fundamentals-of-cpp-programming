#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"

class Rectangle: public Shape
{
protected:
    double length;
    double width;
public:
    Rectangle(double len, double wid);
    // Length of longer side
    double span() const override;
    double area() const override;
};

#endif

/*
    NOTE:
    Note the appearance of the protected access specifier. The methods in any class derived directly or
    indirectly from Rectangle will be able to access the length and width fields. These fields will be
    inaccessible to code outside these classes.
*/
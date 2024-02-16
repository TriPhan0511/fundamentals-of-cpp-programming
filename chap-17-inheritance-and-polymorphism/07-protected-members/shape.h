#ifndef SHAPE_H_
#define SHAPE_H_

/**
 * Shape is the base class for all shapes
*/
class Shape
{
public:
    // Longest distance across the shape
    virtual double span() const = 0;
    // The shape's area
    virtual double area() const = 0;
};

#endif

/*
    NOTE:
    The “assignment to zero” of the two virtual methods in the Shape class make them special; they are called
    pure virtual methods or pure virtual functions. This special syntax signifies that these methods have no
    implementations. It is not possible to provide a body for these methods. A class that contains at least one
    pure virtual method is an abstract class. It is not possible to create an instance of an abstract class. The
    compiler enforces this restriction; the following statement:

        Shape myShape; // Illegal

    is illegal. A non-abstract class is called a concrete class. All the classes we have seen to this point except
    for Shape have been concrete classes.
*/
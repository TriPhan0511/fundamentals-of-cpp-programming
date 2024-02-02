#include <iostream>
#include <vector>
#include "point.h"

using std::cout;

// Operator function:
// Overload the addition operator to work on Point objects 
Point operator+(const Point& p1, const Point& p2)
{
    return {p1.get_x() + p2.get_x(), p1.get_y() + p2.get_y()};
}

/*
    NOTE:
    It often is convenient to overload the output stream << operator 
    for custom classes. The std::cout object (and, therefore, 
    the std::ostream class) has overloaded methods named operator<< 
    that allow us to print the primitive types like integers and 
    floating-point numbers. If we create a new type, such as Point or 
    Rational, the std::ostream class has no operator<<method built in 
    to handle objects of our new type. 
    In order to use std::cout’s << operator with programmer-defined 
    objects we must define a global operator function of the form:

        std::ostream& operator<<(std::ostream& os, const X& x)

    where X represents a programmer-defined type. Notice that the function 
    returns type std::ostream&. This is because the first parameter is 
    also  an std::ostream&, and the function returns the same object that 
    was passed into it. If x is a programmer-defined type, the expression

        operator<<(std::cout, x)

    thus evaluates to a reference to std::cout. This process of returning 
    the object that was passed allows us to chain together the << operator, 
    as in

        std::cout << x << y << '\n';

    This is the beautified syntax for

        operator<<(operator<<(operator<<(std::cout, x), y), '\n');

    If you examine this expression carefully, you will see that the 
    first argument to all the calls of operator<< is simply std::cout.

    For our enhanced Point class, operator<< could look like:

        std::ostream& operator<<(std::ostream& os, const Point& p)
        {
            os << "(" << p.get_x() << ", " << p.get_y() << ')';
            return os;
        }

    The function simply returns the same std::ostream object reference that 
    was passed into it via the first parameter.

    Given the above definitions of operator+ and operator<<, clients can 
    write code such as:

        Point p1{1, 2};
        Point p2{0.45, 0};
        cout << "Point 1: " << p1 << '\n';
        cout << "Point 2: " << p2 << '\n';
        cout << p1 << " + " << p2 << " = " << p1 + p2 << '\n';
        
    which displays:

        // Point 1: (1, 2)
        // Point 2: (0.45, 0)
        // (1, 2) + (0.45, 0) = (1.45, 2)

*/

// Operator function:
// Overload the output stream << operator for Point class
std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << "(" << p.get_x() << ", " << p.get_y() << ')';
    return os;
}

/*
    NOTE:
    The << operator is not overloaded for the std::vector class, 
    but we now easily can do it ourselves as needed. 
    For a vector of integers, the following function:

*/
// Overload the output stream for a std::vector containing integers
std::ostream& operator<<(std::ostream& os, const std::vector<int>& v)
{
    int size = v.size();
    os << "{";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            os << v[i];
        }
        else
        {
            os << v[i] << ", ";
        }
    }
    os << "}";
    return os;
}

// Overload the output stream for a vector containing Point objects
std::ostream& operator<<(std::ostream& os, std::vector<Point> v)
{
    int size = v.size();
    os << "{";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            os << v[i];
        }
        else
        {
            os << v[i] << ", ";
        }
    }
    os << "}";
    return os;
}

int main()
{
    Point p1{1, 2};
    Point p2{0.45, 0};
    cout << "Point 1: " << p1 << '\n';
    cout << "Point 2: " << p2 << '\n';
    cout << p1 << " + " << p2 << " = " << p1 + p2 << '\n';
    // ->
    // Point 1: (1, 2)
    // Point 2: (0.45, 0)
    // (1, 2) + (0.45, 0) = (1.45, 2)

    std::vector<int> numbers{1, 2, 3, 4, 5};
    cout << numbers << '\n';
    // -> {1, 2, 3, 4, 5}

    std::vector<Point> ps;
    ps.push_back({1.1, 2.4});
    ps.push_back({3.5, 4.2});
    cout << ps;
    // -> {(1.1, 2.4), (3.5, 4.2)}
}
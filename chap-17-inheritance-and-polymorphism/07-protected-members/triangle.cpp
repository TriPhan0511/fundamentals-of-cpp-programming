#include <algorithm> // For std::max function
#include <cmath> // For std::sqrt function
#include "triangle.h"

Triangle::Triangle(double s1, double s2, double s3):
    side1(s1), side2(s2), side3(s3) {}

// The span of a triangle is the length of the longest side
double Triangle::span() const
{
    return std::max(side1, std::max(side2, side3));
    // return std::max(side1, side2, side3);
}

// Not having the base and height of the triangle explicitly,
// we use Heron's formula to compute the area
double Triangle::area() const
{
    // Compute semiperimeter
    double s = (side1 + side2 + side3) / 2;
    // Compute area using Heron's formula
    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
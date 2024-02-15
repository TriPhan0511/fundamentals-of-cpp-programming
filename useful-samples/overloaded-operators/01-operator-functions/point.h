#ifndef POINT_H_
#define POINT_H_

class Point
{
    double x;
    double y;
public:
    Point(double x, double y);
    double get_x() const;
    double get_y() const;
};

#endif
#include <iostream>
#include <cmath> // for sqrt

using std::cout;
using std::cin;

class Point
{
    double x;
    double y;
public:
    Point(int x, int y): x(x), y(y) {}    
    // Point(int a, int b): x(a), y(b) {}    

    void print()
    {
        cout << "{" << x << ", " << y << "}";
    }

    // Returns the distance from this point to the
    // parameter p
    double distance(Point p)
    {
        return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
    }
};


int main()
{
    Point p1{10, 1};
    Point p2{20, 15};
    cout << "The distance from p1 to p2 is " << p1.distance(p2);
}

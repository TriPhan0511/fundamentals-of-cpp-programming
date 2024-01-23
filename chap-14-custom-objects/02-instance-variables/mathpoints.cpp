#include <iostream>

using std::cout;
using std::cin;

// The Point class defines the structure of software objects
// that model mathematical, geometric points.
class Point {
public:
    double x; // The point's x coordinate
    double y; // The point's y coordinate    
};

int main() {
    // Declare some points objects
    Point pt1, pt2;
    // Assign their x and y fields
    pt1.x = 8.5;
    pt1.y = 0.0;
    pt2.x = -4.0;
    pt2.y = 2.5;
    // Print them
    cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
    cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
    // Reassign one point from the other
    pt1 = pt2;
    cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
    cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
    // Are pt1 and pt2 aliases? Change pt1's x coordinate and see.
    pt1.x = 0;
    cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
    // Note that pt2 is unchanged
    cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
    // ->
    // pt1 = (8.5,0)
    // pt2 = (-4,2.5)
    // pt1 = (-4,2.5)
    // pt2 = (-4,2.5)
    // pt1 = (0,2.5)
    // pt2 = (-4,2.5)

    cout << "The number of bytes object named pt1 occupies: " 
    << sizeof(pt1) << '\n';
    // -> The number of bytes object named pt1 occupies: 16
}

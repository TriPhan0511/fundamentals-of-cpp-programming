#include <iostream>

using std::cout;

class IntPoint
{
public:
    int x;
    int y;
    IntPoint(int x, int y): x(x), y(y) {}
};

class Rectangle
{
    IntPoint corner;
    int width;
    int height;

public:
    Rectangle(IntPoint pt, int w, int h):
        corner((pt.x < -100) ? -100 : (pt.x > 100 ? 100 : pt.x),
            (pt.y < -100 ? -100 : (pt.y > 100) ? 100 : pt.y)),
        width(w < 0 ? 0 : w),
        height(h < 0 ? 0: h) {}
    
    int perimeter()
    {
        return 2 * (width + height);
    }

    int area()
    {
        return width * height;
    }

    int get_width()
    {
        return width;
    }

    int get_height()
    {
        return height;
    }

    IntPoint get_corner()
    {
        return corner;
    }
};

int main()
{
    Rectangle rect1(IntPoint(-101, 102), 5, 7);    
    cout << "corner x: " << rect1.get_corner().x << '\n';
    cout << "corner y: " << rect1.get_corner().y << '\n';

    // Rectangle rect1(IntPoint(2, 3), 5, 7);
    // Rectangle rect2(IntPoint(2, 3), 1, 3);
    // Rectangle rect3(IntPoint(2, 3), 15, 3);
    // Rectangle rect4(IntPoint(2, 3), 5, 3);

    // cout << rect1.get_width() << '\n';
    // cout << rect1.get_height() << '\n';
    // cout << rect2.get_width() << '\n';
    // cout << rect2.get_height() << '\n';
    // cout << rect3.get_width() << '\n';
    // cout << rect3.get_height() << '\n';
    // cout << rect4.get_width() << '\n';
    // cout << rect4.get_height() << '\n';
    // cout << rect1.perimeter() << '\n';
    // cout << rect1.area() << '\n';
    // cout << rect2.perimeter() << '\n';
    // cout << rect2.area() << '\n';
    // cout << rect3.perimeter() << '\n';
    // cout << rect3.area() << '\n';
    // cout << rect4.perimeter() << '\n';
    // cout << rect4.area() << '\n';
}
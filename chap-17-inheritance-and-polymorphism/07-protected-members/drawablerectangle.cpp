#include <iostream>
#include "rectangle.h"

using std::cout;

class DrawableRectangle: public Rectangle
{
public:
    // Delegate construction to the base class
    DrawableRectangle(double length, double width):
        Rectangle(length, width) {}

    // Draw a rectangle using text graphics
    void draw() const
    {
        // Access the inherited protected fields
        int rows = static_cast<int>(length + 0.5);
        int columns = static_cast<int>(width + 0.5);
        // Draw the rectangle
        for (int i = 0; i < rows; i++)
        {
            for (int k = 0; k < columns; k++)
            {
                cout << "#";
            }
            cout << '\n';
        }
    }
};

int main()
{
    DrawableRectangle *rect1 = new DrawableRectangle(3, 2);
    DrawableRectangle *rect2 = new DrawableRectangle(10, 5);
    DrawableRectangle *rect3 = new DrawableRectangle(4, 8);
    rect1->draw();
    cout << "--------------------\n";
    rect2->draw();
    cout << "--------------------\n";
    rect3->draw();

    // Clean up memory
    delete rect1;
    delete rect2;
    delete rect3;
}

// int main()
// {
//     DrawableRectangle rect1(3, 2);
//     DrawableRectangle rect2(10, 5);
//     DrawableRectangle rect3(4, 8);
//     rect1.draw();
//     cout << "----------------------\n";
//     rect2.draw();
//     cout << "----------------------\n";
//     rect3.draw();
// }
#include <iostream>
#include <vector>
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "ellipse.h"

using std::cout;
using std::vector;

int main()
{
    Rectangle rect(3, 4);
    Triangle tri(3, 4, 5);
    Circle cir(4.5);
    Ellipse elli(3, 4);
    
    vector<Shape *> shapes;
    shapes.push_back(&rect);
    shapes.push_back(&tri);
    shapes.push_back(&cir);
    shapes.push_back(&elli);

    int size = shapes.size();
    double area_total = 0.0;
    double max_span = 0.0;

    for (const auto& s : shapes)
    {
        // Examine the area each shape
        cout << "Area = " << s->area() << '\n';
        // Accumulate the areas of all the shapes
        area_total += s->area();
        // Account for the longest object
        double shape_span = s->span();
        if (max_span < shape_span)
        {
            max_span = shape_span;
        }
    }

    // for (int i = 0; i < size; i++)
    // {
    //     // Examine the area each shape
    //     cout << "Area = " << shapes[i]->area() << '\n';
    //     // Accumulate the areas of all the shapes
    //     area_total += shapes[i]->area();
    //     // Account for the longest object
    //     double shape_span = shapes[i]->span();
    //     if (max_span < shape_span)
    //     {
    //         max_span = shape_span;
    //     }
    // }

    // Report the total area of all the shapes combined
    cout << "Total shape area is " << area_total << '\n';
    // Report the minimum length of the container
    cout << "Longest shape is " << max_span << '\n' ;
}
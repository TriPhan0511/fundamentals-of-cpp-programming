// The following program illustrates the style of enumerated type definition
// is known as an unscoped enumeration.

#include <iostream>

using std::cout;

enum SignalColor
{
    Red,
    Orange,
    Yellow,
    Green,
    Blue,
    Violet
};  

enum Shade
{
    Dark,
    Dim, 
    // Light, // Error: conflict
    Bright
};

enum Weight
{
    // Light, // Error: conflict
    Medium, 
    Heavy
};



int main()
{
    SignalColor my_color = Orange;
    // cout << my_color; // 1

    if (my_color == Orange)
    {
        cout << "Your color is Orange" << '\n';
    }
    else
    {
        cout << "Your color is NOT Orange" << '\n';
    }
    // -> Your color is Orange
}
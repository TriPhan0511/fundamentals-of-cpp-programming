#include <iostream>

int main(){
    // unscoped enumeration
    // enum Color {
    //     Red,
    //     Orange,
    //     Yellow,
    //     Green,
    //     Blue,
    //     Violet,
    // };

    // Color myColor = Blue;
    // // Color myColor = Orange;
    // if (myColor == Color::Orange)
    // {
    //     std::cout << "Yes, Orange";
    // } else
    // {
    //     std::cout << "No!";
    // }
    
    // enum Shade { Dark, Dim, Light, Bright };
    // enum Weight { Light, Medium, Heavy }; // error: 'Light' conflicts with a previous values-and-variables>enumera declaration
    // -----------------------------------------------------------------

    // scoped enumeration (also known as enumeration class)
    enum class Shade { Dark, Dim, Light, Bright };
    enum class Weight { Light, Medium, Heavy };

    Shade color = Shade::Dark;
    // Shade color = Shade::Light;
    Weight mass = Weight::Light;

    if (color == Shade::Light)
    {
        std::cout << "This is a light shade.";
    } else
    {
        std::cout << "This is NOT a light shade,";
    }
}


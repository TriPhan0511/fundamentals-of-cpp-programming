#include <iostream>
#include "trafficlight.h"

using std::cout;

void print(TrafficLight light)
{
    SignalColor color = light.get();
    cout << "+-------+\n";
    cout << "|       |\n";
    if (color == SignalColor::Red)
    {
        cout << "|  (R)  |\n";
    }
    else
    {
        cout << "|  ( )  |\n";
    }
    cout << "|       |\n";
    if (color == SignalColor::Yellow)
    {
        cout << "|  (Y)  |\n";
    }
    else
    {
        cout << "|  ( )  |\n";
    }
    cout << "|       |\n";
    if (color == SignalColor::Green)
    {
        cout << "|  (G)  |\n";
    }
    else
    {
        cout << "|  ( )  |\n";
    }
    cout << "|       |\n";
    cout << "+-------+\n";
}

int main()
{
    TrafficLight light(SignalColor::Green);
    print(light);
}

// -----------------------------------------------
// #include "trafficlight.h"
// #include <iostream>
// #include <string>

// using std::cout;
// using std::string;

// string color_to_string(SignalColor color)
// {
//     string result;
//     switch (color)
//     {
//     case SignalColor::Red:
//         result = "Red";
//         break;
//     case SignalColor::Green:
//         result = "Green";
//         break;
//     case SignalColor::Yellow:
//         result = "Yellow";
//         break;
    
//     default:
//         result = "Something went wrong!";
//         break;
//     }
//     return result;
// }

// int main()
// {
//     // TrafficLight light{SignalColor::Red};
//     // TrafficLight light{SignalColor::Green};
//     TrafficLight light{SignalColor::Yellow};

//     cout << "Initial color: ";
//     cout << color_to_string(light.get()) << '\n';
//     light.change();
//     cout << "After changing 1: ";
//     cout << color_to_string(light.get()) << '\n';
//     light.change();
//     cout << "After changing 2: ";
//     cout << color_to_string(light.get()) << '\n';
//     light.change();
//     cout << "After changing 3: ";
//     cout << color_to_string(light.get()) << '\n';
// }
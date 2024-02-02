#include <iostream>
#include "trafficsignal.h"

using std::cout;
using std::cin;
using std::string;

void print(TrafficSignal light)
{
    int color = light.get();
    cout << "+-------+\n";
    cout << "|       |\n";
    // if (color == 0)
    if (color == TrafficSignal::RED)
    {
        cout << "|  (R)  |\n";
    }
    else
    {
        cout << "|  ( )  |\n";
    }
    cout << "|       |\n";
    // if (color == 2)
    if (color == TrafficSignal::YELLOW)
    {
        cout << "|  (Y)  |\n";
    }
    else
    {
        cout << "|  ( )  |\n";
    }
    cout << "|       |\n";
    // if (color == 1)
    if (color == TrafficSignal::GREEN)
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

// Note: Press Ctrl+C to terminate the program
int main()
{
    TrafficSignal light(TrafficSignal::RED);
    while (true)
    {
        print(light);
        light.change();
        cin.get();        
    }
}

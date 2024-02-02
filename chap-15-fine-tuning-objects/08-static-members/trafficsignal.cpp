#include "trafficsignal.h"

// Ensures a traffic light object is in the state of
// red, green, or yellow. A rougue value makes the 
// traffic light red
TrafficSignal::TrafficSignal(int initial_color)
{
    switch (initial_color)
    {
    case RED:
    case GREEN:
    case YELLOW:
        this->color = initial_color;
        break;
    default:
        this->color = RED; // Red by default
    }
}

// Ensures the traffic light's signal sequence
void TrafficSignal::change()
{
    // red --> green, green --> yellow, yellow --> red
    color = (color + 1) % 3;
    
}

int TrafficSignal::get() const
{
    return this->color;
}


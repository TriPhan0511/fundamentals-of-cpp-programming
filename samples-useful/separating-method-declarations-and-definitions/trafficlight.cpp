#include "trafficlight.h"

// Ensure a traffic light object is in the state of
// red, green, or yellow.
// A rogue values makes the traffic light red.
TrafficLight::TrafficLight(SignalColor initial_color)
{
    switch (initial_color)
    {
    case SignalColor::Red:
    case SignalColor::Green:
    case SignalColor::Yellow:
        color = initial_color;
        break;
    default:
        color = SignalColor::Red; // Red by default, just in case
    }
}

// Ensures the traffic light's signal sequence
// red --> green, green --> yellow, yellow --> red
void TrafficLight::change()
{
    if (this->color == SignalColor::Red)
    {
        this->color = SignalColor::Green;
    }
    else if (this->color == SignalColor::Green)
    {
        this->color = SignalColor::Yellow;
    }
    else if (this->color == SignalColor::Yellow)
    {
        this->color = SignalColor::Red;
    }
}

// Returns the light's current color 
// so a client can act accordingly
SignalColor TrafficLight::get() const
{
    return this->color;
}
// The following program use some const static fields

#ifndef TRAFFICSIGNAL_H_
#define TRAFFICLIGHT_H_

class TrafficSignal
{
    int color; // The light's current color: RED, GREEN, or YELLOW
public:
    // Class constants available to clients
    static const int RED = 0;
    static const int GREEN = 1;
    static const int YELLOW = 2;

    TrafficSignal(int initial_color);
    void change();
    int get() const;
};

#endif
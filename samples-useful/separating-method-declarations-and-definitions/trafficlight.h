enum class SignalColor
{
    Red,
    Green,
    Yellow
};

class TrafficLight
{
private:
    SignalColor color; // The light's current color: Red, Green, or Yellow
public:
    TrafficLight(SignalColor initial_color);
    void change();
    SignalColor get() const;
};
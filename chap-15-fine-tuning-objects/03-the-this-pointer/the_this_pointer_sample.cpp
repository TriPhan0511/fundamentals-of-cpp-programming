#include <iostream>

using std::cout;

class Counter
{
    int count;
public:
    // Constructor
    Counter(int value): count(value) {}

    // Allow clients to reset the counter to zero
    void clear()
    {
        this->count = 0;
        // Pass this object off to the log function
        // log(*this);
    }

    // Allow clients to increment the counter
    void inc()
    {
        this->count++;
    }

    // Return a copy of the counter's current value
    int get()
    {
        return this->count;
    }
};

void log(Counter c)
{
    cout << "Counter: " << c.get();
}

int main()
{
    Counter c{1};
    // log(c);
    c.clear();
    
}

// -------------------------------------------------------------

// class Point
// {
//     double x;
//     double y;
// public:
//     void set_x(double x)
//     {
//         this->x = x;
//     }

//     void set_y(double y)
//     {
//         this->y = y;
//     }

//     void display()
//     {
//         cout << "{" << this->x << ", " << this->y << "}";
//     }
// };

// int main()
// {
//     Point p;
//     p.set_x(3.0);
//     p.set_y(4.5);
//     p.display();
// }
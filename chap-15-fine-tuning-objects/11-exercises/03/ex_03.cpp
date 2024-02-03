#include <iostream>

using std::cout;

class Gadget
{
    int value;
public:
    Gadget(int v): value(v) {}
    int get() const
    {
        cout << this << '\n';
        return this->value;
    }
};

int main()
{
    cout << '\n';

    Gadget x(5);
    int y = x.get();
    cout << "y = " << y << '\n'; // y = 5
}
#include <iostream>

class Widget
{
    int data;
public:
    Widget(int d): data(d) {}
    friend class Gadget;
};

class Gadget{
    int value;
public:
    // A gadget object copies the private data from a Widget object
    Gadget(const Widget& w): value(w.data) {}
    int get() const
    {
        return this->value;
    }
    bool compare(const Widget& w)
    {
        return this->value == w.data;
    }
};

int main()
{
    Widget wid{45};
    Gadget gad{wid};
    std::cout << gad.get() << '\n';
    if (gad.compare(wid))
    {
        std::cout << "They are the same" << '\n';
    }
    // ->
    // 45
    // They are the same
}
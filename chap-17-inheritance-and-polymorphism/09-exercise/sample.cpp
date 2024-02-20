#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Widget
{
public:
    virtual int f() { return 1; }
    // virtual int f() = 0;
    // int f() { return 1; }
};

class Gadget: public Widget
{
public:
    // virtual int f() { return 2; }
    int f() { return 2; }
};

class Gizmo: public Widget
{
    // virtual int f() { return 3; }
    int f() { return 3; }
};

void do_it(Widget *w)
{
    cout << w->f() << " ";
}

int main()
{
    vector<Widget *> v;
    Widget wid;
    Gadget gad;
    Gizmo giz;   
    v.push_back(&wid);
    v.push_back(&gad);
    v.push_back(&giz);

    size_t size = v.size();
    for (size_t i = 0; i < size; i++)
    {
        do_it(v[i]);
    }
}

/*
    Questions:

    (a) What does the program print?
    // -> 1 2 3

    (b) Would the program still compile and run if the f method within the Widget class were a pure
        virtual function?
    // -> No, the program won't compile since the Widget class is a abstract class (which contains
        only pure abstract functions so we can not declare an object from it.

    (c) How would the program run differently if the virtual keyword were removed from all the
        code?
    // -> 1 1 1 

    (d) Would the program behave the same if the virtual keyword were removed from all the
        classes except for Widget?
    // -> 1 2 3
*/
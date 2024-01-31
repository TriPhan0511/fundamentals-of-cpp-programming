#include <iostream>

using std::cout;

class Widget
{
    int value;
public:
    Widget();
    Widget(int v);
    int get();
    void bump();
};

Widget::Widget()
{
    value = 40;
}

Widget::Widget(int v)
{
    if (v >= 40)
    {
        value = v;
    }
    else
    {
        value = 0;
    }
}

int Widget::get()
{
    return value;
}

void Widget::bump()
{
    if (value < 50)
    {
        value++;
    }
    
}

int main()
{
    Widget w1;
    Widget w2(5);;
    cout << w1.get() << '\n'; // 40
    cout << w2.get() << '\n'; // 0
    w1.bump();
    w2.bump();
    cout << w1.get() << '\n'; // 41
    cout << w2.get() << '\n'; // 1
    for (int i = 0; i < 20; i++)
    {
        w1.bump();
        w2.bump();
    }
    cout << w1.get() << '\n'; // 50
    cout << w2.get() << '\n'; // 21
}
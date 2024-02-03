#include <iostream>

using std::cout;

class Counter
{
    int value;
public:
    Counter(): value(0) {}
    void increment()
    {
        this->value++;
    }
    int get()
    {
        return this->value;
    }
};

int main()
{
    cout << '\n';
    
    Counter c1;
    const Counter c2;

    // c1.increment();
    // c2.increment(); // illegal

    int x = c1.get();
    // int y = c2.get(); // illegal

    cout << "x = " << x << '\n';

}

// ----------------------------------------------------------
// #include <iostream>

// using std::cout;

// class Counter
// {
//     int value;
// public:
//     Counter(): value(0) {}
//     void increment()
//     {
//         this->value++;
//     }
//     int get() const
//     {
//         return this->value;
//     }
// };

// int main()
// {
//     cout << '\n';
    
//     Counter c1;
//     const Counter c2;

//     // c1.increment();
//     // c2.increment(); // illegal

//     int x = c1.get();
//     int y = c2.get();

//     cout << "x = " << x << ", y = " << y << '\n'; // x = 0, y = 0

// }
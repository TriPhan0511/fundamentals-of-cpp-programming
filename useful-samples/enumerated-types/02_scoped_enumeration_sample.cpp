/*
    The following program illustrates an enhanced way of
    defining enumerated types known as scoped enumerations,
    also known as enumeration classes.

    Scoped enumrations solve the problem of duplicate 
    enumeration values in different types.
*/

#include <iostream>

using std::cout;

enum class Shade
{
    Dark,
    Dim, 
    Light,
    Bright
};

enum class Weight
{
    Light,
    Medium,
    Heavy
};

int main()
{
    auto my_shade = Shade::Light;
    auto my_weight = Weight::Light;

    if (my_shade == Shade::Light)
    {
        cout << "Your shade is Light" << '\n';
    }
    else
    {
        cout << "Your shade is NOT Light" << '\n';
    }
    // -> Your shade is Light

    if (my_weight == Weight::Light)
    {
        cout << "Your weight is Light" << '\n';
    }
    else
    {
        cout << "Your weight is NOT Light" << '\n';
    }
    // -> Your weight is Light
}
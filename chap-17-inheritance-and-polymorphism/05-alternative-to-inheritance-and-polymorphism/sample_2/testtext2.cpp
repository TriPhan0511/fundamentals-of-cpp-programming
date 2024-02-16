#include <iostream>
#include <string>
#include <vector>
#include "alttext2.h"

using std::cout;
using std::string;
using std::vector;


int main()
{
    vector<AltText2> texts
    {
        {TextType::Plain, "Wow"},
        {TextType::Fancy, "Wee", "[", "]", "-"},
        {TextType::Fixed},
        {TextType::Bounded, "XYZ", 5},
        {TextType::Fancy, "Whoa", ":", ":", ":"}
    };

    for (const auto& t : texts)
    {
        cout << t.get() << '\n';
    }
    cout << "----------------------------\n";
    for (auto& t : texts)
    {
        t.append("A");
        t.append("B");
        t.append("C");
        t.append("D");
        t.append("E");
        t.append("F");
    }
    for (const auto& t : texts)
    {
        cout << t.get() << '\n';
    }
    // ->
    // Wow
    // [Wee]
    // FIXED
    // XYZ
    // :Whoa:
    // ----------------------------
    // WowABCDEF
    // [Wee-A-B-C-D-E-F]
    // FIXED
    // XYZAB
    // :Whoa:A:B:C:D:E:F:
}
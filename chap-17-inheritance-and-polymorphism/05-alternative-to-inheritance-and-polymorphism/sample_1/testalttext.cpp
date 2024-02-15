#include <iostream>
#include <string>
#include <vector>
#include "alttext.h"

using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<AltText> texts 
    {
        { TextType::Plain, "Wow" },
        { TextType::Fancy, "Wee", "[", "]", "-" },
        { TextType::Fixed },
        { TextType::Fancy, "Whoa", ":", ":", ":" }
    };

    for (const auto& t : texts)
    {
        cout << t.get() << '\n';
    }
    for (auto& t : texts)
    {
        t.append("A");
        t.append("B");
        t.append("C");
    }
    for (const auto& t : texts)
    {
        cout << t.get() << '\n';
    }
    // ->
    // Wow
    // [Wee]
    // FIXED
    // :Whoa:
    // WowABC
    // [Wee-A-B-C]
    // FIXED
    // :Whoa:A:B:C
}
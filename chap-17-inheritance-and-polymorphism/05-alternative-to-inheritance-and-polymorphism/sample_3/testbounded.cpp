#include <iostream>
#include <vector>
#include <string>
#include "text.h"
#include "fancytext.h"
#include "fixedtext.h"
#include "boundedtext.h"

using std::cout;
using std::vector;
using std::string;



int main()
{
    vector<Text *> texts
    {
        new Text("Wow"),
        new FancyText("Wee", "[", "]", "-"),
        new FixedText,
        new BoundedText("XYZ", 5),
        new FancyText("Whoa", ":", ":", ":")
    };

    for (auto t : texts)
    {
        cout << t->get() << '\n';
    }
    cout << "-------------------------\n";

    for (auto t : texts)
    {
        t->append("A");
        t->append("B");
        t->append("C");
        t->append("D");
        t->append("E");
        t->append("F");
    }
    
    for (auto t : texts)
    {
        cout << t->get() << '\n';
    }
    
    // Clean up memory
    for (auto t : texts)
    {
        delete t;
    }
    // ->
    // Wow
    // [Wee]
    // FIXED
    // XYZ
    // :Whoa:
    // -------------------------
    // WowABCDEF
    // [Wee-A-B-C-D-E-F]
    // FIXED
    // XYZAB
    // :Whoa:A:B:C:D:E:F:
}
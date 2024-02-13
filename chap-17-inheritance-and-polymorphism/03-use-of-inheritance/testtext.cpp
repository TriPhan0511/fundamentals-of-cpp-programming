#include <iostream>
#include <string>
// #include "text.h"
#include "fancytext.h"
#include "fixedtext.h"

using std::cout;
using std::string;

int main()
{
    // Text t1("ABC");
    // FancyText t2("XYZ", "[", "]", ":");
    // cout << t1.get() << " " << t2.get() << '\n';
    // t1 = t2;
    // cout << t1.get() << " " << t2.get() << '\n';
    // ->
    // ABC [XYZ]
    // XYZ [XYZ]
    /*
        NOTE:
        Notice that the assignment:
            t1 = t2;
        copied into object t1 only the fields that FancyText 
        objects have in common with Text objects; that is,
        the text field. Since t1 is a plain Text object, 
        it does not have the left_bracket, right_brack, and
        connector fields capable of storing the additional
        data contained in a FancyText object. This process of
        losing derived class data when assigning to a base
        class instance is known as object slicing. The parts
        that will not fit into the base class instance are 
        "sliced" off.

        Note that the assignment in the other direction:
            t2 = t1; // Illegal
        is not possible; even though any FancyText object is 
        a Text object, we cannot say any Text object is a 
        FancyText object (it could be a FixedText object or
        just a Text object without any special decoration).
    */

   /*
        NOTE:
        FixedText class instances do not contain any additional
        data that plain Text instances do not have,
        but the assignment rules remain the same:
   */
    Text t1("ABC");
    FixedText t3;
    cout << t1.get() << " " << t3.get() << '\n';
    t1 = t3;
    cout << t1.get() << " " << t3.get() << '\n';
    // ->
    // ABC FIXED
    // FIXED FIXED

    /*
        but the statement:
            t3 = t1; // Illegal
        is illegal and will not compile.
    */
}


// int main()
// {
//     Text t1("plain");
//     FancyText t2("fancy", "<<", ">>", "***");
//     FixedText t3;
//     cout << t1.get() << '\n';
//     cout << t2.get() << '\n';
//     cout << t3.get() << '\n';
//     cout << "--------------------------------------\n";
//     t1.append("A");
//     t2.append("A");
//     t3.append("A");
//     cout << t1.get() << '\n';
//     cout << t2.get() << '\n';
//     cout << t3.get() << '\n';
//     cout << "--------------------------------------\n";
//     t1.append("B");
//     t2.append("B");
//     t3.append("B");
//     cout << t1.get() << '\n';
//     cout << t2.get() << '\n';
//     cout << t3.get() << '\n';
// }
// // ->
// // plain
// // <<fancy>>
// // FIXED
// // --------------------------------------
// // plainA
// // <<fancy***A>>
// // FIXED
// // --------------------------------------
// // plainAB
// // <<fancy***A***B>>
// // FIXED

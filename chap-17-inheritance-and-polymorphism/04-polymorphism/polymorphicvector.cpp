#include <iostream>
#include <string>
#include <vector>
#include "fancytext.h"
#include "fixedtext.h"

using std::cout;
using std::string;
using std::vector;

int main()
{
    // vector<Text *> texts 
    // {
    //     new Text("Wow"),
    //     new FancyText("Wee", "[", "]", "-"),
    //     new FixedText,
    //     new FancyText("Whoa", ":", ":", ":")
    // };

    vector<Text*> texts;
    Text *t1 = new Text("Wow");
    Text *t2 = new FancyText("Wee", "[", "]", "-");
    Text *t3 = new FixedText;
    Text *t4 = new FancyText("Whoa", ":", ":", ":");
    texts.push_back(t1);
    texts.push_back(t2);
    texts.push_back(t3);
    texts.push_back(t4);

    for (auto t: texts)
    {
        cout << t->get() << '\n';
    }
    for (auto t : texts)
    {
        t->append("A");
        t->append("B");
        t->append("C");
    }
    for (auto t: texts)
    {
        cout << t->get() << '\n';
    }
    for (auto t : texts)
    {
        delete t;
    }
}

/*
    NOTE:
    We know from Section 11.1 that a vector is a collection of homogeneous elements. Homogeneous means
    the elements in a vector must all be of the same type. Homogeneity takes on a deeper meaning when
    inheritance and the is a relationship is involved. In Listing 17.10 (polymorphicvector.cpp) the declared type
    of the texts vector is std::vector<Text *>.With inheritance, not only can the texts vector hold
    pointers to simple Text objects, it also simultaneously can hold pointers to FixedText and FancyText
    objects. Listing 17.10 (polymorphicvector.cpp) prints:
        Wow
        [Wee]
        FIXED
        :Whoa:
        WowABC
        [Wee-A-B-C]
        FIXED
        :Whoa:A:B:C:
    As we can see, the expression t->get() in the main function is polymorphic; the actual get method
    invoked—Text::get, FancyText::get, or FixedText::get—depends on the exact type of the
    object to which t points. The append method is polymorphic as well. As t assumes the value of each
    element in the vector during the loop’s execution, the exact type of object that t points to varies. Even
    though all the elements of the texts vector are pointers to Text objects, only one of the elements points
    to a pure Text object; the rest of the elements point to FancyText or FixedText objects.
*/

/*
    Why must we use pointers to objects rather than the objects themselves to achieve polymorphism?
    Remember that a pointer stores a memory address (see Section 10.7). All pointers, no matter what type they
    point to, are all the same size (4 bytes on 32-bit systems and 8 bytes on 64-bit systems). Text objects and
    FancyText objects are not the same size (see Figure 17.1 for a conceptual picture); FancyText objects
    are bigger, containing three extra string fields. All the elements of a vector must be the same size. If we
    made texts a vector of Text objects rather than a vector of pointers to Text objects, when we assign a
    FancyText object to an element in the texts vector, the assignment would slice the extra fields in the
    FancyText object. Pointer assignment avoids the slicing problem.

    The main reason for using pointers is that C++ uses static binding for all methods (virtual and nonvirtual)
    invoked on behalf of an object; the compiler chooses the method based on the declared type of the
    object. In contrast, C++ uses dynamic binding for virtual method calls made via pointers to objects; the
    exact type of the object determines the method selection.
*/

// int main()
// {
//     // Use objects themselves
//     vector<Text> texts
//     {
//         Text("Wow"),
//         FancyText("Wee", "[", "]", "-"),
//         FixedText(),
//         FancyText("Whoa", ":", ":", ":")
//     };

//     for (auto& t : texts)
//     {
//         cout << t.get() << '\n';
//     }
//     for (auto t : texts)
//     {
//         t.append("A");
//         t.append("B");
//         t.append("C");
//     }
//     for (auto t: texts)
//     {
//         cout << t.get() << '\n';
//     }
//     cout <<"==========================\n";

//     // Use pointers to objects
//     vector <Text *> texts2
//     {
//         new Text("Wow"),
//         new FancyText("Wee", "[", "]", "-"),
//         new FixedText(),
//         new FancyText("Whoa", ":", ":", ":")
//     };

//     for (auto& t : texts2)
//     {
//         cout << t->get() << '\n';
//     }
//     for (auto t : texts2)
//     {
//         t->append("A");
//         t->append("B");
//         t->append("C");
//     }
//     for (auto t: texts2)
//     {
//         cout << t->get() << '\n';
//     }
//     for (auto t : texts2)
//     {
//         delete t;
//     }
// }
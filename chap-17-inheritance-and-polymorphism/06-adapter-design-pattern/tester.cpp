#include <iostream>
#include <string>
#include <vector>
#include "message.h"
#include "text.h"
// #include "fancytext.h"
// #include "fixedtext.h"

using std::cout;
using std::string;
using std::vector;

// get_message is a function that provides a Message object
Message get_message()
{
    Message msg("My message");
    return msg;
}

/*
    What if would like to maintain a collection of Text and Message objects, storing them all 
    in a single vector? Is this possible? All of the elements in a particular C++ vector must 
    all be of the same type. The Message class is not part of the Text class hierarchy, so no 
    is a relationship exists between the two classes. Let us experiment with two possible 
    solutions to this problem.
*/

// Solution 2:
// Use inheritance and polymorphism to encapsulate Message objects within Text objects
// We can derive a new Text class in a clever way to allow us to place Message objects
// into a vector of Text objects. Consider the following new class:

class MessageText: public Text
{
    Message *msg;
public: 
    MessageText(Message *m): Text(""), msg(m) {}
    string get() const override
    {
        return msg->text();
    }
};

/*
    Instances of this MessageText class wrap a pointer to a Message object. The constructor 
    does not call the wrapped Message object’s text method, so making a MessageText object 
    from a Message object does not artificially elevate the access count for the Message object.
    Further, any call to a MessageText object’s get method actually calls the text method of 
    the Message object it is managing. The following code:
*/

int main()
{
    Message msg = get_message();
    MessageText txt(&msg);
    vector<Text *> texts;
    texts.push_back(&txt);
    cout << texts[0]->get() << '\n';
    cout << texts[0]->get() << '\n';
    cout << msg.access_count() << '\n'; // -> 2
}

// ---------------------------------------------------------------------
// Solution 1:
// Make a copy of a Message object

// int main()
// {
//     // get_message is a function that provides a Message object
//     Message msg = get_message();
//     // Put the text inside msg into a new Text object
//     Text txt(msg.text());
//     // Insert a pointer to the text object into vector
//     vector<Text *> texts;
//     texts.push_back(&txt);
//     cout << texts[0]->get() << '\n';
//     cout << texts[0]->get() << '\n';
//     cout << msg.access_count() << '\n'; // -> 1
// }

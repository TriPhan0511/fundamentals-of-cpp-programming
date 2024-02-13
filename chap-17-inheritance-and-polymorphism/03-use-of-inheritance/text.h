#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED

#include <string>

using std::string;

class Text
{
    string text;
public:
    // Create a Text object from a client-supplied string
    Text(const string& t);

    // Allow clients to see the text field
    virtual string get() const;

    // Concatenate another string onto the
    // back of the existing text
    virtual void append(const string& extra);

    // Any class that has at least one virtual function should
    // define a virtual destructor
    virtual ~Text()=default;
};

#endif
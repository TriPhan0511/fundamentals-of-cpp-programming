#include "text.h"

// Create a Text object from a client-supplied string
Text::Text(const string& t): text(t) {}

// Allow clients to see the text field
string Text::get() const
{
    return text;
}

// Concatenate another string onto the
// back of the existing text
void Text::append(const string& extra)
{
    text += extra;
}
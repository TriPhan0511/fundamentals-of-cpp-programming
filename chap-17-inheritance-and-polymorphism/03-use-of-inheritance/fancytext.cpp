#include "fancytext.h"

// Client supplies the string to wrap plus some extra
// decorations
FancyText::FancyText(const string& t, const string& left,
                     const string& right, const string& conn):
    Text(t), left_bracket(left),
    right_bracket(right), connector(conn) {}

// FancyText::FancyText(const string& t, const string& left,
//     const string& right, const string& conn):
//     left_bracket(left), Text(t),
//     right_bracket(right), connector(conn) {}

// Allow clients to see the decorated text field
string FancyText::get() const
{
    return left_bracket + Text::get() + right_bracket;
}

// Concatenate another string onto the
// back of the existing text, inserting the connector string
void FancyText::append(const string& extra)
{
    Text::append(connector + extra);
}
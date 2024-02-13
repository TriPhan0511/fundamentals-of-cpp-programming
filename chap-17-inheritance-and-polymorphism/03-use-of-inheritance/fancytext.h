#ifndef FANCYTEXT_H_INCLUDED
#define FANCYTEXT_H_INCLUDED

// Compiler needs to know specifics of the Text class in order to
// derive a new class from it
#include "text.h"

// Provide minimal decoration for the text
class FancyText: public Text
{
    string left_bracket;
    string right_bracket;
    string connector;
public:
    // Client supplies the string to wrap plus some extra
    // decorations
    FancyText(const string& t, const string& left,
        const string& right, const string& conn);

    // Allow clients to see the decorated text field
    string get() const override;

    // Concatenate another string onto the
    // back of the existing text, inserting the connector string
    void append(const string& extra) override;
};

#endif
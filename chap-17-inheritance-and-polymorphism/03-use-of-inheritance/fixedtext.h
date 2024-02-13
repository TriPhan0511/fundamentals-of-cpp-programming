#ifndef FIXEDTEXT_H_INCLUDED
#define FIXEDTEXT_H_INCLUDED

// Compiler needs to know specifics of the Text class in order to
// derive a new class from it
#include "text.h"

// The text is always the word FIXED
class FixedText: public Text
{
public:
    // Client does not provide a string argument;
    // the wrapped text is always "FIXED"
    FixedText();

    // Nothing may be appended to a FixedText object
    void append(const string&) override;
};

#endif
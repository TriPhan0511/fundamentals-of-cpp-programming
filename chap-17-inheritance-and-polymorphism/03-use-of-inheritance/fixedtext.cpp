#include "fixedtext.h"

// Client does not provide a string argument;
// the wrapped text is always "FIXED"
FixedText::FixedText(): Text("FIXED") {}

// Nothing may be appended to a FixedText object
void FixedText::append(const string&)
{
    // Disallow concatenation
}
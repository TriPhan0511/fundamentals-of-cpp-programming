#include "alttext2.h"

AltText2::AltText2(TextType type, const string& t):
    type(type), text(t) {}

AltText2::AltText2(TextType type, const string& t, const string& left, 
            const string& right, const string& conn):
            type(type), text(t), left_bracket(left),
            right_bracket(right), connector(conn) {}   

AltText2::AltText2(TextType type): type(type), text("FIXED") {}

AltText2::AltText2(TextType type, const string& t, size_t limit):
    type(type),
    text(t.substr(0, limit)), // Ensure text initially does not exceed bound
    length_limit(limit) {}

string AltText2::get() const
{
    switch (type)
    {
    case TextType::Plain:
    case TextType::Fixed:
    case TextType::Bounded:
        return text;
    case TextType::Fancy:
        return left_bracket + text + right_bracket;    
    default:
        return "UNKNOWN TYPE";
    }
}

void AltText2::append(const string& extra)
{
    switch (type)
    {
    case TextType::Plain:
        text += extra;
        break;
    case TextType::Fancy:
        text += connector + extra;
        break;
    case TextType::Fixed:
        break; // Ignore attempt to append
    case TextType::Bounded:
        // Ensure the length does not exceed the established limit
        int avail = length_limit - text.length();
        text += extra.substr(0, avail);
        break;
    }
}
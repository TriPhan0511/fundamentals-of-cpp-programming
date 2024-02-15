#include "alttext.h"

AltText::AltText(TextType type, const std::string& t):
    type(type), text(t) {}

AltText::AltText(TextType type, const std::string& t,
                 const std::string& left, const std::string& right,
                 const std::string& conn):
    type(type), text(t), left_bracket(left), 
    right_bracket(right), connector(conn) {}

AltText::AltText(TextType type): type(type), text("FIXED") {}

std::string AltText::get() const
{
    switch (type)
    {
    case TextType::Plain:
    case TextType::Fixed:
        return text;
    case TextType::Fancy:
        return left_bracket + text + right_bracket;
    default:
        return "UNKNOWN TYPE";
    }
}


void AltText::append(const std::string& extra)
{
    switch (type)
    {
    case TextType::Plain:
        text += extra; // Just concatenate
        break;
    case TextType::Fancy:
        text += connector + extra; // Join with connector
        break;
    case TextType::Fixed:
        break; // Ignore attempt to append
    }
}
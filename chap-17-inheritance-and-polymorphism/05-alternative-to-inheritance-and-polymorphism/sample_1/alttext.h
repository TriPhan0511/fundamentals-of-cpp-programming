#ifndef ALT_TEXT_H_INCLUDED
#define ALT_TEXT_H_INCLUDED

#include <string>

// using std::string;

// The kinds of text objects supported
enum class TextType { Plain, Fancy, Fixed};

class AltText
{
    TextType type;
    std::string text;
    std::string left_bracket;
    std::string right_bracket;
    std::string connector;
public:
    AltText(TextType type, const std::string& t);
    AltText(TextType type, const std::string& t,
                     const std::string& left, const std::string& right,
                     const std::string& conn);
    AltText(TextType type);
    std::string get() const;
    void append(const std::string& extra);
};

#endif
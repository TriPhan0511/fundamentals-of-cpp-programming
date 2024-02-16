#ifndef ALT_TEXT2_H_INCLUDED
#define ALT_TEXT2_H_INCLUDED

#include <string>

using std::string;

// The kind of text objects supprted (added Bounded)
enum class TextType { Plain, Fancy, Fixed, Bounded };

class AltText2
{
    TextType type;
    string text;
    string left_bracket;
    string right_bracket;
    string connector;
    size_t length_limit; // Maximum number of characters in the text
public:
    AltText2(TextType type, const string& t);
    AltText2(TextType type, const string& t, const string& left, 
            const string& right, const string& conn);
    AltText2(TextType type);            
    // Constructor for a length-bounded text object
    AltText2(TextType type, const string& t, size_t limit);
    string get() const;
    void append(const string& extra);
};

#endif
#include "text.h"

Text::Text(const std::string& t): text(t) {}

std::string Text::get() const
{
    return text;
}

void Text::append(const std::string& extra)
{
    text += extra;
}
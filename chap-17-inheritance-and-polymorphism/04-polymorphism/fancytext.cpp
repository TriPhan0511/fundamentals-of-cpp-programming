#include "fancytext.h"

FancyText::FancyText(std::string t, std::string left,
                     std::string right, std::string conn):
    Text(t), left_bracket(left),
    right_bracket(right), connector(conn) {}

std::string FancyText::get() const
{
    return left_bracket + Text::get() + right_bracket;
}

void FancyText::append(const std::string& extra)
{
    Text::append(connector + extra);
}
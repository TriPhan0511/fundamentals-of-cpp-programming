#ifndef FANCYTEXT_H_INCLUDED
#define FANCYTEXT_H_INCLUDED

#include "text.h"

class FancyText: public Text
{
    std::string left_bracket;
    std::string right_bracket;
    std::string connector;
public:
    FancyText(std::string t, std::string left, std::string right, std::string conn);
    std::string get() const override;
    void append(const std::string& extra) override;
};

#endif


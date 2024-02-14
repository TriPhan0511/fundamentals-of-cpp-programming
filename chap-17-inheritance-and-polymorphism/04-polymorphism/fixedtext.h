#ifndef FIXEDTEXT_H_INCLUDED
#define FIXEDTEXT_H_INCLUDED

#include "text.h"

class FixedText: public Text
{
public:
    FixedText();
    void append(const std::string&) override;
};

#endif


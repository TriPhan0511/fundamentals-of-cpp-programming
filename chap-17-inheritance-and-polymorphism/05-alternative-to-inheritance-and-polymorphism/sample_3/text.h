#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED

#include <string>

class Text
{
    std::string text;
public:
    Text(const std::string& t);
    virtual std::string get() const;
    virtual void append(const std::string& extra);
};

#endif
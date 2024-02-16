#ifndef TEXT_H_INCLUDED_
#define TEXT_H_INCLUDED_

#include <string>

using std::string;

class Text
{
    string text;
public:
    Text(const string& t);
    virtual string get() const;
    virtual void append(const string& extra);
    virtual ~Text()=default;
};

#endif
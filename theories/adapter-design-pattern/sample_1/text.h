#ifndef TEXT_H_
#define TEXT_H_

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
#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED

#include <string>

using std::string;

class Test
{
    string text;
public:
    Test(const string& t);
    virtual string get() const;
    virtual void append(const string& extra);
    virtual ~Test()=default;
};

#endif
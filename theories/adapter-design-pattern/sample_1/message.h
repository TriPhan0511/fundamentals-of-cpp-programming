#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <string>

using std::string;

class Message
{
    string msg;
    static int count;
public:
    Message(const string& m);
    string text() const;
    int access_count();
};

#endif
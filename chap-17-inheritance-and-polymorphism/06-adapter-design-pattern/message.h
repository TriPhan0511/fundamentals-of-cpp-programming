#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <iostream>

using std::string;

class Message
{
    string msg;
    static int count;
public:
    Message(string msg);
    string text();
    int access_count();
};

#endif

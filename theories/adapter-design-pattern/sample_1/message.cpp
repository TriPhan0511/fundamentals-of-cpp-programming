#include "message.h"

int Message::count = 0;

Message::Message(const string& m): msg(m) {}

string Message::text() const
{
    count++;
    return msg;
}

int Message::access_count()
{
    return count;
}
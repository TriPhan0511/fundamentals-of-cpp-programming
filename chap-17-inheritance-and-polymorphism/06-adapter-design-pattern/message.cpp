#include "message.h"

// Initialize the static variable named count
int Message::count = 0;

Message::Message(string msg): msg(msg) {}

string Message::text()
{
    count++;
    return msg;
}

int Message::access_count()
{
    return count;
}
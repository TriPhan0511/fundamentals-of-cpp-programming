#include "messagetext.h"

MessageText:: MessageText(Message *m): msg(m), Text("") {}

string MessageText::get() const
{
    return msg->text();
}
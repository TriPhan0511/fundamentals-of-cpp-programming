#ifndef MESSAGETEXT_H_
#define MESSAGETEXT_H_

#include "text.h"
#include "message.h"

class MessageText: public Text
{
    Message *msg;
public:
    MessageText(Message *m);
    string get() const override;
};

#endif


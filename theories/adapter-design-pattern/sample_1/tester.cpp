#include <iostream>
#include <vector>
#include <string>
#include "text.h"
#include "message.h"
#include "messagetext.h"

using std::cout;
using std::vector;
using std::string;

Message get_message()
{
    return {"My message"};
}

int main()
{
    Message msg = get_message();
    MessageText txt(&msg);
    vector<Text *> texts;
    texts.push_back(&txt);
    cout << texts[0]->get() << '\n';
    cout << texts[0]->get() << '\n';
    cout << msg.access_count() << '\n'; // -> 2
    
}
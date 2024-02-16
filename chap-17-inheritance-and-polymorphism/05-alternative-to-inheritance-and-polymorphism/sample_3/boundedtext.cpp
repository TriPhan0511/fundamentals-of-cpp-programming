#include "boundedtext.h"

BoundedText::BoundedText(const std::string& t, size_t limit):
    Text(t.substr(0, limit)), // Ensure etxt initially does not exceed bound
    length_limit(limit) {}

void BoundedText::append(const std::string& extra)
{
    // Ensure the length does not exceed the established limit
    int avail = length_limit - get().length();
    Text::append(extra.substr(0, avail));
}
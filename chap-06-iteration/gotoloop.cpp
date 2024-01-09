// Illustrate the goto statement

#include <iostream>

int main()
{
    int count = 1; // Initialize couter
    top:
        if (count > 5)
        {
            goto end;
        }
        std::cout << count << '\n';
        count++;
        goto top;
    end:
        ; // Target is an empty statement
        
}
#include <iostream>

using std::cout;

int main()
{
    cout << '\n';

    // Countdown from one hundred to zero?
    for (unsigned i = 100; i >= 0; i--)
    {
        cout << "i = " << i << '\n';
    }
    
}
/*
NOTE:
When compiled and executed, the program begins as expected:
i = 100
i = 99
i = 98
i = 97
i = 96
i = 95
i = 94

but when it gets to the expected stopping point, it does not stop! (You will have to wait for a really long
time for the program to get to this point. You can witness the same effect in a shorter time if you replace
unsigned with unsigned short.)

In fact, it never stops because it is stuck in an infinite loop. It keeps printing all the possible unsigned int
values that the system supports (and there are many of them), over and over again. This is because when i
is zero the expression i >= 0 is true. Subtracting 1 from 0 ordinarily would be −1 which is less than 0,
but −1 is a signed value, not an unsigned value. The unsigned data type cannot represent signed numbers,
so i cannot have the value -1. An attempt to compute unsigned 0 minus 1 on a 32-bit system
produces 4,294,967,295 (the largest possible unsigned value under Visual C++), which definitely is not
less than zero. In this example it is better for the variable i’s type to be int.
*/
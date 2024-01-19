// The exact type that the size method returns here is a std::vector<int>::size_type. This type
// is defined within the std::vector<int> class. It is compatible with the unsigned type and may be
// assigned to an int variable as shown above.
//     for (unsigned i = 0; i < list.size(); i++)
//     std::cout << list[i] << " ";
//     std::cout << '\n';

// Notice that i’s declared type is unsigned, not int. This prevents a warning when comparing i to
// list.size() to see if the loop should continue. A comparison between signed and unsigned integer
// types potentially is dangerous, and the compiler will alert us to that fact. To see why you should not take
// this warning lightly, consider the following program that we might expect to count down
// from 100 to zero.

#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    // Count down from on hundred to zero?
    for (unsigned i = 100; i >= 0; i--)
    {
        cout << "i = " << i << '\n';
    }
}

// When compiled and executed, the program begins as expected:
// i = 100
// i = 99
// i = 98
// i = 97
// i = 96
// i = 95
// i = 94

// but when it gets to the expected stopping point, it does not stop! (You will have to wait for a really long
// time for the program to get to this point. You can witness the same effect in a shorter time if you replace
// unsigned with unsigned short.)
// i = 5
// i = 4
// i = 3
// i = 2
// i = 1
// i = 0
// i = 4294967295
// i = 4294967294
// i = 4294967293
// i = 4294967292

// In fact, it never stops because it is stuck in an infinite loop. It keeps printing all the possible unsigned int
// values that the system supports (and there are many of them), over and over again. This is because when i
// is zero the expression i >= 0 is true. Subtracting 1 from 0 ordinarily would be −1 which is less than 0,
// but −1 is a signed value, not an unsigned value. The unsigned data type cannot represent signed numbers,
// so i cannot have the value 0. An attempt to compute unsigned 0 minus 1 on a 32-bit system
// produces 4,294,967,295 (the largest possible unsigned value under Visual C++), which definitely is not
// less than zero. In this example it is better for the variable i’s type to be int.

// For processing vectors, be mindful that the size method returns an unsigned integer value, and comparing
// its return value to a signed integer type requires care. Visual C++ issues a warning to remind programmer
// of the danger.

// C++ provides a special unsigned integer type named size_t that is guaranteed to be large enough
// to represent the largest possible vector index. The above code that uses the unsigned type for the loop
// variable is better written as
    // for (size_t i = 0; i < list.size(); i++)
    // std::cout << list[i] << " ";
    // std::cout << '\n';

// The size_t type, however, offers no safety advantages over the common unsigned type. (On Visual
// C++ size_t and unsigned are equivalent: they both represent the integers in the range 0 to 4,294,967,295.)
// If the size of the vector does not change within the loop, it is better to call the size method once and assign
// its result to a variable. Assignment to a plain int variable usually is fine, as most vector lengths will not
// exceed the largest representable int value. Method invocations involve some overhead—they take extra
// machine cycles to perform—so calling the size method once before the loop instead of each time through
// the loop is more efficient. On the other hand, if statements within the body of the loop can add or remove
// elements from the vector, the for loop condition must call the vector’s size method on each iteration to
// get its current size.

// The safest approach uses the range-based for statement as much as possible because it avoids vector
// indices completely.
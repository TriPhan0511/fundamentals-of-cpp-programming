// C++ programmers can use two standard C functions for generating pseudorandom numbers: 
// srand and rand:
// void srand(unsigned)
// int rand()



#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

// srand establishes the first value in the sequence of pseudorandom integer values. 
// Each call to rand returns the next value in the sequence of pseudorandom values.

// The following code shows how a sequence of 100 pseudorandom numbers can be printed.

// int main()
// {
//     srand(23);
//     for (int i = 0; i < 100; i++)
//     {
//         int r = rand();
//         cout << r << " ";
//     }
// }
// -------------------------------------------------------

// The seed value determines the sequence of numbers generated;
// identical seed values generate identical sequences. If you run the program again, the same sequence is
// displayed because the same seed value, 23, is used. In order to allow each program run to display different
// sequences, the seed value must be different for each run. How can we establish a different seed value for
// each run? The best way to make up a “random” seed at run time is to use the time function which is found
// in the ctime library. The call time(0) returns the number of seconds since midnight January 1, 1970.

// This value obviously differs between program runs, so each execution will use a different seed value, and the
// generated pseudorandom number sequences will be different.

// The following code incorporates the time function 
// to improve its randomness over executions.

int main()
{
    // cout << static_cast<unsigned> (time(0));
    // srand(static_cast<unsigned> (time(0)));
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << rand() << " ";
    // }

    cout << RAND_MAX; // 32767
}
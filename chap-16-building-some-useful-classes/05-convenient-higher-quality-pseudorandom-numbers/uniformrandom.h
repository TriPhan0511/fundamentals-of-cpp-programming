#ifndef UNIFORMRANDOM_H_DEFINED
#define UNIFORMRANDOM_H_DEFINED

#include <random>

class UniformRandomGenerator
{
    // Source of randomness to initialize the generator.
    // All UniformRandomGenerator instances share this object
    static std::random_device rd;

    // A Mersenne Twister random number generator with a seed
    // obtained from a random_device object.
    // All UniformRandomGenerator instances share this generator;
    // this ensures a common source of randomness for the
    // application
    static std::mt19937 mt_gen;

    // The constructor will set the range of this
    // uniform distribution object.
    std::uniform_int_distribution<int> dist;

public:
    // The smallest pseudorandom number this generator can produce
    const int MIN;

    // The largest pseudorandom number this generator can produce
    const int MAX;

    // Create a pseudorandom number generator that produces values
    // in the range low...high
    UniformRandomGenerator(int low, int high);

    // Return a pseudorandom number in the range MIN...MAX;
    int operator()();
};

#endif

/*
    NOTE:
    The UniformRandomGenerator class provides a simplified interface to programmers who need
    access to higher-quality pseudorandom numbers. Behind the scenes, every UniformRandomGenerator
    object contains its own uniform_int_distribution object, but all UniformRandomGenerator
    objects share the same random_device and mt19937 objects. (A program in general should not create
    more than one source of randomness. The shared Mersenne Twister object is the source of random numbers
    that each individual UniformRandomGenerator object can adapt according to their desired range of
    values.) The constructor accepts the minimum and maximum values in the range of pseudorandom numbers
    desired. The constructor uses this range to construct the appropriate uniform_int_distribution
    object for this range.

    To create a UniformRandomGenerator object that produces pseudorandom integers in the range
    −100. . . 100, a client need only write:

        UniformRandomGenerator gen(-100, 100);

    The UniformRandomGenerator class also provides an operator() method. This allows a client
    to “call” an object as if it were a function. Given a UniformRandomGenerator object named gen, we
    can assign a pseudorandom number to an integer variable x, with the statement:

        int x = gen();
        
    This statement may appear to be calling a global function named gen; in fact, it is calling the operator()
    method of the UniformRandomGenerator class on behalf of object gen. The expression gen()
    is syntactic sugar for gen.operator()(). The expression gen.operator()() may look unusual,
    but it simply is invoking the UniformRandomGenerator::operator() method on behalf of gen
    passing no arguments in the empty last pair of parentheses.
*/
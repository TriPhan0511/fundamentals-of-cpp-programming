/*
    NOTE: 
    The standard way to prevent multiple inclusion
    is to wrap a class definition as follows:
*/

#ifndef COUNT_H_
#define COUNT_H_

class Counter
{
    int count;
public:
    // Allow clients to reset the counter to be zero
    void reset();

    // Allow clients to increment the counter
    void inc();

    // Return a copy of the counter's current value
    int get() const;
};

#endif

// -------------------------------------------------------
/*
    NOTE:
    Do not use semicolons at the end of the lines beginning 
    with #ifndef, #define, and #endif because these are 
    preprocessor directives, not C++ statements. 
    The word following the #ifndef and #define preprocessor 
    directives can be any valid identifier, but best practice 
    produces a unique word tied to the name of the header file 
    in which it appears. The convention is to use all 
    capital letters and underscores as shown above 
    (an identifier cannot contain a dot). Putting an underscore
    after the header file name further makes it less likely 
    that name will be used elsewhere within the program. 
    If the header file is named myheader.h, the preprocessor 
    wrapper would be:

    #ifndef MYHEADER_H_
    #define MYHEADER_H_

    // Declare your classes here 

    #endif

    Like a C++ program, the preprocessor can maintain a 
    collection of variables. These preprocessor-defined 
    variables can influence the compilation process. 
    Preprocessor-defined variables are merely an artifact of
    compilation and are unavailable to an executing C++ program.
    The preprocessor directive #ifndef evaluates to true if 
    the preprocessor has not seen the definition of a given 
    preprocessor variable; #ifndef returns false if it has 
    seen the definition of the preprocessor variable. 
    The #define directive defines a preprocessor variable. 
    The net effect of the #ifndef/#define/#endif directives is 
    that the preprocessor will not include the header file more
    than once when it is processing a C++ source file.

    The #ifndef...#define...#endif preprocessor directives 
    should be used to wrap the class declaration in the header 
    file and do not appear in the .cpp file containing the 
    method definitions. Since you cannot always predict how 
    widespread the use of a class will become, it is good 
    practice to use this preprocessor trick for all general 
    purpose classes you create. By doing so you will avoid the 
    problem of multiple inclusion.
*/
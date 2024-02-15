#include <iostream>

using std::cout;
using std::cin;

int main()
{
    cout << '\n';
    // Variable assignment
    // int width; // Define an integer variable named width
    // width = 5; // Copy assignment of value 5 into variable width
    // cout << width << '\n';
    // width = 7; // Change value stored in variable width to 7
    // cout << width << '\n';
    // -------------------------------------------------------------------------

    // Initialization
    // Note: The value used to initialize a variable is called an initializer

    // There are 6 basic ways to initialize variables in C++:
    int a; // No initializer (Default initialization)
    int b = 5; // Initializer after equals sign (Copy initialization)
    int c(6); // Initializer in parentheses (Direct initialization)
    
    // List initialization methods (C++) (preferred)
    int d{7}; // Initializer in braces (Direct list initialization)
    int e = {8}; // Initializer in braces after equals sign (Copy list initialization)
    int f {}; // Initializer is empty braces (Value initialization)
    
    /*
        NOTE: (link: https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/)
        
        *** Default initialization:
            When no initialization value is provided (such as for variable a above), 
            this is called default initialization. In most cases, default initialization 
            leaves a variable with an indeterminate value.

        *** Copy initialization
            When an initializer is provided after an equals sign, this is called 
            copy initialization. This form of initialization was inherited from C.
                
                int b = 5; // Copy initialization of value 5 into variable b

            Much like copy assignment, this copies the value on the right-hand side of 
            the equals into the variable being created on the left-hand side. 
            In the above snippet, variable b will be initialized with value 5.

            Copy initialization had fallen out of favor in modern C++ due to being 
            less efficient than other forms of initialization for some complex types. 
            However, C++17 remedied the bulk of these issues, and copy initialization is 
            now finding new advocates. You will also find it used in older code 
            (especially code ported from C), or by developers who simply think it looks 
            more natural and is easier to read.

            Copy initialization is also used whenever values are implicitly copied or converted, 
            such as when passing arguments to a function by value, returning from a function 
            by value, or catching exceptions by value.

        *** Direct initialization
            When an initializer is provided inside parenthesis, this is called 
            direct initialization.

                int c(6); // Direct initialization of value 6 into variable c

            Direct initialization was initially introduced to allow for more efficient 
            initialization of complex objects (those with class types). 
            Just like copy initialization, direct initialization had fallen out of favor 
            in modern C++, largely due to being superseded by list initialization. 
            However, we now know that list initialization has a few quirks of its own, 
            and so direct initialization is once again finding use in certain cases.
            
            Direct initialization is also used when values are explicitly cast to another type.

            One of the reasons direct initialization had fallen out of favor is because 
            it makes it hard to differentiate variables from functions. For example:

                int x(); // Forward declaration of function x
                int x(0); // Definition of variable x with initialize 0
        
        *** List initialization
            The modern way to initialize objects in C++ is to use a form of initialization 
            that makes use of curly braces. This is called list initialization 
            (or uniform initialization or brace initialization).

            List initialization comes in three forms:

                int width { 5 };    // direct list initialization of value 5 into variable width
                int height = { 6 }; // copy list initialization of value 6 into variable height
                int depth {};       // value initialization (see next section)

            NOTE: As an aside...
            Prior to the introduction of list initialization, some types of initialization 
            required using copy initialization, and other types of initialization required 
            using direct initialization. List initialization was introduced to provide a more 
            consistent initialization syntax (which is why it is sometimes called “uniform 
            initialization”) that works in most cases.

            Additionally, list initialization provides a way to initialize objects with a list 
            of values (which is why it is called “list initialization”). 
            We show an example of this in lesson 16.2 -- Introduction to std::vector and 
            list constructors.(https://www.learncpp.com/cpp-tutorial/introduction-to-stdvector-and-list-constructors/)

            List initialization has an added benefit: “narrowing conversions” in list 
            initialization are ill-formed. This means that if you try to brace initialize 
            a variable using a value that the variable can not safely hold, the compiler is 
            required to produce a diagnostic (usually an error). For example:

                int width { 4.5 }; // error: a number with a fractional value can't fit into an int

            In the above snippet, we’re trying to assign a number (4.5) that has a fractional 
            part (the .5 part) to an integer variable (which can only hold numbers without 
            fractional parts).

            Copy and direct initialization would simply drop the fractional part, resulting in 
            the initialization of value 4 into variable width. Your compiler may optionally warn
            you about this, since losing data is rarely desired. However, with list initialization,
            your compiler is required to generate a diagnostic in such cases.

            Conversions that can be done without potential data loss are allowed.

            To summarize, list initialization is generally preferred over the other initialization
            forms because it works in most cases, it disallows narrowing conversions, and it 
            supports initialization with lists of values (something we’ll cover in a future lesson).
            While you are learning, we recommend sticking with list initialization (or value initialization).

            NOTE: Best Practice:
            Prefer direct list initialization (or value initialization) for initializing your 
            variables.

            NOTE: Author's note:
            Bjarne Stroustrup (creator of C++) and Herb Sutter (C++ expert) also recommend using 
            list initialization to initialize your variables.

            In modern C++, there are some cases where list initialization does not work as 
            expected. We cover one such case in lesson 16.2 -- Introduction to std::vector 
            and list constructors.(https://www.learncpp.com/cpp-tutorial/introduction-to-stdvector-and-list-constructors/)            

            Because of such quirks, some experienced developers now advocate for using a mix of 
            copy, direct, and list initialization, depending on the circumstance. Once you are 
            familiar enough with the language to understand the nuances of each initialization 
            type and the reasoning behind such recommendations, you can evaluate on your own 
            whether you find these arguments persuasive.

        *** Value initialization and zero initialization
            When a variable is list initialized using empty braces, value initialization takes 
            place. In most cases, value initialization will initialize the variable to zero 
            (or empty, if that’s more appropriate for a given type). In such cases where zeroing
            occurs, this is called zero initialization.

                int width {};
                cout << "width = " << width << '\n'; // width = 0
                bool bo {};
                cout << std::boolalpha << bo << '\n'; // false   

                int x {};
                cout << "Enter an integer: ";
                cin >> x;
                cout << "x = " << x;
    */
}
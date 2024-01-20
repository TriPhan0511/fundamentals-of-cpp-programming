#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // The at method
    // provides bounds-checking access to the character stored at a given index
    // string name = "David";
    // try
    // {
    //     cout << name.at(0);
    //     // cout << name.at(100);
    // }
    // catch(const std::exception& e)
    // {
    //     cout << e.what();
    // }
    // -------------------------------------------------------
    
    // The length method
    // The size method
    // returns the number of characters that make up the string (same as length)
    // string name = "David";
    // cout << "length: " << name.length() << '\n';
    // cout << "size: " << name.length() << '\n';
    // -------------------------------------------------------

    // The find method
    // locates the index of a substring within a string object
    // string name = "David";
    // string s = "e";
    // std::size_t found = name.find(s);
    // if (found != string::npos)
    // {
    //     cout << "first '" << s << "' found at " << found;
    // }
    // else
    // {
    //     cout << "'" << s << "' not found.";
    // }
    // -------------------------------------------------------

    // The substr method
    string name = "David Harry";
    string fname = name.substr(0, 5);
    cout << "fname: " << fname;

}
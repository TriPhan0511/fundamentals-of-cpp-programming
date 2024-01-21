#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // at—provides bounds-checking access to the character stored at a given index
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
    
    // length—returns the number of characters that make up the string
    // size—returns the number of characters that make up the string (same as length)
    // returns the number of characters that make up the string (same as length)
    // string name = "David";
    // cout << "length: " << name.length() << '\n';
    // cout << "size: " << name.length() << '\n';
    // -------------------------------------------------------

    // find—locates the index of a substring within a string object
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

    // substr—returns a new string object made of a substring of an existing string object
    // Returns a newly constructed string object with its value initialized to 
    // a copy of a substring of this object.
    // The substring is the portion of the object that starts at character position pos 
    // and spans len characters (or until the end of the string, whichever comes first).
    // string name = "David Harry";
    // string fname = name.substr(0, 5);
    // cout << "fname: " << fname << '\n'; // fname: David
    // string lname = name.substr(6);
    // cout << "lname: " << lname << '\n'; // lname: Harry

    // try
    // {
    //     string s = name.substr(100);
    // }
    // catch(const std::exception& e)
    // {
    //     cout << e.what(); // basic_string::substr: __pos (which is 100) > this->size() (which is 11)
    // }
    // -------------------------------------------------------

    // empty—returns true if the string contains no characters; 
    // returns false if the string contains one or more characters
    // string name = "David"; // NOT EMPTY
    // name.clear(); // Empty
    string name = ""; // Empty
    if (name.empty())
    {
        cout << "Empty";
    }
    else
    {
        cout << "NOT EMPTY";
    }
    // -------------------------------------------------------


    
    // clear—removes all the characters from a string
    // Erases the contents of the string, 
    // which becomes an empty string (with a length of 0 characters).
    // string name = "David Harry";
    // cout << name << '\n';
    // name.clear();
    // cout << name << '\n';
    // cout << "length = " << name.length(); // length = 0
}
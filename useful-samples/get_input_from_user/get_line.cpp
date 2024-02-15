/*
To read in a complete line of text from the keyboard, 
including any embedded spaces that may be present, 
use the global getline function. As the following program 
shows, the getline function accepts an istream object and 
a string object to assign.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);
    cout << "You entered \"" << line << "\"";
}
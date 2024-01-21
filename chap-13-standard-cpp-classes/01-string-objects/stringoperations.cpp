#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Declare a string obkect and initialize it
    string word = "fred";
    // Prints 4, since word contains four characters
    cout << word.length() << '\n';
    // Prints "not empty", since word is not empty
    if (word.empty())
    {
        cout << "empty" << '\n';
    }
    else
    {
        cout << "not empty" << '\n';
    }
    // Makes word empty
    word.clear();
    // Prints "empty", since word now is empty
    if (word.empty())
    {
        cout << "empty" << '\n';
    }
    else
    {
        cout << "not empty" << '\n';
    }
    // Assign a string using operator= method
    word = "good";
    // Prints "good"
    cout << word << '\n';
    // Append another string using operator+= method
    word += "-bye";
    // Prints "good-bye";
    cout << word << '\n';
    // Prints first character using operator[] method
    cout << word[0] << '\n';
    // Prints last character
    cout << word[word.length() - 1] << '\n';
    // Prints "od-by", the substr starting at index 2 of length 5
    cout << word.substr(2, 5) << '\n';
    // Splice two strings with + operator
    string fisrt = "ABC";
    string last = "XYZ";
    cout << fisrt + last << '\n';
    cout << "Compare " << fisrt << " and ABC: ";
    if (fisrt == "ABC")
    {
        cout << "equal\n";
    }
    else
    {
        cout << "not equal\n";
    }
    cout << "Compare " << fisrt << " and XYZ: ";
    if (fisrt == "XYZ")
    {
        cout << "equal\n";
    }
    else
    {
        cout << "not equal\n";
    }
}
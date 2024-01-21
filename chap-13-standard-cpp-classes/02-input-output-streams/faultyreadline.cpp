#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string line;
    cout << "Enter a line of text: ";
    cin >> line;
    cout << "You entered: \"" << line << "\"";
}
#include <iostream>
#include <string>
#include <bits/stdc++.h> // for transform

using std::cout;
using std::string;

int main() {
    string s1 = "hello";
    cout << "Before to upper: " << s1 << '\n';
    // using transform() function and ::toupper in STL 
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    cout << "After to upper: " << s1 << '\n';

    string s2 = "ALOHA";
    cout << "Before to lower: " << s2 << '\n';
    // using transform() function and ::toupper in STL 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    cout << "After to lower: " << s2 << '\n';
}
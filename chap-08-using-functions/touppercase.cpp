#include <iostream>
#include <cctype>

using std::cout;

int main()
{
    // int toupper(int ch)
    // for (char lower = 'a'; lower <= 'z'; lower++)
    // {
    //     cout << lower << " => " << static_cast<char> (toupper(lower)) << "\n";
    // }

    // int tolower(int ch)
    // cout << static_cast<char> (tolower('A')); // a

    // int isupper(int ch)
    // Returns a nonzero value (true) if ch is an uppercase letter (’A’–’Z’); 
    // otherwise, it returns 0 (false)
    // cout << isupper('A'); // 1
    // cout << isupper('a'); // 0

    // int islower(int ch)
    // Returns a nonzero value (true) if ch is an lowercase letter (’a’–’z’); 
    // 0 (false)otherwise, it returns 0 (false)
    // cout << islower('A'); // 0
    // cout << islower('a'); // 2

    // int isalpha(int ch)
    // Returns a nonzero value (true) if ch is a letter from the alphabet (’A’–’Z’ or ’a’–’z’);
    // otherwise, it returns 0 (false)
    // cout << isalpha('a'); // 2
    // cout << isalpha('1'); // 0

    // int isdigit(int ch)
    // Returns a nonzero value (true) if ch is a digit (’0’–’9’); 
    // otherwise, it returns 0 (false)
    cout << isdigit('a'); // 0
    cout << isdigit('1'); // 1
}
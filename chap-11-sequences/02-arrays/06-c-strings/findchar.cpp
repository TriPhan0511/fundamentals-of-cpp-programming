#include <iostream>

using std::cout;

bool find_char(const char *s, char ch)
{
    // Scan until we see the null character
    while (*s != '\0' && *s != ch)
    {
        s++; // Advance to the next position within the string
    }
    return *s; // Null pointer = false, any other is true
}

// bool find_char(const char *s, char ch)
// {
//     // Scan until we see the null character
//     while (*s != '\0')
//     {
//         if (*s == ch)
//         {
//             return true;
//         }
//         s++; // Advance to the next position within the string
//     }
//     return false;    
// }

int main()
{
    const char *phrase = "This is a phrase";
    // Try all the charactersa through z
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << '\"' << ch << '\"' << " is ";
        if (!find_char(phrase, ch))
        {
            cout << "NOT ";
        }
        cout << "in " << '\"' << phrase << '\"' << '\n';
    }
}
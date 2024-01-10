#include <iostream>

using std::cout;
using std::cin;

void count_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << '\n';
    }
}

int main()
{
    cout << "Going to count to ten...\n";
    count_to_n(10);
    cout << "Going to count to five...\n";
    count_to_n(5);

    // count_to_n(); // Error: too few arguments to function 'void count_to_n(int)'
    // count_to_n(3, 5); // Error: too many arguments to function 'void count_to_n(int)'
    // count_to_n(9.5); // Warning, possible loss of data (double to int)
}
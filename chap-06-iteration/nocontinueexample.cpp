#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sum = 0 ;
    int input;
    bool done = false;
    while (!done)
    {
        cout << "Enter positive integer (999 quits): ";
        cin >> input;
        if (input < 0)
        {
            cout << "Negative value " << input << " ignored.\n";
        }
        else if (input != 999)
        {
            cout << "Tallying " << input << '\n';
            sum += input;    
        }
        else
        {
            done = (input == 999);
        }    
    }
    cout << "Sum = " << sum;    
}
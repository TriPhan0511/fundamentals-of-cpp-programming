#include <iostream>

using std::cout;
using std::cin;

/*
 *  get_int_range(first, last)
 *      Forces the user to enter an integer within 
 *      a specified range.
 *      first is either a minimum or maximum acceptable value.
 *      last is the corresponding other end of the range,
 *      either a maximum or minimum value.
 *      Return an acceptable value from the user.
*/
int get_int_range(int first, int last)
{
    // If the larger number is provided first,
    // switch the parameters.
    if (first > last)
    {
        int temp = first;
        first = last;
        last = temp;
    }
    cout << "Enter a integer value in the range " << first << ".." << last << ": ";
    while (true)
    {
        int in_value; // User input value
        cin >> in_value;
        if (in_value >= first && in_value <= last)
        {
            return in_value;
        }
        cout << in_value << " is not in the range " << first << ".." << last << '\n';
        cout << "Please try again: ";
    }
}

// int get_int_range(int first, int last)
// {
//     // If the larger number is provided first,
//     // switch the parameters.
//     if (first > last)
//     {
//         int temp = first;
//         first = last;
//         last = temp;
//     }
//     // Insist on values in the range first..last
//     cout << "Enter a integer value in the range " << first << ".." << last << ": ";

//     int in_value; // User input value
//     bool bad_entry;
//     do
//     {
//         cin >> in_value;
//         bad_entry = in_value < first || in_value > last;
//         if (bad_entry)
//         {
//             cout << in_value << " is not in the range " 
//                 << first << ".." << last << '\n';
//             cout << "Please try again: ";
//         }
//     } while (bad_entry);
//     return in_value;
    
// }



int main()
{
    cout << get_int_range(10, 20) << '\n';
    // cout << get_int_range(20, 10) << '\n';
    // cout << get_int_range(5, 5) << '\n';
    // cout << get_int_range(-100, 100) << '\n';       
}
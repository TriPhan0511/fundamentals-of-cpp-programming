#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::string;

// Overload the operator<< function
// std::ostream& operator<<(std::ostream& os, const vector<int>& v)
// {
//     int size = v.size();
//     os << "{ ";
//     for (int i = 0; i < size; i++)
//     {
//         if (i == size - 1)
//         {
//             os << v[i];
//         }
//         else
//         {
//             os << v[i] << ", ";
//         }
//     }
//     os << " }\n";
//     return os;
// }

string vector_to_string(const vector<int>& v)
{
    string out = "";
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            out += v[i];
            // cout << v[i];
        }
        else
        {
            out += v[i] + ", ";
            // cout << v[i] << ", ";
        }
    }
    // return out;
    cout << out << '\n';
    return "aloha";
}
// void print_vector(const vector<int>& v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         if (i == size - 1)
//         {
//             cout << v[i];
//         }
//         else
//         {
//             cout << v[i] << ", ";
//         }
//     }
//     cout << '\n';
// }

// vector<int> get_values(int size)
// {
//     vector<int> v(size);
//     cout << "Please enter " << size << " numers: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> v[i];
//     }
//     return v;
// }

// double compute_average(const vector<int>& v)
// {
//     int sum = 0;
//     for (const auto& i : v)
//     {
//         sum += i;
//     }
//     return static_cast<double>(sum) / v.size();
// }
// double compute_average()
// {
//     int const NUMBER_OF_ENTRIES = 5;
//     vector<int> v(NUMBER_OF_ENTRIES);
//     int sum = 0;
//     cout << "Please enter " << NUMBER_OF_ENTRIES << " numers: ";
//     for (int i = 0; i < NUMBER_OF_ENTRIES; i++)
//     {
//         cin >> v[i];
//         sum += v[i];
//     }
//     return static_cast<double>(sum) / NUMBER_OF_ENTRIES;
// }

int main()
{
    cout << '\n';

    // int NUMBER_OF_ENTRIES = 5;
    // vector<int> v = get_values(NUMBER_OF_ENTRIES);
    // double avg = compute_average(v);
    // cout << "The average of" << vector_to_string(v) << " is " << avg << '\n';

    vector<int> v{1, 2, 3, 4, 5};
    cout << vector_to_string(v) << '\n';
    // cout << "hello";
}
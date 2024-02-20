#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::vector;
using std::string;

// Compute the average of all doubles in a vector
double compute_avg(const vector<double>& v)
{
    int size = v.size();
    double sum = 0;
    for (const auto& i : v)
    {
        sum += i;
    }
    return sum/size;
}

// Get values for a vector contaning doubles
vector<double> get_values(int size)
{
    vector<double> v(size);
    cout << "Please enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    return v;
}

// Convert a double to a std::string
string double_to_string(double value)
{
    std::stringstream ss;
    ss << value;
    return ss.str();
}

// Convert a vector containing doubles to a std::string
string vector_to_string(const vector<double>& v)
{
    int size = v.size();
    string s = "";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            s += double_to_string(v[i]);
        }
        else
        {
            s += double_to_string(v[i]) + ", ";
        }
    }
    return s;
}


int main()
{
    cout << '\n';

    const int NUMBER_OF_ENTRIES = 5;
    // Get values
    vector<double> v = get_values(NUMBER_OF_ENTRIES);
    // Print the result
    cout << "The average of " << vector_to_string(v) 
        << " is " << compute_avg(v) << '\n';
}

// int main()
// {
//     cout << '\n';
//     // Get number of entries
//     int number_of_entries;
//     cout << "Enter number of entries: ";
//     cin >> number_of_entries;
//     // Get values
//     vector<double> v = get_values(number_of_entries);
//     // Print the result
//     cout << "The average of " << vector_to_string(v) 
//         << " is " << compute_avg(v) << '\n';
// }

// int main()
// {
//     cout << '\n';
//     vector<double> v;
//     double number{};
//     while (true)
//     {
//         cout << "Enter number (0 to terminate): ";
//         cin >> number;
//         if (number == 0)
//         {
//             break;
//         }
//         v.push_back(number);
//     }
//     // Print the result
//     cout << "The average of " << vector_to_string(v) 
//         << " is " << compute_avg(v) << '\n';    
    
// }
#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::vector;

// // Solution 1:
// void print_two_dimensional_vector(const vector<vector<int>>& m)
// {
//     for (unsigned row = 0; row < m.size(); row++)
//     {
//         for (unsigned col = 0; col < m[row].size(); col++)
//         {
//             cout << std::setw(5) << m[row][col] << " ";
//         }
//         cout << '\n';
//     }
// }

// Solution 2:
void print_two_dimensional_vector(const vector<vector<int>>& m)
{
    for (const vector<int>& row : m)
    {
        for (int element : row)
        {
            cout << std::setw(5) << element;
        }
        cout << '\n';
    }
}



int main()
{
    // // Declare a two-dimensional (2D) vector contains two rows and three columns
    // vector<vector<int>> a(2, vector<int>(3));
    // // Populate content for the 2D vector
    // a[0][0] = 5;
    // a[0][1] = 19;
    // a[0][2] = 3;
    // a[1][0] = 22;
    // a[1][1] = -8;
    // a[1][2] = 10;

    // Declare and initialize a 2D vector
    vector<vector<int>> a{
        {5, 19, 3},
        {22, -8, 10}
    };

    // Print the two-dimensional vector
    print_two_dimensional_vector(a);
}
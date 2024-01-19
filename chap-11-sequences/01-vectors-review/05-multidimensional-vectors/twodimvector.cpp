#include <iostream>
#include <vector>
#include <iomanip>

using Matrix = std::vector<std::vector<double>>;

using std::cout;
using std::cin;
using std::vector;
using std::setw;

// Allow the user to enter the elements of a matrix
// Solution 1
void populate_matrix(Matrix& m)
{
    cout << "Enter the " << m.size() << " rows of the matrix\n";
    for (unsigned row = 0; row < m.size(); row++)
    {
        cout << "Row #" << row 
            << " (enter " << m[row].size() << " values): ";
        for (auto& elem : m[row])
        {
            cin >> elem;
        }
    }
}

// Solution 2
// void populate_matrix(Matrix& m)
// {
//     cout << "Enter the " << m.size() << " rows of the matrix\n";
//     for (auto& row : m)
//     {
//         cout << "Enter " << row.size() << " values: ";
//         for (auto& elem : row)
//         {
//             cin >> elem;
//         }
//     }
// }

void print_matrix(const Matrix& m)
{
    for (auto row : m)
    {
        for (auto elem : row)
        {
            cout << setw(5) << elem;
        }
        cout << '\n';
    }
}

int main()
{
    int rows;
    int columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    // Declare the 2D vector
    Matrix mat(rows, vector<double>(columns));
    // Populate the vector
    populate_matrix(mat);
    // Print 2d vector
    print_matrix(mat);
}


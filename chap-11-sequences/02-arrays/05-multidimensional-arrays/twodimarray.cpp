#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;

const int ROWS = 3;
const int COLUMNS = 5;

// The name Matrix represents a new type
// that means a ROWS X COLUMNS
// two-dimesional array of double-precision
// floating-point numbers.
using Matrix = double [ROWS][COLUMNS];

// Allow the user to enter the elements of a matrix
void populate_matrix(Matrix m)
{
    cout << "Enter the " << ROWS << " rows of the matrix.\n";
    for (int row = 0; row < ROWS; row++)
    {
        cout << "Row #" << row << " (enter " << COLUMNS << " values): ";
        for (int col = 0; col < COLUMNS; col++)
        {
            cin >> m[row][col];
        }
    }
}

// We declare m constant because 
// printing a matrix should not change it
void print_matrix(const Matrix m)
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLUMNS; col++)
        {
            cout << setw(5) << m[row][col] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    // Declare the 2D array
    Matrix mat;
    // Populate the array
    populate_matrix(mat);
    // Print the array
    print_matrix(mat);
}
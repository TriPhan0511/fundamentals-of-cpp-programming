#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;

using Matrix = std::vector<std::vector<double>>;

// Print a matrix
void print_matrix(const Matrix& m)
{
    for (auto row : m)
    {
        for (auto e : row)
        {
            cout << std::setw(5) << e;
        }
        cout << '\n';
    }
    cout << '\n';
}

// Overload the operator<< function
std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
    for (auto row : m)
    {
        for (auto e : row)
        {
            os << std::setw(5) << e;
        }
        os << '\n';
    }
    os << '\n';
    return os;
}

// Allow the user to enter the elements of a matrix
void populate_matrix(Matrix& m)
{
    int size = m.size();
    cout << "Enter the " << size << " rows of the matrix.\n";
    for (int i = 0; i < size; i++)
    {
        int size_of_row = m[i].size();
        cout << "Row #" << i << " (enter " 
            << size_of_row << " values): ";
        for (auto& e : m[i])
        {
            cin >> e;
        }
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
    Matrix mat(rows, std::vector<double>(columns));
    // Populate the vector
    populate_matrix(mat);
    // Print the vector
    print_matrix(mat);
    cout << mat;
}
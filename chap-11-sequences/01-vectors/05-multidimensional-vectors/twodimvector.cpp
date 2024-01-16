#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::setw;
using std::vector;

using Matrix = vector<vector<double>>;

// Allow the user to enter the elements of a matrix
void populate_matrix(Matrix& m)
{
    cout << "Enter the " << m.size() << " rows of matrix.\n";
    for (unsigned row = 0; row < m.size(); row++)
    {
        cout << "Row #" << row << " (enter " << m[row].size() << " values): ";
        for (double& element : m[row])
        {
            cin >> element;
        }
    }
}

void print_matrix(const Matrix& m)
{
    for (auto row : m)
    {
        for (auto element : row)
        {
            cout << setw(5) << element << " ";
        }
        cout << '\n';
    }
}

int main()
{
    // Matrix m{
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };
    // print_matrix(m);

    int rows;
    int columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    // Declare the 2D vector
    Matrix m(rows, vector<double>(columns));
    // Populate the matrix
    populate_matrix(m);
    // Print the matrix
    print_matrix(m);
}

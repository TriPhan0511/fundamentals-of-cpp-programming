#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;

const int ROWS = 2;
const int COLUMNS = 3;

using Matrix = double[ROWS][COLUMNS];

void print(const Matrix m)
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

// void print(const double m[ROWS][COLS])
// {
//     for (int row = 0; row < ROWS; row++)
//     {
//         for (int col = 0; col < COLS; col++)
//         {
//             cout << setw(5) << m[row][col] << " ";
//         }
//         cout << '\n';
//     }
// }

int main()
{
    // int a[2][3];
    // a[0][0] = 1;
    // a[0][1] = 2;
    // a[0][2] = 3;
    // a[1][0] = 4;
    // a[1][1] = 5;
    // a[1][2] = 6;

    // int a[2][3] = {
    //     {7, 8, 9},
    //     {10, 11, 12}
    // };

    // // Omit the first index
    // int a[][3] = {
    //     {7, 8, 9},
    //     {10, 11, 12}
    // };

    // // Print 2D array
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    double m[2][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6}
    };

    print(m);
}
#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::setw;
using std::vector;

using Matrix = vector<vector<double>>;

void print_matrix(Matrix& m)
{
    for (auto row : m)
    // for (auto& row : m)
    {
        for (auto element : row)
        {
            cout << setw(5) << element;
        }
        cout << '\n';
    }
}

// void print_matrix(Matrix& m)
// {
//     for (vector<double>& row : m)
//     {
//         for (double element : row)
//         {
//             cout << setw(5) << element;
//         }
//         cout << '\n';
//     }
// }

int main()
{
    Matrix m{
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6}
    };
    print_matrix(m);
}
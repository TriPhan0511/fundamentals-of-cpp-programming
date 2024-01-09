#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
// using std::setw;

int main()
{
    int size; // The number of rows and columns in the table
    cout << "Please enter the table size: ";
    cin >> size;

    // First, print heading
    cout << "     ";
    // Print column heading
    int column = 1;
    while (column <= size)
    {
        cout << std::setw(4) << column;
        column++;
    }
    cout << '\n';
    
    // Print line seperator
    cout << "    +";
    column = 1;
    while (column <= size)
    {
        cout << "----";
        column++;
    }
    cout << '\n';

    // Print table contents
    int row = 1;
    while (row <= size)
    {
        cout << std::setw(2) << row << "  |";
        column = 1;
        while (column <= size)
        {
            cout << std::setw(4) << row*column << " ";
            column++;
        }
        cout << '\n';
        row++;
    }
}

// ----- 3rd try -----
// int main()
// {
//     int size; // The number of rows and columns in the table
//     cout << "Please enter the table size: ";
//     cin >> size;
//     int row = 1;
//     while (row <= size)
//     {
//         int column = 1;
//         while (column <= size)
//         {
//             cout << std::setw(4) << row*column << " ";
//             column++;
//         }
//         cout << '\n';
//         row++;
//     }
    
// }

// ->
//    1    2    3    4    5    6    7    8    9   10 
//    2    4    6    8   10   12   14   16   18   20
//    3    6    9   12   15   18   21   24   27   30
//    4    8   12   16   20   24   28   32   36   40
//    5   10   15   20   25   30   35   40   45   50
//    6   12   18   24   30   36   42   48   54   60
//    7   14   21   28   35   42   49   56   63   70
//    8   16   24   32   40   48   56   64   72   80
//    9   18   27   36   45   54   63   72   81   90
//   10   20   30   40   50   60   70   80   90  100

// ----- 2nd try -----
// int main()
// {
//     int size; // The number of rows and columns in the table
//     cout << "Please enter the table size: ";
//     cin >> size;
//     int row = 1;
//     while (row <= size)
//     {
//         int column = 1;
//         while (column <= size)
//         {
//             cout << row*column << " ";
//             column++;
//         }
//         cout << '\n';
//         row++;
//     }
    
// }

// ----- 1st try -----
// int main()
// {
//     int size; // The number of rows and columns in the table
//     cout << "Please enter the table size: ";
//     cin >> size;
//     int row = 1;
//     while (row <= size)
//     {
//         cout << "Row #" << row << '\n';
//         row++;
//     }
    
// }
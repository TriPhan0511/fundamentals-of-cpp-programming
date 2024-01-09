#include <iostream>
#include <iomanip>


int main()
{
    int size;
    cout << "Please enter the table size: ";
    cin >> size;

    // Print heading
    std::cout << " ";
    for (int column = 1; column <= size; column++)
    {
        std::cout << std::setw(4) << column; // Print heading for this column.
    }
    std::cout << '\n';

    // Print line separator
    std::cout << " +";
    for (int column = 1; column <= size; column++)
    {
        std::cout << "----"; // Print separator for this column.
    }
    std::cout << '\n';

    // Print content
    for (int row = 1; row <= size; row++) 
    {
        std::cout << std::setw(4) << row << " |"; // Print row label.
        for (int column = 1; column <= size; column++)
        std::cout << std::setw(4) << row*column; // Display product
        std::cout << '\n'; // Move cursor to next row
    }
    
    
}
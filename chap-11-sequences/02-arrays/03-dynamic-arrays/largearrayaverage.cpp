#include <iostream>

using std::cout;
using std::cin;

// Maximum number of expected value is 1,000,000
const int MAX_NUMBER_OF_ENTRIES = 1000000;
double numbers[MAX_NUMBER_OF_ENTRIES];

int main()
{
    double sum = 0.0;
    int size; // Actual number of entries
    cout << "Please neter number of values to process: ";
    cin >> size;
    if (size > 0) // Nothing to do with no entries
    {
            cout << "Please enter " << size << " numbers: ";
            // Allow the user to enter in the values
            for (int i = 0; i < size; i++)
            {
                cin >> numbers[i];
                sum += numbers[i];
            }
    }
    // Print the result
    cout << "The average of ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << numbers[i] << " is ";
        }
        else
        {
            cout << numbers[i] << ", ";
        }
    }
    cout << sum / size;
    
}
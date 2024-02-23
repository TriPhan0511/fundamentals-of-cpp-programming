#include <iostream>

using std::cout;
using std::cin;

// Maximum number of expected values is 1,000,000
const int NUMBER_OF_ENTRIES = 1000000;
double numbers[NUMBER_OF_ENTRIES];

int main()
{
    double sum = 0.0;
    int size; // Actual number of entries

    // Get effective size of the array
    cout << "Please enter number of values to process: ";
    cin >> size;

    if (size > 0) // Nothing to do with no entries
    {
        cout << "Please enter " << size << " numbers: ";
        for (int i = 0; i < size; i++)
        {
            cin >> numbers[i];
            sum += numbers[i];
        }
    }

    cout << "The average of ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << numbers[i];
        }
        else
        {
            cout << numbers[i] << ", ";
        }
    }
    cout << " is " << sum/size << '\n';
}
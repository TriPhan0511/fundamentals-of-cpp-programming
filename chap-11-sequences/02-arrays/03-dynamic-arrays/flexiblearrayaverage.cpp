#include <iostream>

using std::cout;
using std::cin;

int main()
{
    double sum = 0.0;
    double *numbers; // Note: numbers is a pointer, not an array
    int size; // Actual number of entries
    // Get effective size of the array
    cout << "Please enter the number of values to process: ";
    cin >> size;
    if (size > 0) // Nothing to do with no entries
    {
        // Allocate the exact size needed
        numbers = new double[size]; // Dynamically allocated array
        // Allow the user to enter in the values
        cout << "Please enter " << size << " numbers: ";
        for (int i = 0; i < size; i++)
        {
            cin >> numbers[i] ;
            sum += numbers[i];
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
        // Free up the space held by numbers
        delete [] numbers;
    }
    
}
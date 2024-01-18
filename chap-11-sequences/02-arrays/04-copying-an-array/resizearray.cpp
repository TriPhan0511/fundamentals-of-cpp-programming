// The code in flexiblearrayaverage.cpp requires the user to enter up front the number of values to average.
// This is inconvenient, and people are notoriously poor counters. One solution is to allocate a minimal
// size array, and then resize it as necessary when it fills up. Listing 11.20 (resizearray.cpp) uses this approach.
#include <iostream>

using std::cout;
using std::cin;

int main ()
{
    double sum = 0.0; // Sum of the elements in the list
    double *numbers; // Dynamic array of numbers
    double input; // Current user entry

    // Initial size of array and amount to expand full array
    const int CHUNK = 3;
    int size = 0; // Current number of entries
    int capacity = CHUNK; // Initial size of array

    // Allocate a modest-sized array to begin with
    numbers = new double[capacity];
    cout << "Please enter any number of nonnegative values "
        << "(negative value ends the list): ";
    cin >> input;

    while (input >= 0) // Continue until negative number entered
    {
        if (size >= capacity) // Room left to add an element?
        {
            capacity += CHUNK; // Expand array
            double *temp = new double[capacity]; // Allocate space
            for (int i = 0; i < size; i++)
            {
                temp[i] = numbers[i]; // Copy existing values
            }
            delete [] numbers; // Free up old space
            numbers = temp; // Update numbers to new location
            cout << "Expanding by " << CHUNK << '\n';
        }
        numbers[size] = input; // Add number to array at last position
        size++; // Update last position
        sum += input; // Add to running sum
        cin >> input;
    }
    if (size > 0) // Can't average less than one number
    {
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
        cout << sum/size << '\n';
    }
    else
    {
        cout << "No number to average\n";
    }
    delete [] numbers; // Free up the space held by numbers
}
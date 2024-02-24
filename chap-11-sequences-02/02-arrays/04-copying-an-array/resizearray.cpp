#include <iostream>

int main()
{
    double sum = 0.0; // Sum of all numbers
    double *numbers; // Dynamic array of numbers
    double input; // Current user input

    // Initial size of the array and amount to expand full array
    const int CHUNK = 3;
    int size = 0; // Current number of entries
    int capacity = CHUNK; // Initial size of the array

    // Allocate a modest-sized array to begin with
    numbers = new double[capacity];
    std::cout << "Please enter any number of non-negative values" 
        << " (negative value ends the list): ";    
    std::cin >> input;

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
            std::cout << "Expanding by " << CHUNK << '\n';
        }
        numbers[size] = input; // Add number to array at last position
        size++; // Update last position
        sum += input; // Add to running sum
        std::cin >> input; // Get next number
    }
    if (size > 0) // Can't average less than one number
    {
        std::cout << "The avergae of ";
        for (int i = 0; i < size; i++)
        {
            if (i == size - 1)
            {
                std::cout << numbers[i];
            }
            else
            {
                std::cout << numbers[i] << ", ";
            }
        }
        std::cout << " is " << sum/size << '\n';
    }
    else
    {
        std::cout << "No numbers to average\n";
    }
delete [] numbers; // Free up the space held by numbers
}
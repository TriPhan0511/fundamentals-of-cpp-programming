#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    double sum = 0.0;
    const int NUMBER_OF_ENTRIES = 5;
    vector<double> numbers(NUMBER_OF_ENTRIES);

    // Get values from the user and compute sum
    cout << "Please enter " << NUMBER_OF_ENTRIES 
        << " numbers: ";
    for (int i = 0; i < NUMBER_OF_ENTRIES; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Display result
    cout << "The average of ";
    for (int i = 0; i < NUMBER_OF_ENTRIES; i++)
    {
        if (i == NUMBER_OF_ENTRIES - 1)
        {
            cout << numbers[i] << " is ";
        }
        else
        {
            cout << numbers[i] << ", ";
        }
    }
    cout << sum/NUMBER_OF_ENTRIES;
}
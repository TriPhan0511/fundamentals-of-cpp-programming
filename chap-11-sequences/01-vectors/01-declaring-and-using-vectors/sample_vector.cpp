#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
    // Declare an empty vector
    // vector<int> numbers; 

    // Declare a vector with a particular initial size
    // All elements are zero by default.
    // vector<int> numbers(10); 

    // Declare a vector object of a given size
    // and specify the initial value of all of its elements
    // vector<int> numbers(10, 8); // All elements having the value 8

    // Declare a vector and specify each 
    // and every element separately
    // vector<int> numbers{10, 20, 30, 40, 50};   

    // vector<int> numbers(3);
    // numbers[0] = 5;
    // numbers[1] = -3;
    // numbers[2] = 12;

    // cout << numbers[0] << '\n';
    // cout << numbers[1] << '\n';
    // cout << numbers[2] << '\n';
    
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // vector<int> list;
    // vector<double> numbers{1.0, 3.5, 0.5, 7.2};
    // vector<char> letters{'a', 'b', 'c'};

    // // Error
    // // for (int i = 0; i < 4; i++)
    // // {
    // //     cout << list[i] << " ";
    // // }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << letters[i] << '\n';
    // }
        
    const int NUMBER_OF_ENTRIES = 5;
    vector<double> numbers(NUMBER_OF_ENTRIES);
    cout << "Enter five integers: ";
    for (int i = 0; i < NUMBER_OF_ENTRIES; i++)
    {
        cin >> numbers[i];
    }

    cout << "Vector's elements:\n";
    for (int i = 0; i < NUMBER_OF_ENTRIES; i++)
    {
        cout << numbers[i] << " ";
    }
    

    
}
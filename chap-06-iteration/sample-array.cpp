#include <iostream>

using std::cout;

// Display an array
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    // Declare and initialize an array
    // int n = 5;

    // // Initialize Array with Values
    // int arr[n] = {1, 2, 3, 4, 5}; 

    // //  Initialize Array with Values and without Size
    // int arr[] = {1, 2, 3, 4, 5};

    // // Initialize Array after Declaration (Using Loops)
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = i + 1;
    // }

    // // Initialize an array partially
    // int arr[n] = {1, 2}; // 1 2 0 0 0 

    // // Initialize the array with zero
    // int arr[n] = {};
    // // int arr[n] = {0};
    // -----------------------------------------------

    // // Display an array
    // int arr[] = {1, 2, 3, 4, 5};
    // int lengthOfArr = sizeof(arr) / sizeof(arr[0]);
    // displayArray(arr, lengthOfArr);
    // -----------------------------------------------

    // Relationship between array and pointer
    // The following code illustrate that array's name is a pointer
    // that points to the first element of the array.
    // Initialize an array
    int arr[] = {1, 2, 3, 4}; 
    // Define a pointer
    int* ptr = arr; 
    // Print address of the array using array's name
    cout << "Memory address of the array: " << &arr << '\n'; // 0x5ffe80
    // Print address of the array using ptr
    cout << "Memory address of the array: " << ptr << '\n'; // 0x5ffe80

}
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// SOLUTION 2: PASS BY REFERENCE
// Pass by value requires a function
// invocation to create a new vector object for the formal parameter and copy all the elements of the actual
// parameter into the new vector which is local to the function. A better approach uses pass by reference, with
// a twist:

// Solution 2: 
// Using const reference since the print function needs only
// look at the vector's content
void print_vector(const vector<int>& numbers)
{
    for (int num : numbers)
    {
        cout << num << " ";
    }
    
}

// Solution 2: 
// Using const reference since the sum function needs only
// look at the vector's content
int sum(const vector<int>& numbers)
{
    int result = 0;
    for (int num : numbers)
    {
        result += num;
    }
    return result;
}

// // Solution 1
// void print(vector<int>& numbers)
// {
//     for (int num : numbers)
//     {
//         cout << num << " ";
//     }
    
// }

// // Solution 1
// int sum(vector<int>& numbers)
// {
//     int result = 0;
//     for (int num : numbers)
//     {
//         result += num;
//     }
//     return result;
// }

void change_content(vector<int>& numbers, int num)
{
    int length = numbers.size();
    for (int& item : numbers)
    {
        item = num;
    }
}

int main()
{
    vector<int> numbers{2, 4, 6, 8,};
    // Print the content of the vector
    print_vector(numbers);
    // Compute and display sum
    cout << "\nSum = " << sum(numbers) << '\n';
    // Zero out all the elements of numbers
    change_content(numbers, 0);
    // Reprint the content of the vector
    print_vector(numbers);
    // Compute and display sum
    cout << "\nSum = " << sum(numbers) << '\n';
}

// -------------------------------------------------------------------------
// SOLUTION 1: PASS BY VALUE
// void print(vector<int> numbers)
// {
//     for (int num : numbers)
//     {
//         cout << num << " ";
//     }
// }

// int sum(vector<int> numbers)
// {
//     int result = 0;
//     for (int num : numbers)
//     {
//         result += num;
//     }
//     return result;
// }


// int main()
// {
//     vector<int> numbers{2, 4, 6, 8,};
//     // Print the content of the vector
//     print(numbers);
//     // Compute and display sum
//     cout << "\nSum = " << sum(numbers) << '\n';
//     // Zero out all the elements of numbers
//     int length = numbers.size();
//     for (int i = 0; i < length; i++)
//     {
//         numbers[i] = 0;
//     }
//     // Reprint the content of the vector
//     print(numbers);
//     // Compute and display sum
//     cout << "\nSum = " << sum(numbers) << '\n';
// }


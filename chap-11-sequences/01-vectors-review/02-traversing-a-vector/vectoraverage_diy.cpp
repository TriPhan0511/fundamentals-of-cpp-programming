#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Create a vector
vector<double> create(int size)
{
    vector<double> v(size);
    cout << "Enter " << size << " numbers: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> v[i];
    // }

    // If the element variable within the range-based for loop 
    // is declared to be a reference, the code within the body 
    // of the loop may modify the vector's elements.
    for (double& elem : v)
    {
        cin >> elem;
    }
    
    return v;
}

// Print vector
void print(const vector<double>& v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

// Compute average of all values in a vector
double average(const vector<double>& v)
{
    double sum = 0.0;
    for (auto i : v)
    {
        sum += i;
    }
    return sum / v.size();
}

// Print average
void print_average(const vector<double>& v)
{
    int size = v.size();
    cout << "The average of ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i] << " is ";
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << average(v) << '\n';
}

int main()
{
    const int NUMBER_OF_ENTRIES = 5;
    vector<double> v = create(NUMBER_OF_ENTRIES);
    print(v);
    print_average(v);
}


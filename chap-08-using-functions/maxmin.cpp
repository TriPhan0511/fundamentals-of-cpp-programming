#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;

int main()
{
    int value1;
    int value2;
    cout << "Please enter two integer values: ";
    cin >> value1 >> value2;
    cout << "max = " << std::max(value1, value2) 
        << ", min = " << std::min(value1, value2);
}
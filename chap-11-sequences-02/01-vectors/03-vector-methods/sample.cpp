#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

// Overload the operator<< function
std::ostream& operator<<(std::ostream& os, const vector<int>& v)
{
    int size = v.size();
    os << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            os << v[i];
        }
        else
        {
            os << v[i] << ", ";
        }
    }
    os << " }";
    return os;
}

int main()
{
    // vector<int> v;
    // v.push_back(5);
    // v.push_back(-3);
    // v.push_back(12);
    // cout << v << '\n'; // { 5, -3, 12 }

    // v.pop_back();
    // v.pop_back();
    // cout << v << '\n'; // { 5 }

    vector<int> v{10, 20, 30, 40, 50};
    cout << v.operator[](0) << '\n'; // 10
    
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
       cout << v.operator[](i) << " ";
    }
    cout << '\n';
    // -> 10 20 30 40 50 
}
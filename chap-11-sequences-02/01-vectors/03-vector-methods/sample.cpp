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
    cout << '\n';

    // vector<int> v;
    // v.push_back(5);
    // v.push_back(-3);
    // v.push_back(12);
    // cout << v << '\n'; // { 5, -3, 12 }

    // v.pop_back();
    // v.pop_back();
    // cout << v << '\n'; // { 5 }

    // vector<int> v{10, 20, 30, 40, 50};
    // cout << v.operator[](0) << '\n'; // 10
    
    // int size = v.size();
    // for (int i = 0; i < size; i++)
    // {
    //    cout << v.operator[](i) << " ";
    // }
    // cout << '\n';
    // // -> 10 20 30 40 50 

    // vector<int> v{10, 20, 30, 40, 50};
    // cout << v.at(0) << '\n'; // 10
    // cout << v.at(4) << '\n'; // 50
    
    // cout << v[-1] << '\n'; // undefined behavior
    
    // NOTE: The method `v.at(x)` will check to ensure that the index
    // is within the bounds of the vector. If x is outside of the
    // acceptable range of indices, the method is guarantee to produce
    // a run-time error.
    // cout << v.at(-1) << '\n'; // Produce a run-time error

    // NOTE: We can use try...catch statements to catch a run-time error
    // try
    // {
    //     cout << v.at(-1) << '\n';
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // // -> vector::_M_range_check: __n (which is 18446744073709551615) >= this->size() (which is 5)

    vector<int> v{10, 20, 30, 40, 50};

    // for (unsigned i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }


    // C++ provides a special unsigned integer type named size_t that is guaranteed to be large enough
    // to represent the largest possible vector index. The above code that uses the unsigned type for the loop
    // variable is better written as:
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}
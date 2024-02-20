#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print_integers(const vector<int>& v)
{
    int size = v.size();
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << " }\n";
}

void print_doubles(const vector<double>& v)
{
    int size = v.size();
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << " }\n";
}

void print_chars(const vector<char>& v)
{
    int size = v.size();
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << " }\n";
}

int main()
{
    // Declare an empty vector
    // vector<int> v; // -> {  }
    // cout << v.size() << '\n'; // 0

    // Declare a vector with particular initial size
    // vector<int> v(5); // -> { 0, 0, 0, 0, 0 }

    // Declare a vector of a given size and 
    // specify the initial value of all of its elements:
    // vector<int> v(5, 8); // -> { 8, 8, 8, 8, 8 }

    // Declare a vector and specify each and 
    // every element separately:
    // vector<int> v{1, 2, 3, 4, 5}; // -> { 1, 2, 3, 4, 5 }

    // print_integers(v);

    // vector<int> v(3);

    // cout << v[0] << '\n';
    // cout << v[-1] << '\n';
    // cout << v[4] << '\n';
    // cout << v[5] << '\n';

    // v[0] = 100;
    // cout << v[0] << '\n'; // -> 100

    // vector<double> v{1.1, 2.5, 4.5};
    // print_doubles(v); // { 1.1, 2.5, 4.5 }

    // vector<char> v{'a', 'b', 'c'};
    // print_chars(v); // { a, b, c }

    // vector<int> v;
    // print_integers(v); // {  }
    // v.push_back(100);
    // print_integers(v); // { 100 }
    // v.push_back(200);
    // v.push_back(300);
    // print_integers(v); // { 100, 200, 300 }

    // char a = 'a';
    // cout << a << '\n';
    // cout << a + 1 << '\n';

    // char ch;
    // ch = 65;
    // cout << ch << '\n';

    // int a;
    // a = 'A';
    // cout << a << '\n';

    char ch = 'A';
    cout << ch << '\n';
    ch += 1;
    cout << ch << '\n';
}
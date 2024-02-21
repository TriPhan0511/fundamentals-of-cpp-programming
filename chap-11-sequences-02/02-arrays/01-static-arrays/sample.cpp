#include <iostream>

using std::cout;
using std::cin;

int list[5]; // global variable

int main()
{
    // cout << '\n';

    // int list[5];
    // list[0] = 10;
    // list[1] = 20;
    // list[2] = 30;
    // list[3] = 40;
    // list[4] = 50;

    // cout << list[0] << '\n';
    // cout << list[-1] << '\n';
    // cout << list[5] << '\n';
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << list[i] << " ";
    // }

    // int x;
    // cout << "Enter a number: ";
    // cin >> x;
    // int list[x]; // Illegal

    // int list[] = {1, 2, 3, 4, 5};

    // int size = sizeof(list) / sizeof(list[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << list[i] << " ";
    // }
    
    // int list[5]; // local variable

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << list[i] << " ";
    // }
    
    int list[5] = {1, 2, 3, 4, 5,};
    cout << list[0] << '\n';
    // cout << list[1.3] << '\n'; // Illegal
}
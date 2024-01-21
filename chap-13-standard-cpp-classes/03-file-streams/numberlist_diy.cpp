#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::vector;
using std::string;

void print_vector(const vector<int>& v)
{
    cout << "{";
    int len = v.size();
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << "}\n";
}

void menu()
{
    cout << "I)nsert <item> "
         << "P)rint "
         << "S)ave <filename> " 
         << "L)oad <filename> "
         << "E)rase "
         << "Q)uit: ";
}

void run(vector<int>& v)
{
    bool done = false;
    int value;
    char command;
    while (!done)
    {
        menu();
        cin >> command;
        switch (command)
        {
            case 'I':
            case 'i':
                cin >> value;
                v.push_back(value);
                break;
            case 'P':
            case 'p':
                print_vector(v);
                break;
            case 'S':
            case 's':
                cout << "command: " << command << '\n';
                break;
            case 'L':
            case 'l':
                cout << "command: " << command << '\n';
                break;
            case 'E':
            case 'e':
                v.clear();
                cout << "Contents in the vector were cleared!\n";
                break;
            case 'Q':
            case 'q':
                done = true;
                cout << "Goodbye!\n";
                break;
            
            default:
                cout << "Wrong choice. Please try again!\n";
                break;
        }    
    }
}

int main()
{
    vector<int> list;
    run(list);
}

// void run(vector<int>& v, bool& done)
// {
//     int value;
//     char command;
//     menu();
//     cin >> command;
//     switch (command)
//     {
//         case 'I':
//         case 'i':
//             cin >> value;
//             v.push_back(value);
//             break;
//         case 'P':
//         case 'p':
//             print_vector(v);
//             break;
//         case 'S':
//         case 's':
//             cout << "command: " << command << '\n';
//             break;
//         case 'L':
//         case 'l':
//             cout << "command: " << command << '\n';
//             break;
//         case 'E':
//         case 'e':
//             cout << "command: " << command << '\n';
//             break;
//         case 'Q':
//         case 'q':
//             done = true;
//             cout << "Goodbye!\n";
//             break;
        
//         default:
//             cout << "Wrong choice. Please try again!\n";
//             break;
//     }
// }




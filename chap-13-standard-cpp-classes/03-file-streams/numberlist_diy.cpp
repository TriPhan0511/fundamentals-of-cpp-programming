#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::ofstream;
using std::ifstream;

int get_int(string prompt = "")
{
    int value;
    cout << prompt;
    while (!(cin >> value))
    {
        // Report error and re-prompt
        cout << "Bad entry! The value you entered is not an integer.\n"
             << "Please try again: ";
        // Clean up the input stream
        cin.clear(); // Clear the error state of the stream
        // Empty the keyboard buffer
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}

void print_vector(const vector<int>& v)
{
    int len = v.size();
    cout << "{";
    if (len > 0)
    {
        for (int i = 0; i < len; i++)
        {
            if (i == len - 1)
            {
                cout << v[i];
            }
            else{
                cout << v[i] << ", ";
            }
        }
    }
    cout << "}\n";
}

void load_vector_2(const string& filename, vector<int>& v)
{
    // Opent file for reading
    ifstream in(filename);
    int value;
    while (in >> value)
    {
        v.push_back(value);
    }
}

/**
 * load_vector(filename, v)
 *  Reads the contents of vector v from text file filename
 *  v's contents are replaced by the file's contents.
 *  If the file cannot be found, the vector v is empty
 *  v is a vector holding integers.
*/
void load_vector(const string& filename, vector<int>& v)
{
    // Open a text file for reading
    ifstream in(filename);
    if (in.good()) // Make sure the file was opened properly
    {
        v.clear(); // Start with empty vector
        int value;
        while (in >> value) // Read until end of file
        {
            v.push_back(value);
        }
    }
    else
    {
        cout << "Unable to load in the file\n";
    }
    
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

void run(vector<int>& v, bool done)
{
    int value;
    string filename;
    char command;
    while (!done)
    {
        menu();
        cin >> command;
        switch (command)
        {
        case 'I':
        case 'i':
            // cin >> value;
            value = get_int();
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
            cin >> filename;
            load_vector_2(filename, v);
            break;
        case 'E':
        case 'e':
            v.clear();
            cout << "All contents in the vector were cleared.\n";
            break;
        case 'Q':
        case 'q':
            cout << "command: " << command << '\n';
            done = true;
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
    bool done = false;
    run(list, done);
}

// int main()
// {
//     vector<int> list;
//     bool done = false;
//     int value;
//     char command;
//     while (!done)
//     {
//         menu();
//         cin >> command;
//         switch (command)
//         {
//         case 'I':
//         case 'i':
//             cin >> value;
//             list.push_back(value);
//             break;
//         case 'P':
//         case 'p':
//             print_vector(list);
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
//             list.clear();
//             cout << "All contents in the vector were cleared.\n";
//             break;
//         case 'Q':
//         case 'q':
//             cout << "command: " << command << '\n';
//             done = true;
//             break;
        
//         default:
//             cout << "Wrong choice. Please try again!\n";
//             break;
//         }
//     }
// }
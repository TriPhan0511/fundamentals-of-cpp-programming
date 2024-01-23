#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits> // for std::numeric_limits<std::streamsize>::max()


using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;

/**
 * save_vector(filename, v)
 *  Write the contents of the vector v.
 *  filename if name of text file created. 
 *   Any file by that name is overwritten.
 *  v is a vector holding integers.
 *   v is unchanged by the function.
*/
void save_vector(const string& filename, const vector<int>& v)
{
    // Open a text file for writing
    // ofstream fout;
    // fout.open(filename);
    ofstream fout(filename);
    if (fout.good()) // Make sure the file wa opened properly
    {
        int len = v.size();
        for (int i = 0; i < len; i++)
        {
            fout << v[i] << " ";
        }
        fout << '\n';
        cout << "Content were written to file.\n";
    }
    else
    {
        cout << "Unable to save the file\n";
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
    // ifstream in;
    // in.open(filename);
    ifstream in(filename);
    if (in.good()) // Make sure the file was opened
    {
        int value;
        v.clear(); // Removes existing content in the vector
        while (in >> value) // Read until end of file
        {
            v.push_back(value);
        }
        cout << "Content loaded!\n";
    }
    else
    {
        cout << "Unable to load in the file\n";
    }
}

/**
 * print_vector(v)
 *  Prints contents of a vector.
 *  v is a vector containing integers.
*/
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

/**
 * get_int(prompt)
 *  Get an integer from keyboard.
 *  prompt is optional.
*/
int get_int(string prompt = "Please enter an integer: ")
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

/**
 * menu()
 *  Display options.
*/
void menu()
{
    cout << "I)nsert <item> "
         << "P)rint "
         << "S)ave <filename> " 
         << "L)oad <filename> "
         << "E)rase "
         << "Q)uit: ";
}

/**
 * run(v)
 *  Run methods based on input from user.
 *  v is a vector containing integers.
*/
void run(vector<int>& numbers)
{
    bool done = false;
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
                numbers.push_back(value);
                break;
            case 'P':
            case 'p':
                print_vector(numbers);
                break;
            case 'S':
            case 's':
                cin >> filename;
                save_vector(filename, numbers);
                break;
            case 'L':
            case 'l':
                cin >> filename;
                load_vector(filename, numbers);                
                break;
            case 'E':
            case 'e':
                numbers.clear();
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

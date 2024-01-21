/*
C++ fstream objects allow programmers to build persistence 
into their applications. 
The following program is a simple example of a program 
that allows the user to save the contents of a vector to 
a text file and load a vector from a text file.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::ofstream;
using std::ifstream;

/**
 * print_vector(v)
 *  Prints the contents of vector v.
 *  v is a vector holding integers.
*/
void print_vector(const vector<int>& v)
{
    cout << "{";
    int len = v.size();
    if (len > 0)
    {
        for (int i = 0; i < len; i++)
        {
            if (i == len - 1)
            {
                cout << v[i];
            }
            else {
                cout << v[i] << ", ";
            }
        }
    }
    cout << "}\n";
}

/**
 * save_vector(filename, v)
 *  Write the contents of the vector v.
 *  filename if name of text file created. 
 *      Any file by that name is overwritten.
 *  v is a vector holding integers.
 *      v is unchanged by the function.
*/
void save_vector(const string& filename, const vector<int>& v)
{
    // Open a text file for writing
    ofstream out(filename);
    if (out.good()) // Make sure the file was opened properly
    {
        int len = v.size();
        for (int i = 0; i < len; i++)
        {
            out << v[i] << " "; // Space delimited
        }
        out << '\n';
    }
    else
    {
        cout << "Unable to save the file";
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

int main()
{
    vector<int> list;
    int value;
    string filename;
    char command;
    bool done = false;
    while (!done)
    {
        cout << "I)nsert <item> "
             << "P)rint "
             << "S)ave <filename> "
             << "L)oad <filename> "
             << "E)rase "
             << "Q)uit: ";
        cin >> command;
        switch (command)
        {
        case 'I':
        case 'i':
            cin >> value;
            list.push_back(value);
            break;
        case 'P':
        case 'p':
            print_vector(list);
            break;
        case 'S':
        case 's':
            cin >> filename;
            save_vector(filename, list);
            break;
        case 'L':
        case 'l':
            cin >> filename;
            load_vector(filename, list);
            break;
        case 'E':
        case 'e':
            list.clear();
            break;
        case 'Q':
        case 'q':
            done = true;
            break;
        
        default:
            cout << "Wrong choice. Please try again!\n";
            break;
        }
    }
    
}
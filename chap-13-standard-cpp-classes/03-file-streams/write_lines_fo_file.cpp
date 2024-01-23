#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::ifstream;
using std::ofstream;

/**
 * print_lines_from_file(filename)
 *  Print line by line from a file.
*/
void print_lines_from_file(const string& filename)
{
    ifstream fin(filename);
    if (fin.good())
    {
        string line;
        while (getline(fin, line)) // Read until end of file
        {
            cout << line << '\n';
        }
    }
    else
    {
        cout << "Unable to write to the file.\n";
    }
}

/**
 * write_lines_to_file(filename)
*/
void write_lines_to_file(const string& filename)
{
    ofstream fout(filename);
    if (fout.good())
    {
        string line;
        while (true)
        {
            cout << "Enter a line of text (an empty line to end): ";    
            getline(cin, line);
            if (line == "")
            {
                break;
            }
            fout << line << '\n';    
        }
        cout << "Data was written to file.\n";
    }
}

int main()
{
    // write_lines_to_file("lines_2.txt");
    print_lines_from_file("lines_2.txt");
}
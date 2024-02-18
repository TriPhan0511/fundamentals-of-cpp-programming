#include <iostream>
#include <string>
#include "filewriter.h"

FileWriter::FileWriter(const std::string& file_name)
{
    // Open the file for writing
    fout.open(file_name);
    if (!fout.is_open())
    {
        std::cerr << "Error: Unable to open file " << file_name 
            << " for writing" << '\n';
    }
}

FileWriter::~FileWriter()
{
    // Close the file when the object is destroyed
    if (fout.is_open())
    {
        fout.close();
        std::cout << "File closed successfully." << '\n';
    }
}

void FileWriter::write(const std::string& data)
{
    if (fout.is_open())
    {
        fout << data;
    }
    else
    {
        std::cerr << "Error: File is not open for writing." << '\n';
    }
}
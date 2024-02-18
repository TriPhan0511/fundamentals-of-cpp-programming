#include <iostream>
#include "filewriter.h"

int main()
{
    // Create an object of FileWriter
    FileWriter writer("output.txt");
    // Write data to the file
    writer.write("Hello, world!");
    writer.write("\n");
    writer.write("How are you?");

    // No need to explicitly close the file; destructor will do it automatically
    // when the FileWriter object goes out of scope at the end of main()
}
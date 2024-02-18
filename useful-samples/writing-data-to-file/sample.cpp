// The following program illustrates how to write data to a file.
// Note:
// In C++, you can write data to a file using the std::ofstream class 
// from the <fstream> header. 

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // Open a file for writing
    std::string file_name = "mydata.txt";
    std::ofstream fout;
    fout.open(file_name);

    // Check if the file is open
    if (!fout.is_open())
    {
        std::cout << "Could not open " << file_name << " for writing\n";
        return 1; // Return error code
    }
    
    // Write data to the file
    fout << "Hello, world!\n";
    fout << 42 << '\n';
    fout << 3.14 << '\n';

    // Close the file
    fout.close();
    
    std::cout << "Data written to file successfully.\n";
}
// int main()
// {
//     // Open a file for writing
//     std::string file_name = "mydata.txt";
//     std::ofstream fout;
//     fout.open(file_name);

//     // Check if the file is open
//     if (!fout.good())
//     {
//         std::cout << "Could not open " << file_name << " for writing\n";
//         exit(1); // Terminate the program
//     }
    
//     // Write data to the file
//     fout << "Hello, world!\n";
//     fout << 42 << '\n';
//     fout << 3.14 << '\n';

//     // Close the file
//     fout.close();
    
//     std::cout << "Data written to file successfully.\n";
// }
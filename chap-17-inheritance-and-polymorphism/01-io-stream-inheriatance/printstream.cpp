// The following program shows how a function can process
// instances of two different classes related by inheritance.

#include <iostream>
#include <fstream>

void print(std::ostream& os, int number)
{
    os.width(10); // Right justified in 10 spaces
    os.fill('*'); // Fill character is *
    os << number << '\n';
}

int main()
{
    // Pretty print to screen
    print(std::cout, 35);

    // Pretty print to a text file
    std::ofstream fout("my_file.txt");
    if (fout.good())
    {
        print(fout, 35);
    }
    
}
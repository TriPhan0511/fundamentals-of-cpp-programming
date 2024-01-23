// The following program compares the performance of
// std::endl and '\n' in various situations.

/*
The following program writes a vector containing 100,000 integers to the console and a text file. Each
number appears on its own line. Since std::endl flushes the stream object’s buffer in addition to printing
a '\n', we would expect it to reduce the program’s performance since it would minimize the benefit of
buffering in this case. Multiple runs of Listing 13.7 (endltest.cpp) on one system revealed that using '\n'
to terminate lines generally was only slightly faster than std::endl (but not always) when writing to the
console window. The '\n' terminator was consistently about three times faster than std::endl when
writing to a text file.
*/

/*
The following program also exploits the special relationship between std:cout and any std::ofstream
object. The print_with_endl and print_with_n functions both accept a std::ostream object
as their second parameter. Note that the caller, main, passes both the std::cout object and the fout
object to these printing functions at various times, and the compiler does not complain
*/

#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstdlib> // for rand()

using std::ostream;

// Make a alias for the long type nam
using Sequence = std::vector<int>;

Sequence make_rand_sequence(int size, int max)
{
    Sequence result(size);
    for (int i = 0; i < size; i++)
    {
        result[i] = rand() % max; // Generate a random value in range 0..max-1
    }
    return result;
}

void print_with_endl(const Sequence& vs, std::ostream& out)
{
    for (auto elem : vs)
    {
        out << elem << std::endl;
    }
}

void print_with_n(const Sequence& vs, std::ostream& out)
{
    for (auto elem : vs)
    {
        out << elem << '\n';
    }
}

int main()
{
    // Sequence up to 100,00 elements, 
    // with each element < 100.
    auto seq = make_rand_sequence(100000, 100);

    // Time writing the elements to the console 
    // with std::endl newlines
    clock_t start_time = clock();
    print_with_endl(seq, std::cout);
    unsigned elapsed1 = clock() - start_time;

    // Time writing the elements to the console 
    // with '\n newlines
    start_time = clock();
    print_with_n(seq, std::cout);
    unsigned elapsed2 = clock() - start_time;

    // Time writing the elements to a text file
    // with std::endl newlines
    std::ofstream fout("temp.out");
    start_time = clock();
    print_with_endl(seq, fout);
    fout.close();
    unsigned elapsed3 = clock() - start_time;

    // Reopen the file for writing
    fout.open("temp.out");
    // Time writing the elements to a text file
    // with '\n' newlines
    start_time = clock();
    print_with_n(seq, fout);
    fout.close();
    unsigned elapsed4 = clock() - start_time;

    // Display the results
    std::cout << "With std::endl (console): " << elapsed1 << '\n';
    std::cout << "With '\\n' (console): " << elapsed2 << '\n';
    std::cout << "With std::endl (file): " << elapsed3 << '\n';
    std::cout << "With '\\n' (file): " << elapsed4 << '\n';
}
// ->
// With std::endl (console): 14851
// With '\n' (console): 13238
// With std::endl (file): 439
// With '\n' (file): 14
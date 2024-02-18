#ifndef LOGCOMPARER_H_
#define LOGCOMPARER_H_

#include <fstream>
#include <string>
#include "comparer.h"

/**
 * Comparer objets manage the comparisons and element
 * interchanges on the selection sort function below.
*/
class LogComparer: public Comparer
{
    // Output stream to which logging messages are directed
    std::ofstream fout;

protected:
    // Method that actually performs the comparison
    bool compare_impl(int a, int b) override;

    // Method that actually perform swap
    void swap_impl(int& a, int& b) override;

public:
    // The client must initialize a LogComparer object with a
    // suitable comparison function and the file name of a text
    // file to which the object will direct logging messages
    LogComparer(bool (*f)(int, int), const std::string& filename);

    // The destructor must close the log file
    ~LogComparer();
};

#endif
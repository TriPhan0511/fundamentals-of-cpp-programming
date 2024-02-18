#ifndef LOGCOMPARER_H_
#define LOGCOMPARER_H_

#include <fstream>
#include <string>
#include "comparer.h"

class LogComparer: public Comparer
{
    std::ofstream fout;
protected:
    bool compare_impl(int a, int b) override;
    void swap_impl(int& a, int& b) override;
public:
    LogComparer(bool (*f)(int, int), const std::string& file_name);
    ~LogComparer(); // The destructor must close the file
};

#endif
#ifndef FILEWRITER_H_
#define FILEWRITER_H_

#include <fstream>
#include <string>

class FileWriter
{
    std::ofstream fout;
public:
    FileWriter(const std::string& file_name);
    ~FileWriter();
    void write(const std::string& data);
};

#endif
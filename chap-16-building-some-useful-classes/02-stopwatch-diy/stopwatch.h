#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <ctime>

class Stopwatch
{
private:
    clock_t startTime;
    clock_t endTime;
public:
    void start();
    void stop();
    double elapsed();
};

#endif
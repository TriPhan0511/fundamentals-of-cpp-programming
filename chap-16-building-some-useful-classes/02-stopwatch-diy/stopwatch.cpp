
#include "stopwatch.h"

void Stopwatch::start()
{
    startTime = clock();
}

void Stopwatch::stop()
{
    endTime = clock();
}

double Stopwatch::elapsed()
{
    return static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
}
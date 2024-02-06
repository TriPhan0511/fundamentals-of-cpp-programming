#ifndef STOPWATCH_H_DEFINED
#define STOPWATCH_H_DEFINED

#include <ctime>

class Stopwatch
{
private:
    clock_t start_time;
    bool running;
    double elapsed_time;
public:
    Stopwatch();
    void start();            // Start the timer
    void stop();             // Stop the timer
    void reset();            // Reset the timer
    double elapsed() const;  // Reveal the elapsed time
    bool is_running() const; // Is the stopwatch currently running?
};

#endif
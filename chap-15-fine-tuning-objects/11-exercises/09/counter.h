#ifndef COUNTER_H_
#define COUNTER_H_

class Counter
{
private:
    int value;
public:
    Counter();
    void increment();
    void decrement();
    int get() const;
};

#endif
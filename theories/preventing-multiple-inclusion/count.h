#ifndef COUNT_H_
#define COUNT_H_

class Count
{
    int value;
public:
    Count(int v);
    int get_count() const;
    void inc();
};

#endif
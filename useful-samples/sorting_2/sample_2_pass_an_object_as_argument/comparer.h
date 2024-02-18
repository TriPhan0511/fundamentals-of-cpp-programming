#ifndef COMPARER_H_
#define COMPARER_H_

class Comparer
{
    bool (*comp)(int, int);
    int compare_count;
    int swap_count;
public:
    Comparer(bool (*f)(int, int));
    bool compare(int a, int b);
    void swap(int& a, int& b);
    void reset();
    int comparisons() const;
    int swaps() const;
};

#endif
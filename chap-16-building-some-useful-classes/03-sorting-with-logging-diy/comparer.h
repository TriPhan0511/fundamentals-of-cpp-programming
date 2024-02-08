#ifndef COMPARER_H_
#define COMPARER_H_

class Comparer
{
    int compare_count;
    int swap_count;
    bool (*comp)(int, int);
public:
    Comparer(bool (*f)(int, int));
    int comparisons() const;
    int swaps() const;
    void reset();
    void swap(int& a, int& b);
    bool compare(int a, int b);
};

#endif
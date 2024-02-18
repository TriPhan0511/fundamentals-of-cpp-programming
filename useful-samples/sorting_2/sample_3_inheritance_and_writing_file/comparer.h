#ifndef COMPARER_H_
#define COMPARER_H_

class Comparer
{
    bool (*comp)(int, int);
    int compare_count;
    int swap_count;
protected:
    virtual bool compare_impl(int a, int b);
    virtual void swap_impl(int& a, int& b);
public:
    Comparer(bool (*f)(int, int));
    bool compare(int a, int b);
    void swap(int& a, int& b);
    void reset();
    int comparisons() const;
    int swaps() const;

    // Note:
    // Any class that has at least one virtual function should define
    // a virtual destructor. This allow derived class to define
    // their destructors that operate correctly.
    // If the class really does not need any clean up and therefore
    // does no warrant it owns destructor, the =default notation indicates so.
    virtual ~Comparer()=default;
};

#endif
#include "comparer.h"

Comparer::Comparer(bool (*f)(int, int)):
    comp(f), compare_count(0), swap_count(0) {}

bool Comparer::compare(int a, int b)
{
    compare_count++;
    return comp(a, b);
}

void Comparer::swap(int& a, int& b)
{
    swap_count++;
    int temp = a;
    a = b;
    b = temp;
}

void Comparer::reset()
{
    compare_count = 0;
    swap_count = 0;
}

int Comparer::comparisons() const
{
    return compare_count;
}

int Comparer::swaps() const
{
    return swap_count;
}
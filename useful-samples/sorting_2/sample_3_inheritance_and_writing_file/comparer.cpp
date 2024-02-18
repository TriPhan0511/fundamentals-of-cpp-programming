#include <utility> // for std::swap
#include "comparer.h"

bool Comparer::compare_impl(int a, int b)
{
    return comp(a, b);
}

void Comparer::swap_impl(int& a, int& b)
{
    std::swap(a, b);
}

Comparer::Comparer(bool (*f)(int, int)):
    comp(f), compare_count(0), swap_count(0) {}

bool Comparer::compare(int a, int b)
{
    compare_count++;
    return compare_impl(a, b);
}

void Comparer::swap(int& a, int& b)
{
    swap_count++;
    swap_impl(a, b);
}

void Comparer:: reset()
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
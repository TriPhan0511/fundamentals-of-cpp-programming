// The following program is a variation of 
// flexibleintsort.cpp(12.2) that uses a comparison object 
// instead of a comparison function.


#include <iostream>
#include <vector>

using std::cout;
using std::vector;

/**
 * Comparer objects manage the comparisons and element
 * interchanges on the selection sort function below.
*/
class Comparer
{
    // Keeps track of the number of comparisons performed
    int compare_count;
    // Keeps track of the number of swaps performed
    int swap_count;
    // Function pointer directed to the function to 
    // perform the comparison
    bool (*comp)(int, int);
public:
    // The client must initialize a Comparer object 
    // with a suitable comparison function.
    Comparer(bool (*f)(int, int)): 
        compare_count(0), swap_count(0), comp(f) {}
    
    // Resets the counters to make ready for a new sort
    void reset()
    {
        compare_count = 0;
        swap_count = 0;
    }

    // Method that performs the comparison.
    // It delegates the actual work to the function 
    // pointed to by comp.
    // This method logs each invocation.
    bool compare(int m, int n)
    {
        compare_count++;
        return comp(m, n);
    }

    // Method that performs the swap.
    // Interchange the values of its parameters m and n
    // which are passed by reference.
    // This method logs each invocation.
    void swap(int& m, int& n)
    {
        swap_count++;
        int temp = m;
        m = n;
        n = temp;
    }

    // Returns the number of comparisons this object
    // has performed since it was created
    int comparisons() const
    {
        return compare_count;
    }

    // Returns the number of swaps this object
    // has performed since it was created
    int swaps() const
    {
        return swap_count;
    }
};

/**
 * selection_sort(v, comparer)
 *  Arranges the elements of vector v in an order
 *  determined by the comparer object.
 *  v is a vector of ints.
 *  comparer is a function that compares the ordering
 *  of two integers.
 *  The contents of v are physically rearranged.
*/
void selection_sort(vector<int>& v, Comparer& comparer)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (comparer.compare(v[j], v[pos]))
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            comparer.swap(v[i], v[pos]);
        }
                
    }
    
}

// void selection_sort_2(vector<int>& v, Comparer& comparer)
// {
//     int size = v.size();
//     for (int i = 0; i < size - 1; i++)
//     {
//         int pos = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (comparer.compare(v[j], v[pos]))
//             {
//                 pos = j;
//             }
//         }
//         if (pos != i)
//         {
//             comparer.swap(v[i], v[pos]);
//         }
//     }
//     // cout << "\nTest: comparisons = " << comparer.comparisons();
//     // cout << "\nTest: swaps = " << comparer.swaps() << '\n';
// }

/**
 * print(v)
 *  Prints the contents of an integer vector
 *  v is the vector to print.
 *  v is not modified.
*/
void print_vector(const vector<int>& v)
{
    cout << "{ ";
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << v[i];
        }
        else
        {
            cout << v[i] << ", ";
        }
    }
    cout << " }\n";
}

/**
 * less_than(a, b)
 *  Returns true if a < b; otherwise, returns false.
*/
bool less_than(int a, int b)
{
    return a < b;
}

/**
 * greater_than(a, b)
 *  Returns true if a > b; otherwise, returns false,
*/
bool greater_than(int a, int b)
{
    return a > b;
}

int main()
{
    // Make a vector of integers from an array
    vector<int> original { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };

    // Make a working copy of the original vector
    vector<int> working = original;
    cout << "Before: ";
    print_vector(working);
    cout << '\n';

    Comparer lt(less_than);
    Comparer gt(greater_than);
    selection_sort(working, lt);
    cout << "Ascending: ";
    print_vector(working);
    cout << " (" << lt.comparisons() << " comparisons, "
        << lt.swaps() << " swaps)\n";
    cout << "-----------------------------------------\n";
    // Make another copy of the original vector
    working = original;
    cout << "Before: ";
    print_vector(working);
    selection_sort(working, gt);
    cout << "Descending: ";
    print_vector(working);
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
    cout << "-----------------------------------------\n";
    // Sort a sorted vector
    cout << "Before: ";
    print_vector(working);
    // Reset the gt comparer so we start counting at zero
    gt.reset();
    selection_sort(working, gt);
    cout << "Descending: ";
    print_vector(working);
    cout << " (" << gt.comparisons() << " comparisons, "
        << gt.swaps() << " swaps)\n";
}

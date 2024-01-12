#include <iostream>

using std::cout;
using std::cin;



// Sample:
// Enter height of tree: 5
//     *    
//    ***
//   *****
//  *******
// *********

void print_characters(int num, char ch)
{
    for (int j = 0; j < num; j++)
    {
        cout << ch;
    }
}

/*
 *  tree(height)
 *      Draws a tree of a given height
 *      height is the height of the displayed tree
*/
void tree(int height)
{
    int spaces = height - 1;
    int stars = 1;
    for (int i = 0; i < height; i++)
    {
        print_characters(spaces, ' ');
        print_characters(stars, '*');
        print_characters(spaces, ' ');
        spaces -= 1;    
        stars += 2;
        cout << '\n';
    }
}

int main()
{
    int height;
    cout << "Enter height of tree: ";
    cin >> height;
    tree(height);
}

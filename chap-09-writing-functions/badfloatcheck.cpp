#include <iostream>

using std::cout;

int main()
{
    for (double i = 0.0; i != 1.0; i += 0.1)
    {
        cout << "i = " << i << '\n';
    }
    
}
// ->
// i = 0
// i = 0.1
// i = 0.2
// i = 0.3
// i = 0.4
// i = 0.5
// i = 0.6
// i = 0.7
// i = 0.8
// i = 0.9
// i = 1
// i = 1.1
// i = 1.2
// i = 1.3
// i = 1.4
// i = 1.5
// i = 1.6
// i = 1.7
// ...
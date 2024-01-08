#include <iostream>

int main()
{
    int power = 1;
    while (power <= 1000000000)
    {
        std::cout << power << '\n';
        power *= 10;
    }
}
// ->
// 1
// 10        
// 100       
// 1000      
// 10000     
// 100000    
// 1000000   
// 10000000  
// 100000000 
// 1000000000
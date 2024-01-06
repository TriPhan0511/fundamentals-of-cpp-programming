#include <iostream>

#include <typeinfo>

int main(){
    // int count = 10;
    // double limit = 100.0;
    // char c = 'A';

    auto count = 10;
    auto limit = 100.0;
    auto c = 'A';
    
    std::cout << "Count: " << count << '\n';
    std::cout << "Limit: " << limit << '\n';
    std::cout << "c: " << c << '\n';

    // b = bool, c = char, i = int, d = double, f = float
    std::cout << typeid(count).name() << '\n'; // i
    std::cout << typeid(limit).name() << '\n'; // d
    std::cout << typeid(c).name() << '\n'; // c

    // if (typeid(count).name() == "i")
    // {
    //     std::cout << "Integer";
    // }else
    // {
    //     std::cout << "NOT an Integer";
        
    // }
    
    

}
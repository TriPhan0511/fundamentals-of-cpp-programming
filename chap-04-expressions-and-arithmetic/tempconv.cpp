#include <iostream>

int main(){
    double deggreesF, degreesC;
    std::cout << "Enter the temperature in degrees Fahrenheit: ";
    std::cin >> deggreesF;
    degreesC = 5.0 / 9 * (deggreesF - 32);
    std::cout << "Temperature in Celsius: " << degreesC;
}
/*
    NOTE:
    In this program:
    The findGCD function calculates the greatest common divisor 
    using the Euclidean algorithm.
    The findLCM function then uses the GCD to find the 
    least common multiple based on the formula mentioned earlier.
*/

#include <iostream>

// Function to find the greatest common divisor (GCD)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM)
int findLCM(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; // LCM is undefined for zero
    }

    int gcd = findGCD(a, b);

    // LCM(a, b) = |a * b| / GCD(a, b)
    int lcm = std::abs(a * b) / gcd;

    return lcm;
}

int main() {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int lcm = findLCM(num1, num2);

    std::cout << "Least Common Multiple (LCM): " << lcm << std::endl;

    return 0;
}

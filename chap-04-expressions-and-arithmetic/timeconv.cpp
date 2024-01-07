#include <iostream>

// Sample: 11,045 seconds -> 3:04:05
int main(){
    int hours, minutes, seconds;
    std::cout << "Please enter the number of seconds: ";
    std::cin >> seconds;
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;
    // Report the results    
    // std::cout << hours << " hour(s), " << minutes << " minute(s), " << seconds << " second(s)";
    std::cout << hours << ":";
    // Compute tens digit of minutes
    int tens = minutes / 10;
    std::cout << tens;
    // Compute ones digit of minutes
    int ones = minutes % 10;
    std::cout << ones << ":";
    // Compute tens digit of seconds
    tens = seconds / 10;
    std::cout << tens;
    // Compute ones digit of seconds
    ones = seconds % 10;
    std::cout << ones;
}

// // Sample: 11,045 seconds -> 3 hour(s), 4 minute(s), 5 second(s)
// int main(){
//     int hours, minutes, seconds;
//     std::cout << "Please enter the number of seconds: ";
//     std::cin >> seconds;
//     hours = seconds / 3600;
//     seconds %= 3600;
//     minutes = seconds / 60;
//     seconds %= 60;
//     std::cout << hours << " hour(s), " << minutes << " minute(s), " << seconds << " second(s)";
// }

// Sample: 11,045 seconds -> 3 hour(s), 4 minute(s), 5 second(s)
// int main(){
//     int hours, minutes, seconds;
//     std::cout << "Please enter the number of seconds: ";
//     std::cin >> seconds;
//     hours = seconds / 3600;
//     seconds = seconds % 3600;
//     minutes = seconds / 60;
//     seconds = seconds % 60;
//     std::cout << hours << " hour(s), " << minutes << " minute(s), " << seconds << " second(s)";
// }


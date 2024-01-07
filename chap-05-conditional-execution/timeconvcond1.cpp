#include <iostream>
#include <string>

std::string singularOrPlural(int num, std::string plural) 
{
    if (num > 1)
    {
        return plural + "s";
    }
    return plural;
}

int main()
{
    // Some useful conversion constants
    const int SECONDS_PER_MINUTE = 60;
    const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * 60; // 3600
    int hours;
    int minutes;
    int seconds;
    std::cout << "Please enter the number of seconds: ";
    std::cin >> seconds;
    hours = seconds / SECONDS_PER_HOUR;
    seconds = seconds % SECONDS_PER_HOUR;
    minutes = seconds / SECONDS_PER_MINUTE;
    seconds = seconds % SECONDS_PER_MINUTE;
    // Display the results
    std::cout << hours;
    std::cout << " " << singularOrPlural(hours, "hour") << " ";
    std::cout << minutes;
    std::cout << " " << singularOrPlural(minutes, "minute") << " ";
    std::cout << seconds;
    std::cout << " " << singularOrPlural(seconds, "second") << " ";
}

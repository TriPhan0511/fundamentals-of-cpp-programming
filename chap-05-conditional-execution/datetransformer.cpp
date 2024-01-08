#include <iostream>

using std::cout;
using std::cin;
using std::string;

string translateMonthIntoEnglish(int month)
{
    string monthInEnglish = "";
    if (month == 1)
        monthInEnglish = "January";
    else if (month == 2)
        monthInEnglish = "February";
    else if (month == 3)
        monthInEnglish = "March";
    else if (month == 4)
        monthInEnglish = "April";
    else if (month == 5)
        monthInEnglish = "May";
    else if (month == 6)
        monthInEnglish = "June";
    else if (month == 7)
        monthInEnglish = "July";
    else if (month == 8)
        monthInEnglish = "August";
    else if (month == 9)
        monthInEnglish = "September";
    else if (month == 10)
        monthInEnglish = "October";
    else if (month == 11)
        monthInEnglish = "November";
    else if (month == 12)
        monthInEnglish = "December";
    return monthInEnglish;
}

string translateMonthIntoSpainish(int month)
{
    string monthInSpainish = "";
    if (month == 1)
        monthInSpainish = "enero";
    else if (month == 2)
        monthInSpainish = "febrero";
    else if (month == 3)
        monthInSpainish = "marzo";
    else if (month == 4)
        monthInSpainish = "abril";
    else if (month == 5)
        monthInSpainish = "mayo";
    else if (month == 6)
        monthInSpainish = "junio";
    else if (month == 7)
        monthInSpainish = "julio";
    else if (month == 8)
        monthInSpainish = "agosto";
    else if (month == 9)
        monthInSpainish = "septiembre";
    else if (month == 10)
        monthInSpainish = "octubre";
    else if (month == 11)
        monthInSpainish = "noviembre";
    else if (month == 12)
        monthInSpainish = "diciembre";
    return monthInSpainish;
}

int main()
{
    int month, day;
    string monthInEnglish, monthInSpainish;
    cout << "Pelase enter the month and day as number: ";
    cin >> month >> day;
    monthInEnglish = translateMonthIntoEnglish(month);
    monthInSpainish = translateMonthIntoSpainish(month);
    // Display
    cout << monthInEnglish << " " << day 
        << " or " << day << " " << monthInSpainish;
}
#include <iostream>
#include <string>

int main(){
    std::string name;
    int age;
    char sex;


    // std::cout << "Enter your name, age, sex. Separated by white space: ";
    // std::cin >> fname >> lname >> age >> sex;
    // name = fname + " " + lname;
    // std::cout << "Name: " << name << ", Age: " << age << ", Sex: " << sex << '\n';  

    std::cout << "Enter your name, age, sex: ";
    std::getline(std::cin, name);
    std::cin >> age >> sex;
    std::cout << "Name: " << name << ", Age: " << age << ", Sex: " << sex << '\n';  
}

// int main(){
//     std::string name;
//     int age;
//     char sex;

//     // std::cout << "Enter your name: ";
//     // std::cin >> name;
//     // std::cout << "Enter your age: ";
//     // std::cin >> age;
//     // std::cout << "Enter your sex: ";
//     // std::cin >> sex;

//     // std::cout << "Enter your name, age, sex. Separated by white space: ";
//     // std::cin >> name;
//     // std::cin >> age;
//     // std::cin >> sex;

//     std::cout << "Enter your name, age, sex. Separated by white space: ";
//     std::cin >> name >> age >> sex;

//     std::cout << "Name: " << name << ", Age: " << age << ", Sex: " << sex << '\n';  
// }
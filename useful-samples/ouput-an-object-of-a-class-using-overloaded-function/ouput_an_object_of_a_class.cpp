/*
    Overloading the operator<< function allows you to define a custom way 
    to output objects of your class to the standard output or any other 
    output stream. Here's an example of how you can overload the operator<< 
    for a simple Person class.
*/

/*
    NOTE:
    In this example:
    The operator<< function is declared as a friend of the Person class, 
    allowing it to access the private members of Person.
    The actual implementation of the operator<< is outside the class definition, 
    and it takes an ostream reference (out) and a const Person& reference (person).
    Inside the operator<< implementation, you can format the output as you desire. 
    In this case, it prints the name and age of the Person object.
    This allows you to use the << operator with objects of your class when 
    outputting them to a stream, such as std::cout.
*/

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Overload the << operator for the Person class
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

    // Other member functions...

    // Getter functions...
};

// Definition of the overloaded << operator
std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Name: " << person.name << ", Age: " << person.age;
    return out;
}

int main() {
    Person person("John Doe", 25);

    // Use the overloaded << operator to display the object
    std::cout << person << std::endl;

    return 0;
}

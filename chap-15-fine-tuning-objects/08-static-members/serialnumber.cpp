// The following program use a non-const static field

#include <iostream>

using std::cout;

class Widget
{
    // All Widget objects share serial_number_source
    static int serial_number_source;
    // Each Widget object is supposed to have its own
    // unique serial_number
    int serial_number;
public:
    // A Widget object's serial_number is initialized from
    // the shared serial_number_source variable which is
    // incremented each time a Widget object is created
    Widget(): serial_number(serial_number_source++) {}
    // Clients can look at the serial number but not touch
    int get_serial_number() const{
        return this->serial_number;
    }
};

// Initialize the inital serial number;
// the first Widget made will have serial number 1
int Widget::serial_number_source = 1;

// Make some widgets and check their serial numbers
int main()
{
    Widget w1, w2, w3, w4;
    cout << "w1 serial number = " << w1.get_serial_number() << '\n';
    cout << "w2 serial number = " << w2.get_serial_number() << '\n';
    cout << "w3 serial number = " << w3.get_serial_number() << '\n';
    cout << "w4 serial number = " << w4.get_serial_number() << '\n';
    // ->
    // w1 serial number = 1
    // w2 serial number = 2
    // w3 serial number = 3
    // w4 serial number = 4
}
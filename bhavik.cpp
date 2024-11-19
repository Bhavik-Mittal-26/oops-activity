#include <iostream>
#include <string>
using namespace std;

class Passenger {
public:
    string name;
    int age;
    string ticketNumber;

 Passenger(string n, int a, string t) : name(n), age(a), ticketNumber(t) {}
    
    void displayDetails() {
        cout << "Passenger Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Ticket Number: " << ticketNumber << endl;
    }
};

int main() {

    Passenger passenger1("bhavik", 20, "126644");

    passenger1.displayDetails();

    return 0;
}


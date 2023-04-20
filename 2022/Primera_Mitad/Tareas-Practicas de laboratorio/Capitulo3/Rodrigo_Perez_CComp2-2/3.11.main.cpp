/* (MotorVehicle class) Create a class called MotorVehicle that represents a motor vehicle
using: make (type string), fuelType (type string), yearOfManufacture (type int), color (type string)
and engineCapacity (type int). Your class should have a constructor that initializes the three
data members. Provide a set and a get function for each data member. Add a member function
called displayCarDetails that displays the five data members in five separate lines in the form
"member name: member value". Write a test program to demonstrate MotorVehicle’s capabilities. */

#include <iostream>
#include "3.11.h"

using namespace std;

int main() {
    MotorVehicle vehicle1{"Honda", "Diesel", 2004, "Red", 1000};

    cout << "Current vehicle details: " << endl;
    vehicle1.displayCarDetails();

    cout << "\n-------------------------------" << endl;
    cout << "Vehicles make is: " << vehicle1.getMake() << endl;
    cout << "Vehicles fuel type is: " << vehicle1.getFuel() << endl;
    cout << "Vehicles year of manufacture is: " << vehicle1.getYear() << endl;
    cout << "Vehicles color is: " << vehicle1.getColor() << endl;
    cout << "Vehicles enginec capacity is: " << vehicle1.getEngine() << endl;

}
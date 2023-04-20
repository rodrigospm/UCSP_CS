/* (MotorVehicle class) Create a class called MotorVehicle that represents a motor vehicle
using: make (type string), fuelType (type string), yearOfManufacture (type int), color (type string)
and engineCapacity (type int). Your class should have a constructor that initializes the three
data members. Provide a set and a get function for each data member. Add a member function
called displayCarDetails that displays the five data members in five separate lines in the form
"member name: member value". Write a test program to demonstrate MotorVehicle’s capabilities. */

#include <string>

class MotorVehicle {
    public:
        MotorVehicle(std::string make, std::string fuelType, int yearOfManufacture, std::string color, int engineCapacity)
        : made{make}, 
        fuel{fuelType},
        year{yearOfManufacture},
        col{color},
        engine{engineCapacity} {}

        void setMake(std::string make) {
            made = make;
        }
        std::string getMake() const {
            return made;
        }

        void setFuel(std::string fuelType) {
            fuel = fuelType;
        }
        std::string getFuel() const {
            return fuel;
        }       

        void setYear(int yearOfManufacture) {
            year = yearOfManufacture;
        }
        int getYear() const {
            return year;
        }     

        void setColor(std::string color) {
            col = color;
        }
        std::string getColor() const {
            return col;
        }        

        void setEngine(int engineCapacity) {
            engine = engineCapacity;
        }
        int getEngine() const {
            return engine;
        }     

        void displayCarDetails() {
            std::cout << "Make: " << made << "\nFuel Type: " << fuel << "\nYear of manufacture: " << year << "\nColor: " << col << "\nEngine Capacity: " << engine;
        }

    private:
        std::string made;
        std::string fuel;
        int year{0};
        std::string col;
        int engine{0};
};
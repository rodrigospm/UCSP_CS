#include "Student.h"

Student::Student(std::string name, int id, int age) {
    this->name = name;
    this->age = age;
    this->id = id;
}

std::ostream& operator<<(std::ostream &output, const Student &p) {
    output << "(" << p.name << ", " << p.age <<  ", " <<  p.id << ")";
    return output;
}
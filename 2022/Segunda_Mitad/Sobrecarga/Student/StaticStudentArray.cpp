#include <iostream>
#include "StaticStudentArray.h"

StaticStudentArray::StaticStudentArray(int size) {
    data = new Student[size];
    this->size = size;
}

StaticStudentArray::StaticStudentArray(const StaticStudentArray &o) {
    size = o.size;
    data = new Student[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void StaticStudentArray::setAt(int index, Student value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

Student StaticStudentArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int StaticStudentArray::getSize() const {
    return size;
}

void StaticStudentArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

StaticStudentArray::~StaticStudentArray() {
    delete [] data;
}

std::ostream& operator<<(std::ostream &output, const StaticStudentArray &p) {
    for(int i = 0; i < p.size; i++)
        output << p.data[i] << " ";
    return output;
}
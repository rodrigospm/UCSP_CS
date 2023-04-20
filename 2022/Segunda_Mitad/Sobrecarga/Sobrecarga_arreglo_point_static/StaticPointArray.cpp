#include <iostream>
#include "StaticPointArray.h"

StaticPointArray::StaticPointArray(int size) {
    data = new Point[size];
    this->size = size;
}

StaticPointArray::StaticPointArray(const StaticPointArray &o) {
    size = o.size;
    data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void StaticPointArray::setAt(int index, Point value) {
    if(index >= 0 && index < size)
        data[index] = value;
}

Point StaticPointArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int StaticPointArray::getSize() const {
    return size;
}

void StaticPointArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

StaticPointArray::~StaticPointArray() {
    delete [] data;
}

std::ostream& operator<<(std::ostream &output, const StaticPointArray &p) {
    for(int i = 0; i < p.size; i++)
        output << p.data[i] << " ";
    return output;
}
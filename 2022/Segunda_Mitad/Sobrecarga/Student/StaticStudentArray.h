#ifndef __STATICPOINTARRAY_H__
#define __STATICPOINTARRAY_H__

#include <iostream>
#include "Student.h"

/**
 * Arreglo de enteros estático representado en una clase
*/
class StaticStudentArray {
        int size;
        Student *data;    
        friend std::ostream& operator<< (std::ostream &output, const StaticStudentArray &p);    
    public:
        StaticStudentArray(int size);
        StaticStudentArray(const StaticStudentArray &o);

        void setAt(int index, Student value);
        Student getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~StaticStudentArray();
};


#endif
#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <iostream>
#include <string>

class Student {
    public:
        Student(std::string name ="", int id = 0, int age = 0);
    private:
        std::string name;        
        int id;
        int age;
        friend std::ostream& operator<<(std::ostream &output, const Student &p) ;
};


#endif
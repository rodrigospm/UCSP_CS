#include <iostream>
#include "StaticStudentArray.h"

using namespace std;

int main() {

    StaticStudentArray a(3);    

    Student s1("Juan Diego", 124535, 18);
    Student s2("Paolo", 321654, 18);
    Student s3("Nicolas", 897654, 19);

    a.setAt(0, s1);
    a.setAt(1, s2);
    a.setAt(2, s3);

    a.print();

    cout << a << endl;

    /*if(true) {
        IntArray b = a;
    }*/
 
    return 0;
}

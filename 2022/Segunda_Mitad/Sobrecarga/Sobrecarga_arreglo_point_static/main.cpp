#include <iostream>
#include "StaticPointArray.h"

using namespace std;

int main() {

    StaticPointArray a(2);    

    a.setAt(0, 34);
    a.setAt(1, 35);

    a.print();

    cout << a << endl;

    /*if(true) {
        IntArray b = a;
    }*/
 
    return 0;
}

#include <iostream>
#include "point.h"

using namespace std;

void printArray(const Point *array, int tam) {
    cout << "[";
    for(int i = 0; i < tam; i++, array++) {
        array->print();
    }
    cout << "]" << endl;
}

void printArrayRec(const Point *array, int tam) {
    if (tam <= 0) {
        return;
    }
    else {
        array->print();
        printArrayRec(++array, --tam);
    }
}

int main() {
    Point p1;
    Point p2(12, 5);
    Point p3(3, 4);
    Point p4(7, 1);
    Point p5(13, 2);

    Point *arreglo = new Point[5]; // arreglo[] = {p1, p2, p3, p4, p5}; //unico error
    // int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    // Point *ptr = arreglo;
    arreglo[0] = p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;

    
    /*
    for(int i = 0; i < tam; i++, ptr++) {
        ptr->print();
    }
    */
    
    arreglo->print();
    // ptr->print();
    cout << "\n-\n";
    printArray(arreglo, 5);

    /*
    if (true) {
        Point p2(3, 5);
        p2.print();
    }
    
    Point *ptr = new Point(4, 5);

    p1.print();
    ptr->print();

    delete ptr;
    */
    
    /*
    // Creando un puntero de tipo Point "ptr"
    Point *ptr;

    // Haciendo que el puntero ´ptr´ apunte al objeto ´p´
    ptr = &p;

    ptr->print();
    */
    delete[] arreglo;
    return 0;
}
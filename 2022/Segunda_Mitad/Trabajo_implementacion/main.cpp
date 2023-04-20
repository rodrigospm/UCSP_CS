#include <iostream>
#include "DynamicIntArray.h"
#include "StaticPointArray.h"
#include "DynamicPointArray.h"

using namespace std;

int main() {
    // IMPLEMENTACION DE FUNCION REMOVE DE LA CLASE DYNAMICINTARRAY
    
    int arreglo[] = {1, 3, 5, 7};
    
    DynamicIntArray da(arreglo, 4);
    cout << da.getSize() << endl;
    da.print();
    da.push_back(9);
    da.print();
    da.insert(2, 1);
    da.print();
    da.remove(1); // REMOVE
    da.print();

    // IMPLEMENTACION DE CLASES POINT, STATICPOINTARRAY, DYNAMICPOINTARRAY
    // STATICPOINTARRAY
    StaticPointArray stpa(3);
    stpa.setAt(0, Point(1, 2));
    stpa.setAt(1, Point(3, 3));
    stpa.setAt(2, Point(5, 4));
    stpa.print();

    // DYNAMICPOINTARRAY
    Point arregloPoint[] = {Point(1, 2), Point(3, 3), Point(5, 4), Point(7, 1)};
    
    DynamicPointArray dpa(arregloPoint, 4);
    dpa.print();
    dpa.push_back(Point (1, 1));
    dpa.print();
    dpa.insert(Point(10, 10), 1);
    dpa.print();
    dpa.remove(1); // REMOVE
    dpa.print();
    return 0;

}
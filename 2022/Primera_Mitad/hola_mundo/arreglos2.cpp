#include <iostream>
#include "Point.h"

using namespace std;

void intercambio(Point &a, Point &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void bsort(Point array[], int tam) {
    for (int i = 0; i < tam; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(array[i].getX() > array[j].getX())
            intercambio(array[i], array[j]);
        }
    }
}

void printArray(const Point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++) {
        array[i].print();
    }
    cout << "]" << endl;
}

int main() {
    Point p1(0, 0);
    Point p2(4, 5);
    Point p3(6, 5);
    Point p4(4, 8);
    Point p5(14, 15);

    Point arr[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, tam);
        
    return 0;
}
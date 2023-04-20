#include <iostream>
using namespace std;
#include "point.h"

int suma (int a, int b) {
    return a + b;
}

void imprimir(int a) {
    cout << "El entero es: " << a << endl;
}

void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() <<")" << endl;
}

void modificarPoint(int _x, int _y, Point &p) {
    p.setX(_x);
    p.setY(_y);    
}

void intercambio(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
    intercambio(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int result = suma(5, 6);
    cout << suma(5, 6) << endl;
    imprimir(5);

    Point p1(5, 5);
    imprimirPoint(p1);

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;

    modificarPoint(7, 7, p1);
    imprimirPoint(p1);
    return 0;
}
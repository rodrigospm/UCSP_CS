/* 
Punteros: 

Es una variable que contiene/almacena direcciones de memoria.

Como declarar un puntero:
< tipo*nombrePuntero >
< int* ptr, contador; > // Asterisco no es un operador, solo es la forma de declarar un puntero (Solo se esta declarando un puntero)

< nullptr > // Apunta a nada, puntero nulo

Operador &:

Es una operador de direccion, solo actua con una variable, es un operador unario que obtiene la direccion de memoria de su operando

int y(5); // Declara la variable y
int* yPtr(nullptr); // Declara el variable de tipp puntero a entero yPtr

yPtr = &y; // Asigna la direccion de memoria de y a yPtr
*/

#include <iostream>
using namespace std;

int main() {

    int y(100);
    int yRef(y); // Se esta declarando la referencia a entero yRef, yRef hace referencia a y
    int* yPtr(nullptr); // Se esta declarando el puntero a entero yPtr
    yPtr = &y;
    cout << yPtr << endl; // Imprime la direccion de memoria de y
    cout << &y << endl;  // Imprime lo mismo por el ampersan

    cout << *yPtr << endl;
    *yPtr = 1000;
    cout << y << endl;

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;

    int a(7);
    int* aPtr = &a;

    cout << "La direccion de la varibale a es " << &a << "\nEl valor de aPtr es " << aPtr;
    cout << "\nEl valor de a es " << a << "\nEl valor de *aPtr es" << *aPtr << endl;

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << endl;

    yRef = 200;
    yPtr = &y;
    // *yPtr = &y // Esto esta mal
    int *ptr(nullptr);
    *yPtr = 100;

    cout << *yPtr << endl;


    return 0;
}

/* 
El operando del operador de direccion DEBE SER UN lvalue
lvalue se refiere a una posicion de memoria que identifica un objeto

Operador de indireccion:

El operador * es un operador unario conocido como operador de indireccion o operador de dereferencia
Al hacer *yPtr da el valor de y = 5
*/
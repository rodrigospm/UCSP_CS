#include <iostream>
#include "pila.h"

using namespace std;

void Pila::Push(int v) {
    if (!top) {
        top = inicio;
        *top = v;
    }
    else {
        if (top < fin) {
            top++;
            *top = v;
        }
        else {
            cout << "Pila llena" << endl;
        }
    }
}

int Pila::Pop() {
    int tmp = 0;
    if (top) {
        tmp = *top;
        top--;
        if (top < inicio) {
            top = nullptr;
        }
    }
    else {
        cout << "Pila vacia" << endl;
    }
    return tmp;
}

int main() {
    Pila pila;
    pila.Push(3);
    pila.Push(5);
    cout << pila.Pop();
}
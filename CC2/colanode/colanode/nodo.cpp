#include <iostream>
#include "nodo.h"
#include "cola.h"
using namespace std;

// Parametros nodo

template<class T>
Nodo<T>::Nodo(T val) {
    next = NULL;
    valor = val;
}

// Establece el puntero al nodo siguiente
template<class T>
void Nodo<T>::setNext(Nodo<T>* nxt) {
    next = nxt;
}

template<class T>
void Nodo<T>::setValor(T val) {
    valor = val;
}

// Se obtiene el puntero al siguiente
template<class T>
Nodo<T>* Nodo<T>::getNext() {
    return next;
}

// Se obtiene el contenido del nodo
template<class T>
T Nodo<T>::getValor() {
    return valor;
}

/* -+-+-+-+-+-+-+-+- */


template<class T>
void Cola<T>::Push(T x) {
    Nodo<T>* tailNext;
    tailNext = new Nodo<T>(x);
    tailNext->setValor(x);
    tailNext->setNext(NULL);
    if (Vacia()) {
        head = tailNext;
        tail = tailNext;
    }
    else {
        tail->setNext(tailNext);
        tail = tailNext;
    }
}

template<class T>
int Cola<T>::Pop() {
    if (!Vacia()) {
        T content = head->getValor();
        Nodo<T>* tmp = head;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        }
        else {
            head = head->getNext();
        }
        delete tmp;
        return content;
    }
    else
        return -1;
}

template<class T>
void Cola<T>::Print() {
    Nodo<T>* tmpi = head;
    cout << "Lista:" << endl;
    while (tmpi != NULL) {
        cout << tmpi->getValor() << endl;
        tmpi = tmpi->getNext();
    }
    cout << endl;
}

template<class T>
bool Cola<T>::Vacia() {
    if (head == NULL)
        return true;
    else
        return false;
}

template<class T>
Cola<T>::~Cola() {
    Nodo<T>* tmp = head;
    Nodo<T>* del;
    while (tmp != NULL) {
        del = tmp;
        tmp = tmp->getNext();
        delete del;
    }
}

int main() {
    Cola<int> cola;
    cola.Push(1);
    cola.Push(2);
    cola.Push(3);
    cola.Print();
    cout << "Pop elemento: " << cola.Pop() << "\n" << endl;
    cola.Print();
    cola.Push(4);
    cola.Print();
    cout << "Pop elemento: " << cola.Pop() << "\n" << endl;
    cola.Print();
    return 0;
}
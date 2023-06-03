/*
#include <iostream>
#include "cola.h"
using namespace std;

template<class T>
void Cola<T>::Push(T x) {
    Nodo<T>* nuevo;
    nuevo = new Nodo<T>(x);
    nuevo->setValor(x);
    nuevo->setNext(NULL);
    if (Vacia()) {
        head = nuevo;
        tail = nuevo;
    }
    else {
        tail->setNext(nuevo);
        tail = nuevo;
    }
}

template<class T>
int Cola<T>::Pop() {
    if (!Vacia()) {
        T content = head->getValor();
        Nodo<T>* bor = head;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        }
        else {
            head = head->getNext();
        }
        delete bor;
        return content;
    }
    else
        return -1;
}

template<class T>
void Cola<T>::Print() {
    Nodo<T>* aux = head;
    cout << "Lista:" << endl;
    while (aux != NULL) {
        cout << aux->getValor() << endl;
        aux = aux->getNext();
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
    Nodo<T>* bor;
    while (tmp != NULL) {
        bor = tmp;
        tmp = tmp->getNext();
        delete bor;
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
*/
#ifndef __NODO_H__
#define __NODO_H__
#include <iostream>

template <class T>
struct Nodo {
	T valor;
	Nodo <T>* next; 
    // Nodo <T>* prev;

public:
    Nodo(T);
    void setNext(Nodo<T>*);
    void setValor(T);
    Nodo<T>* getNext();
    T getValor();
};

#endif
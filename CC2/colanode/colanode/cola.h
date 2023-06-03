#ifndef __COLA_H__
#define __COLA_H__
#include <iostream>
#include "nodo.h"

template<class T>
class Cola {
    Nodo<T>* head = NULL;
    Nodo<T>* tail = NULL;

public:
    void Push(T);
    int Pop(); // bool
    void Print();
    bool Vacia();
    ~Cola();
};

#endif
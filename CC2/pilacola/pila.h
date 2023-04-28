#pragma once
#ifndef __PILA_H__
#define __PILA_H__

#include <iostream>

class Pila {
    int A[10];
    int* inicio = A, * fin = A + 9, * top = nullptr;

public:
    void Push(int v);
    int Pop();
};

#endif
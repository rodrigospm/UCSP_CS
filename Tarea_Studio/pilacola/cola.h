#pragma once
#ifndef __COLA_H__
#define __COLA_H__

#include <iostream>

class Cola {
    int A[10];
    int* inicio = A, * fin = A + 9, * head = nullptr, * tail = nullptr;

public:
    void Push(int v);
    int Pop();
};

#endif
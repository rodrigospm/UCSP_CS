#include <iostream>
#include "cola.h"

using namespace std;

void Cola::Push(int v) {
    if (!head) {
        head = inicio;
        tail = inicio;
        *tail = v;
    }
    else {
        if (tail < fin) {
            tail++;
            *tail = v;
        }
        else {
            cout << "Cola llena" << endl;
        }
    }
}

/*
head = inicio;
tail = head;
    tail++;
*/
int Cola::Pop() {
    int tmp = 0;
    if (head) {
        tmp = *head;
        head++;
        if (head > tail) {
            head = nullptr;
            tail = nullptr;
        }
    }
    else {
        cout << "Cola vacia" << endl;
    }
    return tmp;
}

int main() {
    Cola cola;
    /*
    cola.Push(1);
    cola.Push(2);
    cola.Push(3);
    cola.Push(4);
    cola.Push(5);
    cola.Push(6);
    cola.Push(7);
    cola.Push(8);
    cola.Push(9);
    cola.Push(10);
    cola.Push(11);
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    cout << cola.Pop() << " ";
    */
    for (int i = 1; i < 15; i++) {
        cola.Push(i); // 4 cola llena
    }
    cout << "\n";
    for (int i = 1; i < 15; i++) {
        cola.Pop(); // 4 cola vacia
    }
    cout << "\n";
    for (int i = 1; i < 8; i++) {
        cola.Push(i);
    }
    for (int i = 1; i < 4; i++) {
        cola.Pop();
    }
    for (int i = 1; i < 11; i++) {
        cola.Push(i); // 6 cola llena
    }
    cout << "\n";
    for (int i = 1; i < 13; i++) {
        cola.Pop(); // 2 cola vacia
    }
}
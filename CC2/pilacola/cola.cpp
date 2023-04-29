#include <iostream>
#include "cola.h"
using namespace std;

void Cola::Push(int v) {
    if (!head) { // Cuando la cola esta vacia, head y tail nulos
        head = inicio;
        tail = inicio;
        *tail = v;
    }
    else {
        if (tail < fin) {
            tail++;
            if (tail == head) {
                cout << "Cola llena" << endl;
                tail--;
            }
            else {
                *tail = v;
            }
        }
        else {
            if (head != inicio) {
                tail = inicio; // Mandar al comienzo del array
                *tail = v;
            }
            else {
                cout << "Cola llena" << endl;
            }
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
    // cout << head << " " << tail << " ";
    if (head) { // Si hay algo, que no sea nulo, entra al if
        tmp = *head;
        if (head == tail) {
            head = nullptr;
            tail = nullptr;
        }
        else {
            head++;
            if (head > fin) {
                head = inicio;
            }
        }
    }
    else { // Si es nulo cola vacia
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
    cout << "\n";
    for (int i = 1; i < 15; i++) {
        cola.Push(i); // 4 cola llena
    }
    cout << "\n";
    for (int i = 1; i < 15; i++) {
        cola.Pop(); // 4 cola vacia
        // cout << cola.Pop() << " - "; // 4 cola vacia
    }
    cout << "\n";
    for (int i = 1; i < 8; i++) {
        cola.Push(i);
    }
    cout << "\n";
    for (int i = 1; i < 4; i++) {
        cola.Pop();
        // cout << cola.Pop() << " - ";
    }
    cout << "\n";
    for (int i = 1; i < 11; i++) {
        cola.Push(i); // 4 cola llena
    }
    cout << "\n";
    for (int i = 1; i < 13; i++) {
        cola.Pop(); // 2 cola vacia
        // cout << cola.Pop() << " - "; // 2 cola vacia
    }
}
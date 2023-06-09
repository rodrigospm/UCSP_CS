#include <iostream>
using namespace std;

template <typename T>
struct Nodo {
    T valor;
    Nodo<T>* next;
    Nodo(T v, Nodo<T>* n) {
        valor = v;
        next = n;
    }
};

template<class T>
struct LEC {
    Nodo<T>* head = NULL;
    Nodo<T>* tail = NULL;
    bool find(T v, Nodo<T>*& pos) {
        for (Nodo<T>* p = head; p && p->valor <= v; pos = p, p = p->next) {
            if (p->valor == v)
                return 1;
            if (p == tail) {
                pos = p;
                break;
            }
        }
        return 0;
    }

    void print() {
        cout << "H -> ";
        for (Nodo<T>* p = head; p; p = p->next) {
            cout << p->valor << " -> ";
            if (p == tail) {
                 cout << p->next->valor;
                break;
            }
        }
        cout << endl;
    }

    void insert(T v) {
        Nodo<T>* pos = 0;
        if (!find(v, pos)) {
            if (pos) {
                if (pos == tail) {
                    tail->next = new Nodo<T>(v, tail->next);
                    tail = tail->next;
                }
                else
                    pos->next = new Nodo<T>(v, pos->next);
            }
            else {
                head = new Nodo<T>(v, head);
                if (!head->next) {
                    head->next = head;
                    tail = head;
                }
                else
                    tail->next = head;
            }
        }
    }

    bool del(T v) {
        Nodo<T>* pos = 0;
        bool res = find(v, pos);
        if (res) {
            if (pos) {
                if (pos->next == tail) {
                    Nodo<T>* tmp = pos->next;
                    pos->next = tmp->next;
                    tail = pos;
                    delete tmp;
                }
                else {
                    Nodo<T>* tmp = pos->next;
                    pos->next = tmp->next;
                    delete tmp;
                }
            }
            else {
                if (head == tail) {
                    delete head;
                    head = 0, tail = 0;
                }
                else {
                    Nodo<T>* tmp = head;
                    head = tmp->next;
                    tail->next = head;
                    delete tmp;
                }
            }
        }
        return res;
    }
};


int main() {
    LEC<int> l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);

    l1.print();

    l1.del(1);
    l1.del(3);
    l1.del(4);
    
    l1.print();

    l1.insert(7);
    l1.insert(8);

    l1.print();

    return 0;
}
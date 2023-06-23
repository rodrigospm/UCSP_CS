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
struct LE {
    Nodo<T>* head = NULL;

    bool find(T v, Nodo<T>*& pos) {
        for (Nodo<T>* p = head; p && p->valor <= v; pos = p, p = p->next) {
            if (p->valor == v) {
                return 1;
            }
        }
        return 0;
    }

    void print() {
        cout << "H -> ";
        for (Nodo<T>* p = head; p; p = p->next)
            cout << p->valor << " -> ";
        cout << "X" << endl;
    }
    void insert(T v) {
        Nodo<T>* pos = 0;
        if (!find(v, pos)) {
            if (pos)
                pos->next = new Nodo<T>(v, pos->next);
            else
                head = new Nodo<T>(v, head);
        }
    }
    bool del(T v) {
        Nodo<T>* pos = 0;
        bool res = find(v, pos);
        if (res) {
            if (pos) {
                Nodo<T>* tmp = pos->next;
                pos->next = tmp->next;
                delete tmp;
            }
            else {
                Nodo<T>* tmp = head;
                head = tmp->next;
                delete tmp;
            }
        }
        return res;
    }
};

template <class T>
void merge(Nodo<T>*& H1, Nodo<T>*& H2) {
    Nodo<T>* h1 = H1, * h2 = H2;
    if (h1->valor <= h2->valor) {
        while (h2) {
            if (h1->next == 0 || h2->valor < h1->next->valor) {
                Nodo<T>* tmp = h2->next;
                h2->next = h1->next;
                h1->next = h2;
                h2 = tmp;
                h1 = h1->next;
            }
            else {
                h1 = h1->next;
            }
        }
        H2 = h2;
    }
    else {
        while (h1) {
            if (h2->next == 0 || h1->valor < h2->next->valor) {
                Nodo<T>* tmp = h1->next;
                h1->next = h2->next;
                h2->next = h1;
                h1 = tmp;
                h2 = h2->next;
            }
            else {
                h2 = h2->next;
            }
        }
        H1 = h1;
    }
}

int main()
{
    LE<int> l1, l2;

    l1.insert(1);
    l1.insert(3);

    l2.insert(2);
    l2.insert(4);

    l1.print();
    l2.print(); // vacio 

    merge(l1.head, l2.head);

    l1.print();
    l2.print();

    l1.insert(5);
    l1.insert(7);

    l2.insert(6);
    l2.insert(8);

    l1.print();
    l2.print();

    merge(l2.head, l1.head);

    l1.print();
    l2.print();

/*
    LE<int> l3, l4;
    l4.insert(1);
    l4.insert(5);
    l4.insert(6);
    l3.insert(2);
    l3.insert(3);
    l3.insert(7);

    l3.print();
    l4.print();

    merge(l3.head, l4.head);

    l3.print();
    l4.print();

*/
    return 0;
}

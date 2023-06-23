#include <iostream>
using namespace std;

template<class T>
class Nodo {
    T valor;
    Nodo<T>* next;
public:
    Nodo(T);
    void setNext(Nodo<T>*);
    void setValor(T);
    Nodo<T>* getNext();
    T getValor();
}; 

template<class T>
Nodo<T>::Nodo(T v) {
    next = NULL;
    valor = v;
}

template<class T>
void Nodo<T>::setNext(Nodo<T>* nxt) {
    next = nxt;
}

template<class T>
void Nodo<T>::setValor(T v) {
    valor = v;
}

template<class T>
Nodo<T>* Nodo<T>::getNext() {
    return next;
}

template<class T>
T Nodo<T>::getValor() {
    return valor;
}

// -+-+-+-+-+-+-+-+-+- // 

template<class T>
class LE{
    Nodo<T>* head;
    int tam;
public:
    LE();//constructor
    ~LE();//destructor

    void push_front(T);//para poner un elemento delante de toda la lista
    void push_back(T);//para poner un elemto al final de la lista
    void add(T, int);//para añadir un elemento de tipo T en alguna posicion

    T get_front();//para obtener el primer elemento
    T get_back();//para obtener el ultimo elemento
    T get(int);//para obtener un dato de la posicion en la que se desea

    void eliminar_front();//para eliminar el primer elemento
    void eliminar_back();//para eliminar el ultimo elemento
    void eliminar(int);//para eliminar cualquier elemento

    int getSize() { //para obtener el tamanio
        return tam;
    }

    void mostrar();//para mostrar la lista
};


template<class T>
LE<T>::LE() {
    head = NULL;
    tam = 0;
}

template<class T>
void LE<T>::push_back(T dato) {
    Nodo<T>* aux = new Nodo<T>(dato);

    if (head == NULL)
        head = aux;

    else {
        Nodo<T>* ptr = head;
        while (ptr->getNext() != NULL)
            ptr = ptr->getNext();
        ptr->setNext(aux);
    }
    tam++;
}

template<class T>
void LE<T>::push_front(T dato) {
    Nodo<T>* aux = new Nodo<T>(dato);
    aux->setNext(head);
    head = aux;
    tam++;
}

template<class T>
void LE<T>::add(T dato, int n) {
    Nodo<T>* aux = new Nodo<T>(dato);
    if (n > tam)
        cout << "introduzca un numero menor al tamaño de la lista";
    else if (n == 0) {
        aux->setNext(head);
        head = aux;
    }
    if (head == NULL)
        head = aux;
    else {
        int cont = 0;
        Nodo<T>* puntero = head;
        while (cont < (n - 1)) {
            puntero = head->getNext();
            cont++;
        }
        aux->setNext(puntero->getNext());
        puntero->setNext(aux);
    }
    tam++;
}

template<class T>
T LE<T>::get_front() {
    if (tam == 0)
        return NULL;
    return (head->getValor());
}

template<class T>
T LE<T>::get_back() {
    if (tam == 0)
        return NULL;
    Nodo<T>* ptr = head;
    while (ptr->getNext() != NULL)
        ptr = ptr->getNext();
    return (ptr->getValor());

}

template<class T>
T LE<T>::get(int n) {
    if (n >= tam)
        return NULL;
    Nodo<T> ptr = head;
    int cont = 0;
    while (cont < n)
        ptr = ptr->getNext();
    return (ptr->getValor());
}

template<class T>
void LE<T>::eliminar_front() {
    if (tam == 0) return;
    Nodo<T>* elimnado = head;
    head = head->getNext();
    delete elimnado;
    tam--;
}


template<class T>
void LE<T>::eliminar_back() {
    if (tam == 0)
        return;
    if (tam == 1)
        eliminar_front();
    else {
        Nodo<T>* ptr = head;
        while (ptr->getNext()->getNext() != NULL)
            ptr = ptr->getNext();
        Nodo<T>* eliminado = ptr->getNext();
        ptr->setNext(NULL);
        delete eliminado;
        tam--;
    }
}

template <class T>
void LE<T>::eliminar(int n) {
    if (n >= tam)
        return;
    if (n == 0)
        eliminar_front();
    else {
        Nodo<T>* ptr = head;
        int cont = 0;
        while (cont < (n - 1)) {
            ptr = ptr->getNext();
            cont++;
        }
        Nodo<T>* eliminado = ptr->getNext();
        ptr->setNext(eliminado->getNext());
        delete eliminado;
        tam--;
    }
}

template<class T>
void LE<T>::mostrar() {
    Nodo<T>* ptr = head;
    for (int i = 0; i < tam; i++) {
        cout << ptr->getValor() << " ";
        ptr = ptr->getNext();
    }
    cout << endl;
}

template<class T>
LE<T>::~LE() {
    for (int i = 0; i < tam; i++) {
        Nodo<T>* lista = head;
        head = head->getNext();
        delete lista;
    }
}

int main() {
    LE<int> l1;
    l1.push_back(0);
    l1.push_back(5);
    l1.push_front(78);
    l1.push_back(56);
    cout << "LISTA :";
    l1.mostrar();
    cout << "PRIMER NUMERO: " << l1.get_front() << endl;
    cout << "ULTIMO NUMERO: " << l1.get_back() << endl;
    cout << "LISTA :";
    l1.mostrar();
    l1.eliminar_front();
    l1.eliminar_back();
    cout << "LISTA :";
    l1.mostrar();
    l1.add(7, 1);
    cout << "LISTA :";
    l1.mostrar();
    l1.eliminar(2);
    cout << "LISTA :";
    l1.mostrar();
    return 0;
}

// Lista enlazada circular
// Mezcla de listas enlazadas (Crear LE y hacer una funcion que los head mezcle las listas)
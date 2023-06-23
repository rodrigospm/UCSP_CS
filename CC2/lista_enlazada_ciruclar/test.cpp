/*
#include <iostream>

template <class T>
struct Nodo {
    T data;
    struct Nodo<T>* next;
};

template <class T> // Insertar nodo en una lista vacia
struct Nodo<T>* insertInEmpty(struct Nodo<T>* last, T new_data) {
    if (last != nullptr) // Si last no es nulo entonces retornar
        return last;

    struct Nodo<T>* tmp = new Nodo<T>; // Asignar memoria para nodo

    tmp->data = new_data; // Asignar data
    last = tmp;

    last->next = last; // Crear enlace

    return last;
}

template <class T> // Insertar nuevo nodo al inicio de la lista
struct Nodo<T>* insertAtBegin(struct Nodo<T>* last, T new_data) {
    if (last == nullptr) // Si lista esta vacia entcns añadir el nodo al llamar insertInEmpty
        return insertInEmpty(last, new_data);

    struct Nodo<T>* tmp = new Nodo<T>; // Sino crear un nuevo nodo

    tmp->data = new_data; // Setear nueva data a nodo
    tmp->next = last->next;
    last->next = tmp;

    return last;
}

template <class T> // Insertar nuevo nodo al final de la lista
struct Nodo<T>* insertAtEnd(struct Nodo<T>* last, T new_data) {
    if (last == nullptr) // Si lista esta vacia entcns añadir el nodo al llamar insertInEmpty
        return insertInEmpty(last, new_data);

    struct Nodo<T>* tmp = new Nodo<T>; // Sino crear un nuevo nodo

    tmp->data = new_data; // Asignar data al nuevo nodo
    tmp->next = last->next;
    last->next = tmp;
    last = tmp;

    return last;
}

template <class T> // Insertar nuevo nodo entre los nodos
struct Nodo<T>* insertAfter(struct Nodo<T>* last, T new_data, T after_item) {
    if (last == nullptr)
        return nullptr; // Retornar null si lista esta vacia

    struct Nodo<T>* tmp, * p;
    p = last->next;
    do {
        if (p->data == after_item) {
            tmp = new Nodo<T>;
            tmp->data = new_data;
            tmp->next = p->next;
            p->next = tmp;

            if (p == last)
                last = tmp;
            return last;
        }
        p = p->next;
    } while (p != last->next);

    std::cout << "El nodo con la data " << after_item << " no esta presente en la lista" << std::endl;
    return last;
}

template <class T> // Imprimir la lista enlazada circular
void printLEC(struct Nodo<T>* last) {
    struct Nodo<T>* p;

    if (last == nullptr) { // Si lista esta vacia retornar "esta vacia"
        std::cout << "LEC esta vacia." << std::endl;
        return;
    }
    p = last->next; // Apuntar al primer nodo de la lista

    // Atravesar la lista empezando desde el primer nodo hasta q el primer nodo se visite de nuevo
    do {
        std::cout << p->data << " -> ";
        p = p->next;
    } while (p != last->next);
    if (p == last->next)
        std::cout << p->data;
    std::cout << "\n\n";
}

/*
template <class T>
void deleteNode(Nodo<T>** head, T key) {
    if (*head == nullptr)
        return;

    if ((*head)->data == key && (*head)->next == *head) {
        delete *head;
        *head = nullptr;
    }

    Nodo<T>* last = *head;
    Nodo<T>* d;

    if ((*head)->data == key) {
        while (last->next != *head)
            last = last->next;

        last->next = (*head)->next;
        delete *head;
        *head = last->next;
    }

    while (last->next != *head && last->next->data != key) {
        last = last->next;
    }

    if (last->next->data == key) {
        d = last->next;
        last->next = d->next;
        std::cout << "El nodo con la data " << key << " borrado de la lista" << std::endl;
        delete d;
        std::cout << std::endl;
        std::cout << "La LEC despues de borrar el elemento " << key << " se ve:" << std::endl;
        printLEC(last);
    }
    else {
        std::cout << "El nodo con la data" << key << " no encontrado" << std::endl;
    }
}
*/
/*
int main() {
    struct Nodo<int>* last = nullptr;

    last = insertInEmpty(last, 3);
    last = insertAtBegin(last, 2);
    last = insertAtBegin(last, 1);
    last = insertAtEnd(last, 4);
    last = insertAtEnd(last, 6);
    last = insertAfter(last, 5, 4);
    std::cout << "Lista enlazada circular:" << std::endl;
    printLEC(last);
    // deleteNode(&last, 10);
    return 0;
}
*/

/*
    ~LEC() {
        while (head) {
            if (head == tail) {
                delete head;
                head = 0, tail = 0;
            }
            else {
                Nodo<T>* tmp = head;
                head = tmp->next;
                delete tmp;
            }
        }
    }
 */
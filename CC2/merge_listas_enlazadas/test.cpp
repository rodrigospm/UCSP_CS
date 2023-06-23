/*
#include <iostream>

template <typename T>
struct Nodo {
    T data;
    Nodo* next;

    Nodo(T value) : data(value), next(nullptr) {}
};

template <typename T>
Nodo<T>* merge(Nodo<T>* list1, Nodo<T>* list2) {
    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;

    Nodo<T>* result = nullptr;

    if (list1->data <= list2->data) {
        result = list1;
        result->next = merge(list1->next, list2);
    }
    else {
        result = list2;
        result->next = merge(list1, list2->next);
    }

    return result;
}

/* El puntero slow avanza de un nodo a la vez,
mientras que el puntero fast avanza dos nodos a la vez.
Esto permite que slow alcance el punto medio de la lista cuando fast llega al final.
De esta manera, se divide la lista original en dos partes más pequeñas.
En resumen, slow y fast son punteros que se utilizan para dividir la lista enlazada
en dos mitades aproximadamente iguales durante el proceso de Merge Sort.
*/
/*
template <typename T>
Nodo<T>* mergeSort(Nodo<T>* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    Nodo<T>* slow = head;
    Nodo<T>* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Nodo<T>* secondHalf = slow->next;
    slow->next = nullptr;

    Nodo<T>* sortedList1 = mergeSort(head);
    Nodo<T>* sortedList2 = mergeSort(secondHalf);

    return merge(sortedList1, sortedList2);
}

template <typename T>
void printList(Nodo<T>* head) {
    Nodo<T>* tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Crear y mostrar la primera lista enlazada: 1 -> 3 -> 5 -> 7
    Nodo<int>* list1 = new Nodo<int>(1);
    list1->next = new Nodo<int>(3);
    list1->next->next = new Nodo<int>(5);
    list1->next->next->next = new Nodo<int>(7);
    std::cout << "Lista 1: ";
    printList(list1);

    // Crear y mostrar la segunda lista enlazada: 2 -> 4 -> 6
    Nodo<int>* list2 = new Nodo<int>(2);
    list2->next = new Nodo<int>(4);
    list2->next->next = new Nodo<int>(6);
    std::cout << "Lista 2: ";
    printList(list2);

    // Unir y ordenar las dos listas
    Nodo<int>* mergedList = mergeSort(list1);
    mergedList = merge(mergedList, mergeSort(list2));

    // Mostrar la lista enlazada resultante: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
    std::cout << "Lista unida: ";
    printList(mergedList);

    // Liberar memoria
    Nodo<int>* tmp = mergedList;
    while (tmp != nullptr) {
        Nodo<int>* temp = tmp;
        tmp = tmp->next;
        delete temp;
    }

    return 0;
}
*/
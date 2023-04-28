#include <iostream>
using namespace std;
/*
void merge(int* arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // int L[n1], R[n2];
    int* L = new int[n1];
    int* R = new int[n2];


    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void mergesort(int* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        // for (int i = 0; i < 10; i++){
        //     cout<< arr[i] << ' ';
        // }
        // cout<<endl;

        merge(arr, left, mid, right);
    }
}

void mergePointer(int* left, int* mid, int* right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // int L[n1], R[n2];
    int* L = new int[n1];
    int* R = new int[n2];

    int* p = left;
    for (int i = 0; i < n1; i++) {
        *(L + i) = *p;
        p++;
    }

    p = mid + 1;
    for (int j = 0; j < n2; j++) {
        *(R + j) = *p;
        p++;
    }

    int* i = L;
    int* j = R;
    p = left;
    while (i < L + n1 && j < R + n2) {
        if (*i <= *j) {
            *p = *i;
            i++;
        }
        else {
            *p = *j;
            j++;
        }
        p++;
    }

    while (i < L + n1) {
        *p = *i;
        i++;
        p++;
    }

    while (j < R + n2) {
        *p = *j;
        j++;
        p++;
    }
    delete[] L;
    delete[] R;
}

void mergesortPointer(int* left, int* right) {
    if (left < right) {
        int* mid = left + (right - left) / 2;

        mergesortPointer(left, mid);
        mergesortPointer(mid + 1, right);
        for (int i = 0; i < 10; i++) {
            cout << left[i] << ' ';
        }
        cout << endl;

        mergePointer(left, mid, right);
    }
}
*/

void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void sort(int arr[], int size) {
    int* p = &arr[0];
    int* q = &arr[size / 2];
    int tmp;
    cout << "p: " << *p << " \n";
    cout << "q: " << *q << " \n";
    for (int i = 0; i < size - 1; i++) {
        if (*p < *q) {
            p++;
        }
        else {
            for (int* r = p; r < q; r++) {
                // cout << "r: " << r << " \n";
                tmp = *r;
                *r = *q;
                *q = tmp;
                // printArr(arr, size);
            }
            p++;
            q++;
        }
    }
    printArr(arr, size);
}

int main() {
    int A[] = { 4, 6, 10, 22, 34, 1, 3, 11, 21, 23 };
    int n = sizeof(A) / sizeof(A[0]);

    sort(A, n);

    return 0;
}
    /*
    mergesortPointer(A, A + sizeof(A) / sizeof(int) - 1);
    // mergesort(A, 0, sizeof(A)/sizeof(int) - 1);

    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
    */

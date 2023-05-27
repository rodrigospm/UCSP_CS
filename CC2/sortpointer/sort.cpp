#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
/*
void sort(int* p, int* q) {
    int tmp;
    int* fin = (q - p) + q;

    while ((p < q) && (q < fin)) {
        if (*p < *q) {
            p++;
        }
        else {
            for (int* r = p; r < q; r++) {
                tmp = *r;
                *r = *q;
                *q = tmp;
            }
            p++;
            q++;
        }
    }
}
*/

void sort(int* p, int* q) {
    int tmp;
    int* fin = p + (q - p);
    while ((p < q) && (q < fin)) {
        if (*p < *q) {
            p++;
        }
        else {
            for (int* r = p; r < q; r++) {
                tmp = *r;
                *r = *q;
                *q = tmp;
            }
            p++;
            q++;
        }
    }
}

int main() {
    int A[] = { 4, 6, 10, 22, 24, 34, 1, 3, 11, 21, 23, 27 };
    int n = sizeof(A) / sizeof(A[0]);

    sort(A, A + 6);
    printArr(A, n); // 12
    return 0;
}
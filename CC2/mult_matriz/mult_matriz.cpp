#include <iostream>
using namespace std;

void printArr(int(*a)[3][3]) {
    int* p = **a;
    for (int i = 0; i < 27; i++) {
        if (i % 9 == 0) {
            cout << endl;
        }
        cout << *(p + i) << " ";
    }
}

void mult(int(*A)[3][3]) {
    int* p = **A;
    int* q = **(A + 1);
    int* r = **(A + 2);
    int* ini_q = **(A + 1);
    int* ini_r = **(A + 2); // fin_q
    int* fin_r = r + 3;

    while (p < **(A+1)) {
        *r += *p * *q;
        r++, q++;
        if (q == ini_r) {
            q = ini_q;
            r += 3;
            fin_r += 3;
        }
        if (r == fin_r) {
            p++;
            r -= 3;
        }
    }
}

int main() {
    int matrix[3][3][3] = { {{10,10,10},{10,10,10},{10,10,10}},{{1,2,3},{4,5,6},{7,8,9}},{{0,0,0},{0,0,0},{0,0,0}} };
    mult(matrix);
    printArr(matrix);

    return 0;
}
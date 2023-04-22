#include <iostream>
using namespace std;

int suma(int a, int b, int mod) {
    return (a + b) % mod;
}

int resta(int a, int b, int mod) {
    return (a - b + mod) % mod;
}

int multiplicacion(int a, int b, int mod) {
    return (a * b) % mod;
}

int inversa(int a, int mod) {
    for (int i = 1; i < mod; i++) {
        if ((i * a) % mod == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a, b, mod;
    cout << "Ingrese dos numeros y su modulo: ";
    cin >> a >> b >> mod;

    int sum = suma(a, b, mod);
    int res = resta(a, b, mod);
    int mult = multiplicacion(a, b, mod);

    
    cout << "Suma: " << sum << endl;
    cout << "Resta: " << res << endl;
    cout << "Multiplicacion: " << mult << endl;

    // Inversa de a con mod
    int inv = inversa(a, mod);
    if (inv == -1) {
        cout << "La inversa de " << a << " con el modulo " << mod << " no existe." << endl;
    }
    else {
        cout << "La inversa de " << a << " con el modulo " << mod << " es " << inv << endl;
    }

    return 0;
}
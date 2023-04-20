/* (Factors) Write a program that reads in three integers and determines and prints if 
the first two integers are factors of the second. (Hint: Use the remainder operator (%) */

#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;

    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;

    if (c % a == 0) {
        cout << a << " is factor of " << c << endl;
    }
    if (c % a != 0) {
        cout << a << " is not factor of " << c << endl;
    }
    if (b % a == 0) {
        cout << b << " is factor of " << c << endl;
    }
    if (b % a != 0) {
        cout << b << " is not factor of " << c << endl;
    }

    return 0;
}
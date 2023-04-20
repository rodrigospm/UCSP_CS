/* (Largest and Smallest Integers) Write a program that reads in five integers and determines 
and prints the largest and the smallest integers in the group. 
Use only the programming techniques you learned in this chapter */

#include <iostream>
using namespace std;

int main() {
    int i1; 
    int i2;
    int i3;
    int i4;
    int i5;

    cout << "Enter 5 integers: ";
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    int il = i1;
    int is = i1;


    if (i1 > il) {
    il = i1; 
    }

    if (i2 > il) {
    il = i2; 
    }

    if (i3 > il) {
    il = i3; 
    }

    if (i4 > il) {
    il = i4; 
    }

    if (i5 > il) {
    il = i5; 
    }

    cout << "The largest number is: " << il << endl;

    if (i1 < is) {
    is = i1; 
    }

    if (i2 < is) {
    is = i2; 
    }

    if (i3 < is) {
    is = i3; 
    }

    if (i4 < is) {
    is = i4; 
    }

    if (i5 < is) {
    is = i5; 
    }

    cout << "The smallest number is: " << is << endl;

    return 0;
}
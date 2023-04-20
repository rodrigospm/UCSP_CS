/* (Odd or Even) Write a program that reads in two integers and determines and prints whether each integer, 
as well as the sum of the two integers is an odd number. (Hint: Use the remainder operator (%). 
An odd number is not a multiple of two. Any odd number has a remainder of one when divided by 2 */

#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int sum;

    cout << "Enter two integers: " << endl;
    cin >> a >> b;
    
    sum = a+b;

    if (a%2!=0) {
        cout << a << " is an odd number" << endl;
    }
    if (a%2==0) {
        cout << a << " is not an odd number" << endl;
    }
    if (b%2!=0) {
        cout << b << " is an odd number" << endl;
    }
    if (b%2==0) {
        cout << b << " is not an odd number" << endl;
    }
    if (sum%2!=0) {
        cout << "the sum of a and b is an odd number" << endl;
    }
    if (sum%2==0) {
        cout << "the sum of a and b is not an odd number";
    }

    return 0;
}
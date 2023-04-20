/* The sum of the squares of the first ten natural numbers is, 
The square of the sum of the first ten natural numbers is,
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 0;
    int sumSquare = 0;
    int squareSum = 0;

    while (i <= 100) {
        sumSquare = sumSquare + i*i;
        i = i + 1;
    }

    while (j <= 100){
        squareSum = squareSum + j;
        j = j + 1;
    }

    cout << "La diferencia es: " << (squareSum*squareSum)-sumSquare;

    return 0;
}
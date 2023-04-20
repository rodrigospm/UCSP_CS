/* A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers. */ 
 
#include <iostream>
using namespace std;

int main() {
    int i = 999;
    int j = 999;
    int k = j;
    int reverse = 0;
    int varTest = 0;

    while (i >= 900) {
        j = 999;
        while (j >= 900) {
            while (k != 0) {
                varTest = k % 10;
                reverse = reverse * 10 + varTest;
                k = k / 10;
            }
            if (j*k == reverse) {
                cout << reverse;
            }
            j = j - 1;
        }
        i = i - 1;
    }
}
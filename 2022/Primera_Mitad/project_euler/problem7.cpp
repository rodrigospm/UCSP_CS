/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number? */

#include <iostream>
using namespace std;
  
bool esPrimo(int n) {
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long N = 999999999999;
    int j = 1;
  
    for (int i = 1; i <= N; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            if (j >= 10001) {
                break;
            }
            j = j + 1;
        }
    }
    return 0;
}
/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.}
Find the sum of all the primes below two million. */

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
    long long N = 2000000;
    long long sum = 0;
  
    for (int i = 1; i <= N; i++) {
        if (esPrimo(i)) {
            sum = sum + i;
        }
    }
    cout << sum;
    return 0;
}
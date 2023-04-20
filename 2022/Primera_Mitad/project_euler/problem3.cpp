/* The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143 ?*/

#include <iostream>
using namespace std;

int main() {
    long long n = 20;
    int i = 1;
    while (i <= n) {
        if (n % i == 0) {
            cout << i << " ";
            n = n / i;            
        }
        i = i + 1;    
    }
    return 0;
}

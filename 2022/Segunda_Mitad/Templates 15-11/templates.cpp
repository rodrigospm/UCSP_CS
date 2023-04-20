#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum (const T a, const T b) {
    return a + b;
}

int main() {
    cout << sum<int>(3, 5) << endl;
    cout << sum<double>(4.5, 5.7) << endl;
    cout << sum<string>("hola", "mundo") << endl;

    return 0;
}

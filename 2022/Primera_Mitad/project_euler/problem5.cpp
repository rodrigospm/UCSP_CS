/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

#include <iostream>
using namespace std;

int main() {

    long long i = 1;
    long long x = 999999999999;

    while (i < x) {
        if (i % 2 == 0) {
            if (i % 3 == 0) {
                if (i % 4 == 0) {
                    if (i % 5 == 0) {
                        if (i % 6 == 0) {
                            if (i % 7 == 0) {
                                if (i % 8 == 0) {
                                    if (i % 9 == 0) {
                                        if (i % 10 == 0) {
                                            if (i % 11 == 0) {
                                                if (i % 12 == 0) {
                                                    if (i % 13 == 0) {
                                                        if (i % 14 == 0) {
                                                            if (i % 15 == 0) {
                                                                if (i % 16 == 0) {
                                                                    if (i % 17 == 0) {
                                                                        if (i % 18 == 0) {
                                                                            if (i % 19 == 0) {
                                                                                if (i % 20 == 0) {
                                                                                    cout << i;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        i = i + 1;
    }
    return 0;
}
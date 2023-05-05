#include<iostream>
using namespace std;

void print(__uint128_t x) {
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

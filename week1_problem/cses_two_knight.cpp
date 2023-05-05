#include<iostream>
using namespace std;

void print(__uint128_t x) {
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

int main(){
    int k;
    cin >>k;
    __uint128_t l=0;
    for (__uint128_t i=1;i<k+1;i++){
        print(l);
        cout<<"\n";
        __uint128_t a= (i+1)*(i)*(2*i+1)-8*(i-1);
        l += a;
    }
}
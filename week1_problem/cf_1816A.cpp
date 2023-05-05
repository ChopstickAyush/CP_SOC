#include<iostream>
#include <numeric>
using namespace std;

int main(){

    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >>a>>b;
        if (gcd(a,b)==1){
            cout << 1<<"\n";
            cout << a<<" "<<b<<"\n";
        }
        else{
            cout << 2<<"\n";
            cout << 1<<" "<<b-1<<"\n";
            cout << a<<" "<<b<<"\n";
        }
    }
}
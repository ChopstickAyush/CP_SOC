#include<iostream>
using namespace std;

void shift(int n,int i,int f,int m){
    if (n==0){
        return;
    }
        shift(n-1,i,m,f);
        cout<< i<<" "<<f<<"\n";
        shift(n-1,m,f,i);
        return;
}

int power(int i){
    int j=1;
    while(i--){
        j=2*j;
    }
    return j;
}

int main(){
    int n;
    cin >> n;
    cout << power(n)-1<<"\n";
    shift(n,1,3,2);
}
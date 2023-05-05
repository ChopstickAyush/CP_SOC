#include<iostream>
#include <numeric>
using namespace std;


bool min_gcd(int *a,int n){
    int mmin=3;
    for (int i=0;i<n;i++){
         for (int j=i+1;j<n;j++){
            mmin= min(mmin,gcd(a[i],a[j]));
    }
    }
    return (mmin<3);
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int* a=new int[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        bool ans = min_gcd(a,n);
        if (ans == true){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
}
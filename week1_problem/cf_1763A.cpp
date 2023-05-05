#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        int a1,a3;
        cin>>n;
        cin >>a1;
        a3=a1;
        int a2;
        for (int i=0;i<n-1;i++){
            cin >> a2;
            a1 |= a2;
            a3 &= a2;
        }
        cout << a1-a3<<"\n";
    }
}
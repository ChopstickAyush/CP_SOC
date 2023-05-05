#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        int a1;
        cin>>n;
        cin >>a1;
        int a2;
        for (int i=0;i<n-1;i++){
            cin >> a2;
            a1 ^= a2;
        }
        if (n%2==1){
            cout<<a1<<"\n";
        }
        else{
            if (a1==0){
                cout << 0<<"\n";
            }
            else{
                cout <<-1<<"\n";
            }
        }
    }
}
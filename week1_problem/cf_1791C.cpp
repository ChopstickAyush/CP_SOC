#include<iostream>
#include<string>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        char* a= new char[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        int i=0,j=n-1;
        while(i<j){
            if (a[i]==a[j]) break;
            else{
                i++;
                j--;
            }
        }
        cout << n-2*i<<"\n";
    }
}

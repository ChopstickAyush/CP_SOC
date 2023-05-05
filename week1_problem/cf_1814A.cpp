#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long unsigned n,k;
        cin>>n>>k;
        if (n%2==0){
            cout << "yes\n";
        }
        else{
           if (k%2==0){
            cout << "no\n";
           }
           else{
              if (n-k>=0){
                cout << "yes\n";
              }
              else{
                cout << "no\n";
              }
           }
        }
    }

}
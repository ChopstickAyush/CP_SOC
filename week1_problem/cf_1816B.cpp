#include<iostream>
#include <numeric>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> v1;
        vector<int> v2;
        v1.push_back(2*n);
        int i=1;
        int j=n+1;
        for (int l=0;l<n-1;l++){
            if (l%2==0){
            v1.push_back(i);
            v2.push_back(i+1);
            i+=2;
            }
            else{
            v1.push_back(j);
            v2.push_back(j+1);
            j+=2; 
            }

        }
        v2.push_back(2*n-1);
        for (int i=0;i<n;i++){
            cout << v1[i]<<" ";
        }
        cout << "\n";
         for (int i=0;i<n;i++){
            cout << v2[i]<<" ";
        }
        cout << "\n";
    }
}
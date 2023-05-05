#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin >>a[i];
        }
        int min=1,max=n;
        int l=0,r=n-1;
        int state=0;
        while(state==0 && l!=r){
            if(a[l]==min){
                min++;
                l++;
            }
            else if(a[l]==max){
                max--;
                l++;
            }
            else if(a[r]==min){
                min++;
                r--;
            }
            else if(a[r]==max){
                max--;
                r--;
            }
            else{
                state=1;
                break;
            }
        }
        if (state==1){
            cout << l+1<<" "<<r+1<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        string s;
        cin >>n;
        cin >>s;
        bool ans[n/2];
        for (int i=0;i<n/2;i++){
            ans[i]=(s[i]==s[n-1-i]);
        }
        int state=1;
        for (int i=0;i<n/2;i++){
            if (!(ans[i]) && state==1) state=2;
            if (ans[i] && state==2) state=3;
            if (!ans[i] && state==3) state=4;
        }
        if (state!=4) cout <<"yes\n";
        else{
            cout <<"no\n";
        }

    }
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans=1,curr=1;
    char c,prev;
    prev=s[0];
    for (int i=1;i<s.length();i++){
        
        c=s[i];
        if (c==prev){
            curr++;
            ans =max(ans,curr);
        }
        else{
            curr=1;
        }
        prev=c;  
    }
    cout << ans<<endl;
}
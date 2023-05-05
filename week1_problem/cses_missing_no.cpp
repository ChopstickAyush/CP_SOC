#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<int,int> ans;
    int t;
    cin >>t;
    for (int i=0;i<t-1;i++){
        int b;
        cin >> b;
        ans[b]=1;
    }
    for (int i=1;i<t+1;i++){
        if (ans[i]!=1){
            cout << i<<"\n";
            break;
        }
    }

}
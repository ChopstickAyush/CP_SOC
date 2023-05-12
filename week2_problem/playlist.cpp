#include<iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >>n;
    map<int,int> found;
    map<int,int> last_pos;
    int ans=0;
    int curr=0;
    int start=0;
    for (int i=0;i<n;i++){
        int k;
        cin >>k;
        start=max(last_pos[k],start);
        last_pos[k]=i+1;
        ans=max(ans,i+1-start);
    }
    cout << ans<<"\n";
}
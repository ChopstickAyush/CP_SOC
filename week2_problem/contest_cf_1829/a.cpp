#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){

    

}

void solve(){

    string  s;
    cin>>s;
    string a ="codeforces";
    int ans=0;
    loop0(j,s.size()){
        if (s[j]!=a[j]){
            ans +=1;
        }
    }
    cout << ans<<"\n";

}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    cin>>T;

    precomp();

    loop1(I,T){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}
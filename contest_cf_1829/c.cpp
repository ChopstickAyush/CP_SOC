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
    int n;
    cin >> n;
    int s01 =10e6, s10=10e6,s11=10e6; 
    loop0(j,n){
        int k;string s;
        cin >> k>>s;
        if (s=="01") s01=min(s01,k);
        if (s=="10") s10=min(s10,k);
        if (s=="11") s11=min(s11,k);
    }
   int a= min(s01+s10,s11);
   if (a==10e6)cout<<-1 <<"\n";
   else{
     cout<<a <<"\n";
   }
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
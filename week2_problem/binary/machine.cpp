#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){
}

ll comp(ll*a ,ll n, ll t){
    if (t<=0) return 0;
    ll x=0;
    loop0(j,n){
        x+=t/a[j];
    }
    return x;
}

void solve(){

    ll N,K;
    cin >>N>>K;
    ll a[N];
    ll mmin =10e9;
    loop0(i,N){
        cin >> a[i];
        mmin=min(mmin,a[i]);
    }
    ll right=mmin*K;
    ll left=0;
    ll hour=(left+right)/2;
    while((comp(a,N,hour)>=K && comp(a,N,hour-1)>=K) ||  (comp(a,N,hour)<K)){
        if ((comp(a,N,hour)>=K && comp(a,N,hour-1)>=K)){
            right=hour-1; 
        }
        if (comp(a,N,hour)<K){
            left=hour+1;
        }
        hour=(left+right)/2;
    }
    if ((comp(a,N,hour)>K && comp(a,N,hour-1)<K)) cout << hour<<endl;
    else if (comp(a,N,hour)==K) cout << hour<<endl;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    T=1;

    precomp();

    loop1(I,T){

        solve();
        //cout<<"Case #"<<I<<": "<<ans<<"\n";
    }
}
    
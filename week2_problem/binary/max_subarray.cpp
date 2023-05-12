#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){
}

ll comp(ll*a ,ll n, ll t,ll b){
    ll x=0;
    if (t<b) return n+1;
    ll sum=0;
    loop0(r,n){
        if (sum+a[r]<=t){
            sum += a[r];
        }
        else{
            x++;
            sum =a[r];
        }
    }
    if (sum!=0){
        x++;
    }
    return x;
}

void solve(){

    ll N,K;
    cin >>N>>K;
    ll a[N];
    ll sum=0;
    ll mmax=0;
    loop0(i,N){
        cin >> a[i];
        sum += a[i];
        mmax=max(mmax,a[i]);
    }
    ll right=sum;
    ll left=mmax;
    ll hour=(left+right)/2;
    while((comp(a,N,hour,mmax)<=K && comp(a,N,hour-1,mmax)<=K) ||  (comp(a,N,hour,mmax)>K)){
        if ((comp(a,N,hour,mmax)<=K && comp(a,N,hour-1,mmax)<=K)){
            right=hour-1; 
        }
        if (comp(a,N,hour,mmax)>K){
            left=hour+1;
        }
        hour=(left+right)/2;
    }
    if ((comp(a,N,hour,mmax)<=K && comp(a,N,hour-1,mmax)>K)) cout << hour<<endl;
    else if (comp(a,N,hour,mmax)==K) cout << hour<<endl;
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
    
#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){
}

ll mod(ll a){
    if (a<0) return -a;
    return a;
}


void solve(){

    ll N,M;
    cin >> N>>M;
    ll *a=new ll[N];ll *b=new ll[M];
    loop0(i,N){
        cin >> a[i];
    }
     loop0(i,M){
        cin >> b[i];
    }
    ll i2=0;
    ll r=0;
    loop0(i,N){
        while(i2<M-1 && (mod(a[i]-b[i2])>=mod(a[i]-b[i2+1]))) i2++;
        r=max(r,mod(a[i]-b[i2]));
    }
    cout << r<<"\n";
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
    
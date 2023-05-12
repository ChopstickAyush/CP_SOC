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

bool possible(ll no, ll*a,ll*b,ll k,ll n){
       ll extra=0;
       loop0(i,n){
       if ((a[i]*no-b[i])>0) extra += (a[i]*no-b[i]); }
       return (extra <=k);
}

void solve(){

    ll N,K;
    cin >> N>>K;
    ll a[N],b[N];
    loop0(i,N){
        cin >> a[i];
    }
     loop0(i,N){
        cin >> b[i];
    }
    ll right=(b[0]+K)/a[0];
    ll left=0;
    ll ans =(right+left)/2;
    while(!possible(ans,a,b,K,N) || possible(ans+1,a,b,K,N)){
        if (!possible(ans,a,b,K,N)){
            right = ans-1;
        }
        else{
            left=ans+1;
        }
        ans =(right+left)/2;
    }
    cout << ans<<" \n";

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
    
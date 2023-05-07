#include<iostream>
#include<numeric>
using namespace std;
#include<map>
#include<string>
#include<iterator>
typedef int64_t ll;
#include<string>
#include<set>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){

    

}


void solve(){
    int n;
    int m;
    cin >> n>>m;

    int a[n];
    loop0(j,n){
        a[j]=0;
    }
    loop0(j,m){
        int c,d;
        cin >>c>>d;
        a[--c]++;
        a[--d]++;
    }
    if (m==n*(n-1)/2) {cout << n-1<<" "<<n-2<<"\n";return;}
    map<int,int> mans;
    loop0(j,n){
        mans[a[j]]++;  
    }
    int deg=0,second_degree=0;
    for (auto i:mans){
       second_degree=deg;
       deg=max(deg,i.first);
    }
    if (mans[second_degree]==deg) cout << deg << " "<< (m/deg-1)<<"\n";
    if (mans[deg]==second_degree)  cout << second_degree << " "<< m/second_degree-1<<"\n";
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
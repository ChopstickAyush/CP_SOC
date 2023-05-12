#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)

//------Global Variables------

/*const string kInputFilename = "input.txt";
const string kOutputFilename = "output.txt";

ifstream fin(kInputFilename);
ofstream fout(kOutputFilename);*/

void precomp(){

    

}

void solve(){

    ll n,k;
    cin>>n>>k;
    double a[n];
    loop0(l,n){
        int r;
        cin >>r;
        a[l]=r;
    }
    bool b[n-1];
    loop0(j,n-1){
        b[j]=((2*a[j+1]/a[j])>1);
    }
    ll ans=0;
    ll last_false=0;
    loop0(r,n-1){
        if (b[r]==false) last_false=r+1;
        if (r+1-last_false>=k) ans+=1;
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
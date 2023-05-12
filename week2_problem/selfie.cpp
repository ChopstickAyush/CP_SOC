#include<iostream>
using namespace std;
#include<string>
#include <cmath>
#include<vector>
typedef int64_t ll;
#include<utility>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
typedef pair<int,int> pii;
//------Global Variables------

/*const string kInputFilename = "input.txt";
const string kOutputFilename = "output.txt";

ifstream fin(kInputFilename);
ofstream fout(kOutputFilename);*/

struct interval{
    ll start;
    ll end;
    ll id;
}

void precomp(){

}

ll doi(ll a , ll b ,ll c, vector<ll>& slope){
    if (c<0) return 10e9;
    double start= b-2*sqrt(double(a*c));
    double end= b+2*sqrt(double(a*c));
    loop0(i,slope.size()){
        if(start<slope[i] && slope[i]<end) return slope[i];
    }
    return 10e9;

}

void solve(){
    ll N,M;
    cin >> N>>M;
    vector<ll> height;
    loop0(i,N){
        ll a;
        cin >> a;
        height.push_back(a);
    }
    sort(height.begin(),height.end());
    loop0(i,M){
        ll a,b,c;
        cin >> a>>b>>c;
        ll ans=doi(a,b,c,height);
        if(ans==10e9) cout << "NO\n";
        else{
            cout << "Yes\n";
            cout << ans<<"\n";
    }
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
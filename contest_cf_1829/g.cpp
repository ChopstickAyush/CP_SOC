#include<iostream>
using namespace std;
#include<string>
typedef int64_t ll;
#include<set>
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int a[2000][2000];
int b[1000001];
int c[1000001];

void precomp(){
int i=1;
for (int j=0;j<2000;j++){
    for (int k=0;k<=j;k++){
        if (i>1000000) return;
        b[i]=k;
        c[i]=j-k;
        a[k][j-k]=i++;
    }
   
}
}

void msolve(long long i,set<long long>& nums,long long& ans){
    int x=b[i];
    int y=c[i];
    nums.insert(i);
    ans += i*i;
    if (x>0){
        if(!nums.count(a[x-1][y]))
        msolve(a[x-1][y],nums,ans);

    }
    if (y>0){
         if(!nums.count(a[x][y-1]))
        msolve(a[x][y-1],nums,ans);
    }
    return;
}

void solve(){
    long long n;
    cin >> n;
    set<long long> nums;
    long long ans=0;
    msolve(n,nums,ans);
    set<long long>::iterator itr;
    cout << ans<<endl;
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
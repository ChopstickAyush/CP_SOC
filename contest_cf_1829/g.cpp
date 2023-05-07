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
int d[1000001];

void precomp(){
int i=1;
for (int j=0;j<2000;j++){
    for (int k=0;k<=j;k++){
        if (i>1000000) return;
        b[i]=k;
        d[i]=-1;
        c[i]=j-k;
        a[k][j-k]=i++;
    }
   
}
}

void msolve(long long i,long long& ans,int l){
    int x=b[i];
    int y=c[i];
    d[i]=l;
    ans += i*i;
    if (x>0){
        if(d[a[x-1][y]]!=l)
        msolve(a[x-1][y],ans,l);


    }
    if (y>0){
        if(d[a[x][y-1]]!=l)
        msolve(a[x][y-1],ans,l);
    }
    return;
}

void solve(int a){
    long long n;
    cin >> n;
    set<long long> nums;
    long long ans=0;
    msolve(n,ans,a);
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

        solve(I);
        //cout<<"Case #"<<I<<": "<<ans<<"\n";

    }
}

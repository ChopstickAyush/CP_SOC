#include<iostream>
#include<numeric>
using namespace std;
#include<string>
typedef int64_t ll;
#include<string>
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
void precomp(){

    

}

int log(int a , int b){
    int x=0;
    while(a!=1){
        if (a%b!=0) return -1;
        else{
            x+=1;
            a=a/b;
        }
    }
    return x;
}

void solve(){
    int n;
    cin >> n;
    int m;
    cin >>m;
    int g=gcd(m,n);
    n =n/g;
    m =m/g;
    int z = log(n,3);
    int y = log(m,2);
    if (y>z || y==-1 || z==-1) cout << "No"<<"\n";
    else{
        cout << "Yes"<<"\n";
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
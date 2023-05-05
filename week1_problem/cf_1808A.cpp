#include<iostream>
using namespace std;
int lucky(int n){
    int mmax=n%10;
    int mmin=n%10;
    while(n!=0){
        mmax=max(mmax,n%10);
        mmin=min(mmin,n%10);
        n=n/10;
    }

    return mmax-mmin;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >>a >> b;
        if(a<=((a/100)*100+90) && ((a/100)*100+90)<=b){
                cout << ((a/100)*100+90)<<"\n";
            }
        else if(a<=(100*(b/100)+90) && (100*(b/100)+90)<=b){
                cout << ((b/100)*100+90)<<"\n";
            }
        else{
            int mmax=lucky(a);
            int number=a;
            for (int i=a+1;i<1+b;i++){
                if (lucky(i)>mmax){
                    mmax=lucky(i);
                    number=i;
                }
                if (mmax==9) break;
            }
            cout << number<<"\n";
         
        }
    }
}
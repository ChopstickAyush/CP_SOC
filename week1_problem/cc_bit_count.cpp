#include <iostream>
#include<cmath>
using namespace std;
int no_rem(int N,int b){
    int x=N/b;
    int r=N-x*b;
    int a;
    if (r<b/2){
       a= 0;
    }
    else{
        a= (r-b/2+1);
    }
    return a+(b/2)*x;
}

int main() {
	// your code goes here
	int t;
    cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a=1;
	    int ans=0;
	    while(n>=pow(2,a-1)){
	        ans+=no_rem(n,pow(2,a));
            a++;
	        
	    }
	    cout << ans<<"\n";
	}
	return 0;
}
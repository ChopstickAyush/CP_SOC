#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for (int i=0;i<n;i++) cin >>a[i];
	    int l[n];
	    l[0]=0;
	    int r[n];
	    r[0]=0;
	    for (int i=1;i<n;i++){
	        l[i]=max(l[i-1],a[i-1]);
	        r[i]=max(r[i-1],a[n-i]);
	    } 
	    int ans=0;
	     for (int i=1;i<n;i++){
	         if (min(l[i],r[n-1-i])>a[i]) ans += min(l[i],r[n-1-i])-a[i];
	     }
	     cout << ans << "\n";
	    
	}
	return 0;
}

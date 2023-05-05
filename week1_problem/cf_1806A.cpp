#include<iostream>
#include <numeric>
using namespace std;


int min_steps(int dx,int dy){
    if (dy<0){
        return -1;
    }
    if (dx>dy){
        return -1;
    }
    return 2*dy-dx;
}

int main(){
    int t;
    cin >>t;
    while(t--){
       int a,b,c,d;
       cin >>a>>b>>c>>d;
       cout << min_steps(c-a,d-b)<<"\n";
       
    }
}
#include<iostream>
using namespace std;

#include<vector>
typedef int64_t ll;
#include<string>
#include<utility>
typedef pair<ll,ll> pii;
#define loop0(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)

bool func(const ll&a,const ll&b, vector<ll> &nums){
    return nums[a]<nums[b];
}

int main(){
    ll n;
    cin >>n;
    ll sum;
    cin >> sum;
    vector<pii> nums;
    loop0(i,n){
        ll k; cin >>k;
        nums.push_back(pii(k,i));
    }
   sort(nums.begin(),nums.end());
   loop0(i,n){
      int k=i+1;
      for (int j=n-1;j>i+1;j--){
        while(k<j-1 && nums[i].first+nums[j].first+nums[k].first<sum)k++;
        if (k<j && nums[i].first+nums[j].first+nums[k].first == sum){
            cout << nums[i].second+1 <<" "<<nums[j].second+1<<" "<< nums[k].second+1;
            return 0;
        }
      }
   }
   cout << "IMPOSSIBLE";
}
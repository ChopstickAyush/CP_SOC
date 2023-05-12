#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;



int function1(int i,vector<int>& nums,int target){  
    int mans=0;
    for (int j=i;j<nums.size();j++){
        if (nums[j]==target) mans+=1;
        else if (nums[j]<target) {
            mans+=function1(j+1,nums,target-nums[j]);
        }
    }
    return mans;
}

int main(){
    int n,x;
    cin >>n>>x;
    vector<int> nums;
    for (int i=0;i<n;i++){
        int a;
        cin >>a;
        nums.push_back(a);
    }
    cout << function1(0,nums,x);
}
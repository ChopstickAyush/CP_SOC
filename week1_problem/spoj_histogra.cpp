#include <iostream>
#include <stack>
#include<vector>
using namespace std;

class Solution {
public:
    long long largestRectangleArea(vector<long long>& heights) {
    stack<int> s1;
    stack<int> s2;
        long long ans = 0;
        long long h;
        for (int i = 0; i < heights.size(); i++)
        {
            h=heights[i];
            if (s1.empty() || s1.top() <= h)
            {
                s1.push(h);
                s2.push(i);
            }
            else
            {
                while (!s1.empty() && !(s1.top() <= h))
                {
                    int a1 = s1.top();
                    int a2 = s2.top();
                    s2.pop();
                    if (!s2.empty()){
                        long long a=(s1.top() * (i-1 - s2.top()));
                        if (ans<a){
                            ans=a;
                        }
                        }
                    else
                    {
                     long long  a=(s1.top() * (i));
                     if (ans<a){
                            ans=a;
                        }
                    }
                    s1.pop();
                }
                s1.push(h);
                s2.push(i);
            }
        }
        while(!s1.empty()){
                s2.pop();
                    if (!s2.empty()){
                        long long a =s1.top()*(heights.size()-1 - s2.top());
                        if (ans<a){
                            ans=a;
                        }
                    }
                    else
                    {
                        long long a=s1.top() * (heights.size());
                        if (ans<a){
                            ans=a;
                        }
                    }
                   
                    s1.pop();

        }
        return ans;
    }
};

int main()
{
  Solution s1;
  while(true){
    
    int n;
    cin >> n;
    if (n==0) return 0;
    else{
        vector<long long> h;
        long long  h1;
        for (int i=0;i<n;i++){
            cin >>h1;
            h.push_back(h1);

        }
        cout << s1.largestRectangleArea(h)<<"\n";
    }
  }
}
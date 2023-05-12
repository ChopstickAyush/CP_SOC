#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num2.length()==1){
            return single_multiply(num1,int(num2[0]-'0'));
        }
        int i=num2[num2.length()-1]-'0';
        num2.pop_back();
        string s=multiply(num1,num2);
        s += '0';
        string a=add(s,single_multiply(num1,i));
        while(a[0]=='0' && a.length()>1){
            a.erase(a.begin());
        }
        return a;
    }

    string single_multiply(string num1,int x){
        int i=num1.length();
        int carry=0;
        string s="";
        for (int j=0;j<i;j++){
            int a1=num1[i-j-1]-'0';
            int prod=a1*x+carry;
            int digit=prod%10;
            carry=prod/10;
            string num =to_string(digit);
            s.insert(0,num);
        }
        if (carry!=0){
           string num =to_string(carry);
           s.insert(0,num);
        }
        while(s[0]=='0' && s.length()>1){
            s.erase(s.begin());
        }
        return s;
    }

    string add(string num1,string num2){
        int i =max(num1.length(),num2.length());
        int carry=0;
        string s="";
        int a1,a2;
        for (int l=0;l<i;l++){
           if(num1.length()>l)  a1=num1[num1.length()-1-l]-'0';
           else{
               a1=0;
           }
           if(num2.length()>l)  a2=num2[num2.length()-1-l]-'0';
           else{
               a2=0;
           }
           int digit=(a2+a1+carry)%10;
           carry =(a2+a1+carry)/10;
           string num =to_string(digit);
           s.insert(0,num);
        }
        if (carry!=0){
           string num =to_string(carry);
           s.insert(0,num);
        }
        return s;
    }
};
int main(){

Solution s1;
cout<<s1.multiply("99940343039423383892023929382","4733663637737463747346")<<"\n";
}